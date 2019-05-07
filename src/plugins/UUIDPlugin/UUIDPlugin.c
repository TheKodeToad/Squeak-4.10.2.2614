/* Smalltalk from Squeak4.6 with VMMaker 4.16.6 translated as C source on 7 May 2019 7:31:07 pm */
/* Automatically generated by
	SmartSyntaxPluginCodeGenerator VMMaker-dtl.401 uuid: c8ffe0ea-c3b8-4f49-8343-df16ac0656ea
   from
	UUIDPlugin VMMaker-dtl.401 uuid: c8ffe0ea-c3b8-4f49-8343-df16ac0656ea
 */
static char __buildInfo[] = "UUIDPlugin VMMaker-dtl.401 uuid: c8ffe0ea-c3b8-4f49-8343-df16ac0656ea " __DATE__ ;




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
#include "UUIDPlugin.h"

#include "sqMemoryAccess.h"


/*** Constants ***/

/*** Function Prototypes ***/
#pragma export on
EXPORT(const char*) getModuleName(void);
#pragma export off
static sqInt halt(void);
#pragma export on
EXPORT(sqInt) initialiseModule(void);
EXPORT(sqInt) primitiveMakeUUID(void);
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);
EXPORT(sqInt) shutdownModule(void);
#pragma export off
/*** Variables ***/

#ifdef SQUEAK_BUILTIN_PLUGIN
extern
#endif
struct VirtualMachine* interpreterProxy;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"UUIDPlugin 7 May 2019 (i)"
#else
	"UUIDPlugin 7 May 2019 (e)"
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

EXPORT(sqInt) initialiseModule(void) {
	return sqUUIDInit();
}

EXPORT(sqInt) primitiveMakeUUID(void) {
	sqInt oop;
	char*location;

	oop = interpreterProxy->stackObjectValue(0);
	if ((interpreterProxy->failed()) || (((interpreterProxy->methodArgumentCount()) != 0) || ((!(interpreterProxy->isBytes(oop))) || ((interpreterProxy->byteSizeOf(oop)) != 16)))) {
		return interpreterProxy->primitiveFail();
	}
	location = interpreterProxy->firstIndexableField(oop);
	MakeUUID(location);
	return oop;
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

EXPORT(sqInt) shutdownModule(void) {
	return sqUUIDShutdown();
}


#ifdef SQUEAK_BUILTIN_PLUGIN


void* UUIDPlugin_exports[][3] = {
	{"UUIDPlugin", "setInterpreter", (void*)setInterpreter},
	{"UUIDPlugin", "shutdownModule", (void*)shutdownModule},
	{"UUIDPlugin", "initialiseModule", (void*)initialiseModule},
	{"UUIDPlugin", "primitiveMakeUUID", (void*)primitiveMakeUUID},
	{"UUIDPlugin", "getModuleName", (void*)getModuleName},
	{NULL, NULL, NULL}
};


#endif /* ifdef SQ_BUILTIN_PLUGIN */

