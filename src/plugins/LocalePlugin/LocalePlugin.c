/* Smalltalk from Squeak4.6 with VMMaker 4.16.5 translated as C source on 9 February 2019 6:06:45 pm */
/* Automatically generated by
	SmartSyntaxPluginCodeGenerator VMMaker-dtl.398 uuid: f2c6f2f6-d34e-4162-a397-0963f9429794
   from
	LocalePlugin VMMaker-dtl.398 uuid: f2c6f2f6-d34e-4162-a397-0963f9429794
 */
static char __buildInfo[] = "LocalePlugin VMMaker-dtl.398 uuid: f2c6f2f6-d34e-4162-a397-0963f9429794 " __DATE__ ;




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
#include "LocalePlugin.h"

#include "sqMemoryAccess.h"


/*** Constants ***/

/*** Function Prototypes ***/
#pragma export on
EXPORT(const char*) getModuleName(void);
#pragma export off
static sqInt halt(void);
#pragma export on
EXPORT(sqInt) initialiseModule(void);
EXPORT(sqInt) primitiveCountry(void);
EXPORT(sqInt) primitiveCurrencyNotation(void);
EXPORT(sqInt) primitiveCurrencySymbol(void);
EXPORT(sqInt) primitiveDaylightSavings(void);
EXPORT(sqInt) primitiveDecimalSymbol(void);
EXPORT(sqInt) primitiveDigitGroupingSymbol(void);
EXPORT(sqInt) primitiveLanguage(void);
EXPORT(sqInt) primitiveLongDateFormat(void);
EXPORT(sqInt) primitiveMeasurementMetric(void);
EXPORT(sqInt) primitiveShortDateFormat(void);
EXPORT(sqInt) primitiveTimeFormat(void);
EXPORT(sqInt) primitiveTimezoneOffset(void);
EXPORT(sqInt) primitiveVMOffsetToUTC(void);
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);
#pragma export off
/*** Variables ***/

#ifdef SQUEAK_BUILTIN_PLUGIN
extern
#endif
struct VirtualMachine* interpreterProxy;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"LocalePlugin 9 February 2019 (i)"
#else
	"LocalePlugin 9 February 2019 (e)"
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
	return sqLocInitialize();
}


/*	return a 3 char string describing the country in use. ISO 3166 is the relevant source here; see http://www.unicode.org/onlinedat/countries.html for details. Using the 3 character Alpha-3 codes */

EXPORT(sqInt) primitiveCountry(void) {
	sqInt oop;

	oop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), 3);
	sqLocGetCountryInto(interpreterProxy->firstIndexableField(oop));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, oop);
	return null;
}


/*	return a boolean specifying whether the currency symbol is pre or post fix. true -> pre */

EXPORT(sqInt) primitiveCurrencyNotation(void) {
	sqInt _return_value;

	_return_value = ((sqLocCurrencyNotation())? interpreterProxy->trueObject(): interpreterProxy->falseObject());
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, _return_value);
	return null;
}


/*	return a string describing the currency symbol used 
Still need to find details on standard symbols - ISO 4217 is supposed to be it but cannot find on web */

EXPORT(sqInt) primitiveCurrencySymbol(void) {
	sqInt length;
	sqInt oop;

	length = sqLocCurrencySymbolSize();
	oop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), length);
	sqLocGetCurrencySymbolInto(interpreterProxy->firstIndexableField(oop));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, oop);
	return null;
}


/*	return a boolean specifying the DST setting. true -> active */

EXPORT(sqInt) primitiveDaylightSavings(void) {
	sqInt _return_value;

	_return_value = ((sqLocDaylightSavings())? interpreterProxy->trueObject(): interpreterProxy->falseObject());
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, _return_value);
	return null;
}


/*	return a 1 char string describing the decimal symbol used - usually a . or a , */

EXPORT(sqInt) primitiveDecimalSymbol(void) {
	sqInt oop;

	oop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), 1);
	sqLocGetDecimalSymbolInto(interpreterProxy->firstIndexableField(oop));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, oop);
	return null;
}


/*	return a 1 char string describing the digitGrouping symbol used - usually a . or a , between triples of digits */

EXPORT(sqInt) primitiveDigitGroupingSymbol(void) {
	sqInt oop;

	oop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), 1);
	sqLocGetDigitGroupingSymbolInto(interpreterProxy->firstIndexableField(oop));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, oop);
	return null;
}


/*	return a 3 char string describing the language in use. ISO 639 is the relevant source here; see http://www.w3.org/WAI/ER/IG/ert/iso639.html for details */

