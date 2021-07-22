/* Smalltalk from Squeak4.6 with VMMaker 4.19.9 translated as C source on 22 July 2021 6:33:23 pm */
/* Automatically generated by
	SmartSyntaxPluginCodeGenerator VMMaker-dtl.426 uuid: 9027caee-1c43-47e7-aa12-7b8102bc8735
   from
	ClipboardExtendedPlugin VMMaker-dtl.426 uuid: 9027caee-1c43-47e7-aa12-7b8102bc8735
 */
static char __buildInfo[] = "ClipboardExtendedPlugin VMMaker-dtl.426 uuid: 9027caee-1c43-47e7-aa12-7b8102bc8735 " __DATE__ ;




/* Configuration options */
#include "sqConfig.h"

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

/*** Function Prototypes ***/
#pragma export on
EXPORT(const char*) getModuleName(void);
#pragma export off
static sqInt halt(void);
#pragma export on
EXPORT(sqInt) ioAddClipboardData(void);
EXPORT(sqInt) ioClearClipboard(void);
EXPORT(sqInt) ioCreateClipboard(void);
EXPORT(sqInt) ioGetClipboardFormat(void);
EXPORT(sqInt) ioReadClipboardData(void);
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);
#pragma export off
/*** Variables ***/

#ifdef SQUEAK_BUILTIN_PLUGIN
extern
#endif
struct VirtualMachine* interpreterProxy;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"ClipboardExtendedPlugin 22 July 2021 (i)"
#else
	"ClipboardExtendedPlugin 22 July 2021 (e)"
#endif
;
static sqInt simulator;



/*	Note: This is hardcoded so it can be run from Squeak.
	The module name is used for validating a module *after*
	it is loaded to check if it does really contain the module
	we're thinking it contains. This is important! */

EXPORT(const char*) getModuleName(void) {
	return moduleName;
}

static sqInt halt(void) {
	;
	return null;
}

EXPORT(sqInt) ioAddClipboardData(void) {
	sqInt clipboardAddress;
	sqInt formatLength;
	sqInt dataLength;
	sqInt clipboard;
	char *data;
	char *aFormat;

	clipboard = interpreterProxy->stackValue(2);
	interpreterProxy->success(interpreterProxy->isBytes(interpreterProxy->stackValue(1)));
	data = ((char *) (interpreterProxy->firstIndexableField(interpreterProxy->stackValue(1))));
	interpreterProxy->success(interpreterProxy->isBytes(interpreterProxy->stackValue(0)));
	aFormat = ((char *) (interpreterProxy->firstIndexableField(interpreterProxy->stackValue(0))));
	if (interpreterProxy->failed()) {
		return null;
	}
	clipboardAddress = interpreterProxy->positive32BitValueOf(clipboard);
	dataLength = interpreterProxy->slotSizeOf((oopForPointer( data ) - BASE_HEADER_SIZE));
	formatLength = interpreterProxy->slotSizeOf((oopForPointer( aFormat ) - BASE_HEADER_SIZE));
	sqPasteboardPutItemFlavordatalengthformatTypeformatLength(clipboardAddress, data, dataLength, aFormat, formatLength);
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->pop(3);
	return null;
}

EXPORT(sqInt) ioClearClipboard(void) {
	sqInt clipboardAddress;
	sqInt clipboard;

	clipboard = interpreterProxy->stackValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	clipboardAddress = interpreterProxy->positive32BitValueOf(clipboard);
	sqPasteboardClear(clipboardAddress);
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->pop(1);
	return null;
}

EXPORT(sqInt) ioCreateClipboard(void) {
	sqInt clipboardAddress;

	clipboardAddress = interpreterProxy->positive32BitIntegerFor(sqCreateClipboard());
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, clipboardAddress);
	return null;
}

EXPORT(sqInt) ioGetClipboardFormat(void) {
	sqInt clipboardAddress;
	sqInt itemCount;
	sqInt clipboard;
	sqInt formatNumber;
	sqInt _return_value;

	clipboard = interpreterProxy->stackValue(1);
	formatNumber = interpreterProxy->stackIntegerValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	clipboardAddress = interpreterProxy->positive32BitValueOf(clipboard);
	itemCount = sqPasteboardGetItemCount(clipboardAddress);
	if (itemCount > 0) {
		_return_value = sqPasteboardCopyItemFlavorsitemNumber(clipboardAddress, formatNumber);
		if (interpreterProxy->failed()) {
			return null;
		}
		interpreterProxy->popthenPush(3, _return_value);
		return null;
	}
	_return_value = interpreterProxy->nilObject();
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(3, _return_value);
	return null;
}

EXPORT(sqInt) ioReadClipboardData(void) {
	sqInt clipboardAddress;
	sqInt formatLength;
	sqInt clipboard;
	char *format;
	sqInt _return_value;

	clipboard = interpreterProxy->stackValue(1);
	interpreterProxy->success(interpreterProxy->isBytes(interpreterProxy->stackValue(0)));
	format = ((char *) (interpreterProxy->firstIndexableField(interpreterProxy->stackValue(0))));
	if (interpreterProxy->failed()) {
		return null;
	}
	clipboardAddress = interpreterProxy->positive32BitValueOf(clipboard);
	formatLength = interpreterProxy->slotSizeOf((oopForPointer( format ) - BASE_HEADER_SIZE));
	_return_value = sqPasteboardCopyItemFlavorDataformatformatLength(clipboardAddress, format, formatLength);
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


void* ClipboardExtendedPlugin_exports[][3] = {
	{"ClipboardExtendedPlugin", "getModuleName", (void*)getModuleName},
	{"ClipboardExtendedPlugin", "ioClearClipboard", (void*)ioClearClipboard},
	{"ClipboardExtendedPlugin", "setInterpreter", (void*)setInterpreter},
	{"ClipboardExtendedPlugin", "ioGetClipboardFormat", (void*)ioGetClipboardFormat},
	{"ClipboardExtendedPlugin", "ioCreateClipboard", (void*)ioCreateClipboard},
	{"ClipboardExtendedPlugin", "ioReadClipboardData", (void*)ioReadClipboardData},
	{"ClipboardExtendedPlugin", "ioAddClipboardData", (void*)ioAddClipboardData},
	{NULL, NULL, NULL}
};


#endif /* ifdef SQ_BUILTIN_PLUGIN */

