/* Automatically generated from Squeak on 22 March 2013 8:31:32 am 
   by VMMaker 4.11.2
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

#include "sqMemoryAccess.h"


/*** Constants ***/
#define FormBitsIndex 0
#define FormDepthIndex 3
#define FormHeightIndex 2
#define FormWidthIndex 1

/*** Function Prototypes ***/
#pragma export on
EXPORT(const char*) getModuleName(void);
#pragma export off
static sqInt halt(void);
#pragma export on
EXPORT(sqInt) primitivePixelValueAt(void);
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);
#pragma export off
/*** Variables ***/

#ifdef SQUEAK_BUILTIN_PLUGIN
extern
#endif
struct VirtualMachine* interpreterProxy;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"PixelValuePeekPlugin 22 March 2013 (i)"
#else
	"PixelValuePeekPlugin 22 March 2013 (e)"
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


/*	returns the single pixel at x@y.
	It does not handle LSB bitmaps right now.
	If x or y are < 0, return 0 to indicate transparent (cf BitBlt>bitPeekerFromForm: usage).
	Likewise if x>width or y>depth.
	Fail if the rcvr doesn't seem to be a Form, or x|y seem wrong */

EXPORT(sqInt) primitivePixelValueAt(void) {
	sqInt pixel;
	sqInt stride;
	sqInt width;
	sqInt depth;
	sqInt rcvr;
	sqInt height;
	sqInt ppW;
	sqInt word;
	sqInt shift;
	sqInt bitmap;
	sqInt mask;
	sqInt xVal;
	sqInt yVal;
	sqInt _return_value;

	xVal = interpreterProxy->stackIntegerValue(1);
	yVal = interpreterProxy->stackIntegerValue(0);
	rcvr = interpreterProxy->stackValue(2);
	if (interpreterProxy->failed()) {
		return null;
	}
	if ((xVal < 0) || (yVal < 0)) {
		_return_value = ((0 << 1) | 1);
		if (interpreterProxy->failed()) {
			return null;
		}
		interpreterProxy->popthenPush(3, _return_value);
		return null;
	}
	rcvr = interpreterProxy->stackValue(interpreterProxy->methodArgumentCount());
	if (!((interpreterProxy->isPointers(rcvr)) && ((interpreterProxy->slotSizeOf(rcvr)) >= 4))) {
		interpreterProxy->primitiveFail();
		return null;
	}
	bitmap = interpreterProxy->fetchPointerofObject(FormBitsIndex, rcvr);
	width = interpreterProxy->fetchIntegerofObject(FormWidthIndex, rcvr);
	height = interpreterProxy->fetchIntegerofObject(FormHeightIndex, rcvr);

	/* if width/height/depth are not integer, fail */

	depth = interpreterProxy->fetchIntegerofObject(FormDepthIndex, rcvr);
	if (interpreterProxy->failed()) {
		return null;
	}
	if ((xVal >= width) || (yVal >= height)) {
		_return_value = ((0 << 1) | 1);
		if (interpreterProxy->failed()) {
			return null;
		}
		interpreterProxy->popthenPush(3, _return_value);
		return null;
	}
	if (depth < 0) {
		interpreterProxy->primitiveFail();
		return null;
	}

	/* pixels in each word */

	ppW = 32 / depth;

	/* how many words per rox of pixels */

	stride = (width + (ppW - 1)) / ppW;

	/* load the word that contains our target */

	word = interpreterProxy->fetchLong32ofObject(((yVal * stride) + (xVal / ppW)) + 1, bitmap);

	/* make a mask to isolate the pixel within that word */

	mask = ((usqInt) 4294967295U) >> (32 - depth);

	/* this is the tricky MSB part - we mask the xVal to find how far into the word we need, then add 1 for the pixel we're looking for, then * depth to get the bit shift */

	shift = 32 - (((xVal & (ppW - 1)) + 1) * depth);

	/* shift, mask and dim the lights */

	pixel = (((usqInt) word) >> shift) & mask;
	_return_value = ((pixel << 1) | 1);
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(3, _return_value);
	return null;
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


void* PixelValuePeekPlugin_exports[][3] = {
	{"PixelValuePeekPlugin", "primitivePixelValueAt", (void*)primitivePixelValueAt},
	{"PixelValuePeekPlugin", "getModuleName", (void*)getModuleName},
	{"PixelValuePeekPlugin", "setInterpreter", (void*)setInterpreter},
	{NULL, NULL, NULL}
};


#endif /* ifdef SQ_BUILTIN_PLUGIN */