EXPORT(sqInt) primitiveLanguage(void) {
	sqInt oop;

	oop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), 3);
	sqLocGetLanguageInto(interpreterProxy->firstIndexableField(oop));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, oop);
	return null;
}


/*	return a string describing the long date formatting.
Format is made up of
d day, m month, y year,
double symbol is null padded, single not padded (m=6, mm=06)
dddd weekday
mmmm month name
 */

EXPORT(sqInt) primitiveLongDateFormat(void) {
	sqInt length;
	sqInt oop;

	length = sqLocLongDateFormatSize();
	oop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), length);
	sqLocGetLongDateFormatInto(interpreterProxy->firstIndexableField(oop));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, oop);
	return null;
}


/*	return a boolean specifying whether the currency symbol is pre or post fix. true -> pre */

EXPORT(sqInt) primitiveMeasurementMetric(void) {
	sqInt _return_value;

	_return_value = ((sqLocMeasurementMetric())? interpreterProxy->trueObject(): interpreterProxy->falseObject());
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, _return_value);
	return null;
}


/*	return a string describing the long date formatting.
Format is made up of
d day, m month, y year,
double symbol is null padded, single not padded (m=6, mm=06)
dddd weekday
mmmm month name
 */

EXPORT(sqInt) primitiveShortDateFormat(void) {
	sqInt length;
	sqInt oop;

	length = sqLocShortDateFormatSize();
	oop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), length);
	sqLocGetShortDateFormatInto(interpreterProxy->firstIndexableField(oop));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, oop);
	return null;
}


/*	return a string describing the time formatting.
Format is made up of
h hour (h 12, H 24), m minute, s seconds, x (am/pm String)
double symbol is null padded, single not padded (h=6, hh=06) */

EXPORT(sqInt) primitiveTimeFormat(void) {
	sqInt length;
	sqInt oop;

	length = sqLocTimeFormatSize();
	oop = interpreterProxy->instantiateClassindexableSize(interpreterProxy->classString(), length);
	sqLocGetTimeFormatInto(interpreterProxy->firstIndexableField(oop));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, oop);
	return null;
}


/*	return the number of minutes this VM's time value is offset from UTC */

EXPORT(sqInt) primitiveTimezoneOffset(void) {
	sqInt _return_value;

	_return_value = interpreterProxy->integerObjectOf((sqLocGetTimezoneOffset()));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, _return_value);
	return null;
}


/*	return the number of minutes this VM's time value is offset from UTC */

EXPORT(sqInt) primitiveVMOffsetToUTC(void) {
	sqInt _return_value;

	_return_value = interpreterProxy->integerObjectOf((sqLocGetVMOffsetToUTC()));
	if (interpreterProxy->failed()) {
		return null;
	}
	interpreterProxy->popthenPush(1, _return_value);
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


void* LocalePlugin_exports[][3] = {
	{"LocalePlugin", "getModuleName", (void*)getModuleName},
	{"LocalePlugin", "primitiveDecimalSymbol", (void*)primitiveDecimalSymbol},
	{"LocalePlugin", "primitiveCountry", (void*)primitiveCountry},
	{"LocalePlugin", "primitiveMeasurementMetric", (void*)primitiveMeasurementMetric},
	{"LocalePlugin", "primitiveLanguage", (void*)primitiveLanguage},
	{"LocalePlugin", "setInterpreter", (void*)setInterpreter},
	{"LocalePlugin", "primitiveCurrencyNotation", (void*)primitiveCurrencyNotation},
	{"LocalePlugin", "primitiveCurrencySymbol", (void*)primitiveCurrencySymbol},
	{"LocalePlugin", "primitiveTimeFormat", (void*)primitiveTimeFormat},
	{"LocalePlugin", "primitiveDigitGroupingSymbol", (void*)primitiveDigitGroupingSymbol},
	{"LocalePlugin", "primitiveVMOffsetToUTC", (void*)primitiveVMOffsetToUTC},
	{"LocalePlugin", "primitiveShortDateFormat", (void*)primitiveShortDateFormat},
	{"LocalePlugin", "primitiveLongDateFormat", (void*)primitiveLongDateFormat},
	{"LocalePlugin", "initialiseModule", (void*)initialiseModule},
	{"LocalePlugin", "primitiveTimezoneOffset", (void*)primitiveTimezoneOffset},
	{"LocalePlugin", "primitiveDaylightSavings", (void*)primitiveDaylightSavings},
	{NULL, NULL, NULL}
};


#endif /* ifdef SQ_BUILTIN_PLUGIN */

