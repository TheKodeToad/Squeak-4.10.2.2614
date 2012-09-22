/* Automatically generated from Squeak on 30 July 2012 4:52:56 pm 
   by VMMaker 4.9.8
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Default EXPORT macro that does nothing (see comment in sq.h): */
#define EXPORT(returnType) returnType

/* Do not include the entire sq.h file but just those parts needed. */
/*  The virtual machine proxy definition */
#include "sqVirtualMachine.h"
/* Configuration options */
#include "sqConfig.h"
/* Platform specific definitions */
#include "sqPlatformSpecific.h"

#define true 1
#define false 0
#define null 0  /* using 'null' because nil is predefined in Think C */
#ifdef SQUEAK_BUILTIN_PLUGIN
#undef EXPORT
// was #undef EXPORT(returnType) but screws NorCroft cc
#define EXPORT(returnType) static returnType
#endif
#include "CameraPlugin.h"
#include <string.h>

#include "sqMemoryAccess.h"


/*** Constants ***/

/*** Function Prototypes ***/
#pragma export on
EXPORT(const char*) getModuleName(void);
#pragma export off
static sqInt halt(void);
#pragma export on
EXPORT(sqInt) primCameraName(void);
EXPORT(sqInt) primCloseCamera(void);
EXPORT(sqInt) primFrameExtent(void);
EXPORT(sqInt) primGetFrame(void);
EXPORT(sqInt) primGetParam(void);
EXPORT(sqInt) primOpenCamera(void);
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);
#pragma export off
/*** Variables ***/

#ifdef SQUEAK_BUILTIN_PLUGIN
extern
#endif
struct VirtualMachine* interpreterProxy;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"CameraPlugin 30 July 2012 (i)"
#else
	"CameraPlugin 30 July 2012 (e)"
#endif
;



/*	Note: This is hardcoded so it can be run from Squeak.
	The module name is used for validating a module *after*
	it is loaded to check if it does really contain the module
	we're thinking it contains. This is important! */

EXPORT(const char*) getModuleName(void) {
	return moduleName;
}

static sqInt halt(void) {
	;
}


/*	Get the name for the camera with the given number. Fail if the camera number is greater than the number of available cameras. */

EXPORT(sqInt) primCameraName(void) {
    sqInt cameraNum;
    sqInt count;
    char* dst;
    sqInt i;
    char* nameStr;
    sqInt resultOop;

	cameraNum = interpreterProxy->stackIntegerValue(0);
	if (interpreterProxy->failed()) {
		return 0;
	}
	nameStr = CameraName(cameraNum);
	if (nameStr == null) {
		interpreterProxy->success(0);
		return 0;
	}
	count = (int) strlen(nameStr);
	resultOop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), count);
	dst = ((char *) (interpreterProxy->firstIndexableField(resultOop)));
	for (i = 0; i <= (count - 1); i += 1) {
		dst[i] = (nameStr[i]);
	}
	interpreterProxy->popthenPush(2, resultOop);
	return 0;
}


/*	Close the camera. Do nothing if it was not open. */

EXPORT(sqInt) primCloseCamera(void) {
    sqInt cameraNum;

	cameraNum = interpreterProxy->stackIntegerValue(0);
	if (interpreterProxy->failed()) {
		return 0;
	}
	CameraClose(cameraNum);
	interpreterProxy->pop(1);
	return 0;
}


/*	Answer the frame extent of the given camera, or zero if the camera is not open. The extent is 16 bits of width and height packed into a single integer. */

EXPORT(sqInt) primFrameExtent(void) {
    sqInt cameraNum;
    sqInt e;

	cameraNum = interpreterProxy->stackIntegerValue(0);
	if (interpreterProxy->failed()) {
		return 0;
	}
	e = CameraExtent(cameraNum);
	interpreterProxy->popthenPush(2, ((e << 1) | 1));
	return 0;
}


/*	Copy a camera frame into the given Bitmap. The Bitmap should be for a Form of depth 32 that is the same width and height as the current camera frame. Fail if the camera is not open or if the bitmap is not the right size. If successful, answer the number of frames received from the camera since the last call. If this is zero, then there has been no change. */

EXPORT(sqInt) primGetFrame(void) {
    unsigned char *bitmap;
    sqInt bitmapOop;
    sqInt cameraNum;
    sqInt pixCount;
    sqInt result;

	cameraNum = interpreterProxy->stackIntegerValue(1);
	bitmapOop = interpreterProxy->stackValue(0);
	if (((bitmapOop & 1)) || (!(interpreterProxy->isWords(bitmapOop)))) {
		interpreterProxy->success(0);
		return 0;
	}
	bitmap = ((unsigned char *) (interpreterProxy->firstIndexableField(bitmapOop)));
	pixCount = interpreterProxy->stSizeOf(bitmapOop);
	result = CameraGetFrame(cameraNum, bitmap, pixCount);
	if (result < 0) {
		interpreterProxy->success(0);
		return 0;
	}
	interpreterProxy->popthenPush(3, ((result << 1) | 1));
	return 0;
}


/*	Answer the given integer parameter of the given camera. */

EXPORT(sqInt) primGetParam(void) {
    sqInt cameraNum;
    sqInt paramNum;
    sqInt result;

	cameraNum = interpreterProxy->stackIntegerValue(1);
	paramNum = interpreterProxy->stackIntegerValue(0);
	if (interpreterProxy->failed()) {
		return 0;
	}
	result = CameraGetParam(cameraNum, paramNum);
	interpreterProxy->popthenPush(3, ((result << 1) | 1));
	return 0;
}


/*	Open a camera. Takes one argument, the index of the device to open. */

EXPORT(sqInt) primOpenCamera(void) {
    sqInt cameraNum;
    sqInt desiredFrameHeight;
    sqInt desiredFrameWidth;
    sqInt ok;

	cameraNum = interpreterProxy->stackIntegerValue(2);
	desiredFrameWidth = interpreterProxy->stackIntegerValue(1);
	desiredFrameHeight = interpreterProxy->stackIntegerValue(0);
	if (interpreterProxy->failed()) {
		return 0;
	}
	ok = CameraOpen(cameraNum, desiredFrameWidth, desiredFrameHeight);
	if (ok == 0) {
		interpreterProxy->success(0);
		return 0;
	}
	interpreterProxy->pop(3);
	return 0;
}


/*	Note: This is coded so that is can be run from Squeak. */

EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter) {
    sqInt ok;

	interpreterProxy = anInterpreter;
	ok = interpreterProxy->majorVersion() == VM_PROXY_MAJOR;
	if (ok == 0) {
		return 0;
	}
	ok = interpreterProxy->minorVersion() >= VM_PROXY_MINOR;
	return ok;
}


#ifdef SQUEAK_BUILTIN_PLUGIN


void* CameraPlugin_exports[][3] = {
	{"CameraPlugin", "primGetParam", (void*)primGetParam},
	{"CameraPlugin", "primOpenCamera", (void*)primOpenCamera},
	{"CameraPlugin", "primCameraName", (void*)primCameraName},
	{"CameraPlugin", "primCloseCamera", (void*)primCloseCamera},
	{"CameraPlugin", "primGetFrame", (void*)primGetFrame},
	{"CameraPlugin", "setInterpreter", (void*)setInterpreter},
	{"CameraPlugin", "primFrameExtent", (void*)primFrameExtent},
	{"CameraPlugin", "getModuleName", (void*)getModuleName},
	{NULL, NULL, NULL}
};


#endif /* ifdef SQ_BUILTIN_PLUGIN */

