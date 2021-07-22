/* Smalltalk from Squeak4.6 with VMMaker 4.19.9 translated as C source on 22 July 2021 6:33:18 pm */
/* Automatically generated by
	VMPluginCodeGenerator VMMaker-dtl.426 uuid: 9027caee-1c43-47e7-aa12-7b8102bc8735
   from
	DSAPlugin CryptographyPlugins-eem.12 uuid: 2945c878-6a44-4c6a-8374-b56aa6175d0f
 */
static char __buildInfo[] = "DSAPlugin CryptographyPlugins-eem.12 uuid: 2945c878-6a44-4c6a-8374-b56aa6175d0f " __DATE__ ;




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
#define PrimErrBadArgument 3

/*** Function Prototypes ***/
#pragma export on
EXPORT(const char*) getModuleName(void);
#pragma export off
static sqInt halt(void);
static unsigned int leftRotateby(unsigned int anInteger, sqInt bits);
#pragma export on
EXPORT(sqInt) primitiveBigDivide(void);
EXPORT(sqInt) primitiveBigMultiply(void);
EXPORT(sqInt) primitiveExpandBlock(void);
EXPORT(sqInt) primitiveHasSecureHashPrimitive(void);
EXPORT(sqInt) primitiveHashBlock(void);
EXPORT(sqInt) primitiveHighestNonZeroDigitIndex(void);
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);
#pragma export off
/*** Variables ***/
static sqInt divisorDigitCount;
static unsigned char* dsaDivisor;
static unsigned char* dsaQuotient;
static unsigned char* dsaRemainder;

#ifdef SQUEAK_BUILTIN_PLUGIN
extern
#endif
struct VirtualMachine* interpreterProxy;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"DSAPrims 22 July 2021 (i)"
#else
	"DSAPrims 22 July 2021 (e)"
#endif
;
static sqInt remainderDigitCount;



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


/*	Rotate the given 32-bit integer left by the given number of bits and answer the result. */

static unsigned int leftRotateby(unsigned int anInteger, sqInt bits) {
	return (anInteger << bits) | (((usqInt) anInteger) >> (32 - bits));
}


/*	Called with three LargePositiveInteger arguments, rem, div, quo. Divide div into rem and store the quotient into quo, leaving the remainder in rem. */
/*	Assume: quo starts out filled with zeros. */

EXPORT(sqInt) primitiveBigDivide(void) {
    sqInt clpi;
    sqInt div;
    sqInt quo;
    sqInt rem;
    sqInt d1;
    sqInt d2;
    sqInt digitShift;
    sqInt firstDigit;
    sqInt firstTwoDigits;
    sqInt j;
    sqInt q;
    sqInt qTooBig;
    sqInt thirdDigit;
    sqInt carry;
    sqInt i;
    sqInt rIndex;
    sqInt sum;
    sqInt borrow;
    sqInt i1;
    sqInt prod;
    sqInt rIndex1;
    sqInt resultDigit;

	quo = interpreterProxy->stackValue(0);
	div = interpreterProxy->stackValue(1);
	rem = interpreterProxy->stackValue(2);
	clpi = interpreterProxy->classLargePositiveInteger();
	if (!(((interpreterProxy->fetchClassOf(rem)) == clpi) && (((interpreterProxy->fetchClassOf(div)) == clpi) && ((interpreterProxy->fetchClassOf(quo)) == clpi)))) {
		interpreterProxy->primitiveFailFor(PrimErrBadArgument);
	}
	dsaRemainder = interpreterProxy->firstIndexableField(rem);
	dsaDivisor = interpreterProxy->firstIndexableField(div);
	dsaQuotient = interpreterProxy->firstIndexableField(quo);
	divisorDigitCount = interpreterProxy->stSizeOf(div);

	/* adjust pointers for base-1 indexing */

	remainderDigitCount = interpreterProxy->stSizeOf(rem);
	dsaRemainder -= 1;
	dsaDivisor -= 1;
	dsaQuotient -= 1;
	/* begin bigDivideLoop */
	d1 = dsaDivisor[divisorDigitCount];
	d2 = dsaDivisor[divisorDigitCount - 1];
	for (j = remainderDigitCount; j >= (divisorDigitCount + 1); j += -1) {
		firstDigit = dsaRemainder[j];
		firstTwoDigits = (((usqInt) firstDigit << 8)) + (dsaRemainder[j - 1]);
		thirdDigit = dsaRemainder[j - 2];
		if (firstDigit == d1) {
			q = 0xFF;
		} else {
			q = firstTwoDigits / d1;
		}
		if ((d2 * q) > ((((usqInt) (firstTwoDigits - (q * d1)) << 8)) + thirdDigit)) {
			q -= 1;
			if ((d2 * q) > ((((usqInt) (firstTwoDigits - (q * d1)) << 8)) + thirdDigit)) {
				q -= 1;
			}
		}
		digitShift = (j - divisorDigitCount) - 1;
		if (q > 0) {
			/* begin subtractDivisorMultipliedByDigit:digitShift: */
			borrow = 0;
			rIndex1 = digitShift + 1;
			for (i1 = 1; i1 <= divisorDigitCount; i1 += 1) {
				prod = ((dsaDivisor[i1]) * q) + borrow;
				borrow = ((usqInt) prod >> 8);
				resultDigit = (dsaRemainder[rIndex1]) - (prod & 0xFF);
				if (resultDigit < 0) {
					resultDigit += 256;
					borrow += 1;
				}
				dsaRemainder[rIndex1] = resultDigit;
				rIndex1 += 1;
			}
			if (borrow == 0) {
				qTooBig = 0;
				goto l1;
			}
			resultDigit = (dsaRemainder[rIndex1]) - borrow;
			if (resultDigit < 0) {
				dsaRemainder[rIndex1] = (resultDigit + 256);
				qTooBig = 1;
				goto l1;
			} else {
				dsaRemainder[rIndex1] = resultDigit;
				qTooBig = 0;
				goto l1;
			}
		l1:	/* end subtractDivisorMultipliedByDigit:digitShift: */;
			if (qTooBig) {
				/* begin addBackDivisorDigitShift: */
				carry = 0;
				rIndex = digitShift + 1;
				for (i = 1; i <= divisorDigitCount; i += 1) {
					sum = ((dsaRemainder[rIndex]) + (dsaDivisor[i])) + carry;
					dsaRemainder[rIndex] = (sum & 0xFF);
					carry = ((usqInt) sum >> 8);
					rIndex += 1;
				}
				sum = (dsaRemainder[rIndex]) + carry;
				dsaRemainder[rIndex] = (sum & 0xFF);
				q -= 1;
			}
		}
		dsaQuotient[digitShift + 1] = q;
	}
	interpreterProxy->pop(3);
	return null;
}


/*	Multiple f1 by f2, placing the result into prod. f1, f2, and prod must be LargePositiveIntegers, and the length of prod must be the sum of the lengths of f1 and f2. */
/*	Assume: prod starts out filled with zeros */

EXPORT(sqInt) primitiveBigMultiply(void) {
    sqInt carry;
    sqInt clpi;
    sqInt digit;
    sqInt f1;
    sqInt f1Len;
    unsigned char *f1Ptr;
    sqInt f2;
    sqInt f2Len;
    unsigned char *f2Ptr;
    sqInt i;
    sqInt j;
    sqInt k;
    sqInt prod;
    sqInt prodLen;
    unsigned char *prodPtr;
    sqInt sum;

	prod = interpreterProxy->stackValue(0);
	f2 = interpreterProxy->stackValue(1);
	f1 = interpreterProxy->stackValue(2);
	clpi = interpreterProxy->classLargePositiveInteger();
	if (!(((interpreterProxy->fetchClassOf(prod)) == clpi) && (((interpreterProxy->fetchClassOf(f2)) == clpi) && ((interpreterProxy->fetchClassOf(f1)) == clpi)))) {
		interpreterProxy->primitiveFailFor(PrimErrBadArgument);
	}
	prodLen = interpreterProxy->stSizeOf(prod);
	f1Len = interpreterProxy->stSizeOf(f1);
	f2Len = interpreterProxy->stSizeOf(f2);
	if (!(prodLen == (f1Len + f2Len))) {
		interpreterProxy->primitiveFailFor(PrimErrBadArgument);
	}
	prodPtr = interpreterProxy->firstIndexableField(prod);
	f2Ptr = interpreterProxy->firstIndexableField(f2);
	f1Ptr = interpreterProxy->firstIndexableField(f1);
	for (i = 0; i <= (f1Len - 1); i += 1) {
		if (((digit = f1Ptr[i])) != 0) {
			carry = 0;

			/* Loop invariants: 0 <= carry <= 16rFF, k = i + j - 1 */

			k = i;
			for (j = 0; j <= (f2Len - 1); j += 1) {
				sum = (((f2Ptr[j]) * digit) + (prodPtr[k])) + carry;
				carry = ((usqInt) sum >> 8);
				prodPtr[k] = (sum & 0xFF);
				k += 1;
			}
			prodPtr[k] = carry;
		}
	}
	interpreterProxy->pop(3);
	return null;
}


/*	Expand a 64 byte ByteArray (the first argument) into and an Bitmap of 80 32-bit words (the second argument). When reading a 32-bit integer from the ByteArray, consider the first byte to contain the most significant bits of the word (i.e., use big-endian byte ordering). */

EXPORT(sqInt) primitiveExpandBlock(void) {
    sqInt buf;
    unsigned char *bytePtr;
    sqInt expanded;
    sqInt i;
    sqInt src;
    sqInt v;
    unsigned int *wordPtr;

	expanded = interpreterProxy->stackValue(0);
	buf = interpreterProxy->stackValue(1);
	if (!((interpreterProxy->isWords(expanded)) && ((interpreterProxy->isBytes(buf)) && (((interpreterProxy->stSizeOf(expanded)) == 80) && ((interpreterProxy->stSizeOf(buf)) == 64))))) {
		interpreterProxy->primitiveFailFor(PrimErrBadArgument);
	}
	wordPtr = interpreterProxy->firstIndexableField(expanded);
	bytePtr = interpreterProxy->firstIndexableField(buf);
	src = 0;
	for (i = 0; i <= 15; i += 1) {
		v = ((((bytePtr[src]) << 24) + ((bytePtr[src + 1]) << 16)) + ((bytePtr[src + 2]) << 8)) + (bytePtr[src + 3]);
		wordPtr[i] = v;
		src += 4;
	}
	for (i = 16; i <= 79; i += 1) {
		v = (((wordPtr[i - 3]) ^ (wordPtr[i - 8])) ^ (wordPtr[i - 14])) ^ (wordPtr[i - 16]);
		v = leftRotateby(v, 1);
		wordPtr[i] = v;
	}
	interpreterProxy->pop(2);
	return null;
}


/*	Answer true if the secure hash primitive is implemented. */

EXPORT(sqInt) primitiveHasSecureHashPrimitive(void) {
	interpreterProxy->pop(1);
	interpreterProxy->pushBool(1);
	return null;
}


/*	Hash a Bitmap of 80 32-bit words (the first argument), using the given state (the second argument). */

EXPORT(sqInt) primitiveHashBlock(void) {
    sqInt a;
    sqInt b;
    sqInt buf;
    unsigned int *bufPtr;
    sqInt c;
    sqInt d;
    sqInt e;
    sqInt i;
    sqInt state;
    unsigned int *statePtr;
    sqInt tmp;

	state = interpreterProxy->stackValue(0);
	buf = interpreterProxy->stackValue(1);
	if (!((interpreterProxy->isWords(state)) && ((interpreterProxy->isWords(buf)) && (((interpreterProxy->stSizeOf(state)) == 5) && ((interpreterProxy->stSizeOf(buf)) == 80))))) {
		interpreterProxy->primitiveFailFor(PrimErrBadArgument);
	}
	statePtr = interpreterProxy->firstIndexableField(state);
	bufPtr = interpreterProxy->firstIndexableField(buf);
	a = statePtr[0];
	b = statePtr[1];
	c = statePtr[2];
	d = statePtr[3];
	e = statePtr[4];
	for (i = 0; i <= 19; i += 1) {
		tmp = (((1518500249 + ((b & c) | ((~b) & d))) + (leftRotateby(a, 5))) + e) + (bufPtr[i]);
		e = d;
		d = c;
		c = leftRotateby(b, 30);
		b = a;
		a = tmp;
	}
	for (i = 20; i <= 39; i += 1) {
		tmp = (((1859775393 + ((b ^ c) ^ d)) + (leftRotateby(a, 5))) + e) + (bufPtr[i]);
		e = d;
		d = c;
		c = leftRotateby(b, 30);
		b = a;
		a = tmp;
	}
	for (i = 40; i <= 59; i += 1) {
		tmp = (((2400959708U + (((b & c) | (b & d)) | (c & d))) + (leftRotateby(a, 5))) + e) + (bufPtr[i]);
		e = d;
		d = c;
		c = leftRotateby(b, 30);
		b = a;
		a = tmp;
	}
	for (i = 60; i <= 79; i += 1) {
		tmp = (((3395469782U + ((b ^ c) ^ d)) + (leftRotateby(a, 5))) + e) + (bufPtr[i]);
		e = d;
		d = c;
		c = leftRotateby(b, 30);
		b = a;
		a = tmp;
	}
	statePtr[0] = ((statePtr[0]) + a);
	statePtr[1] = ((statePtr[1]) + b);
	statePtr[2] = ((statePtr[2]) + c);
	statePtr[3] = ((statePtr[3]) + d);
	statePtr[4] = ((statePtr[4]) + e);
	interpreterProxy->pop(2);
	return null;
}


/*	Called with one LargePositiveInteger argument. Answer the index of the top-most non-zero digit. */

EXPORT(sqInt) primitiveHighestNonZeroDigitIndex(void) {
    sqInt arg;
    unsigned char *bigIntPtr;
    sqInt i;

	arg = interpreterProxy->stackValue(0);
	if (!((interpreterProxy->fetchClassOf(arg)) == (interpreterProxy->classLargePositiveInteger()))) {
		interpreterProxy->primitiveFailFor(PrimErrBadArgument);
	}
	bigIntPtr = interpreterProxy->firstIndexableField(arg);
	i = interpreterProxy->stSizeOf(arg);
	while ((i > 0) && ((bigIntPtr[(i -= 1)]) == 0)) {
	}
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(i + 1);
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


void* DSAPrims_exports[][3] = {
	{"DSAPrims", "primitiveExpandBlock", (void*)primitiveExpandBlock},
	{"DSAPrims", "primitiveBigDivide", (void*)primitiveBigDivide},
	{"DSAPrims", "primitiveHasSecureHashPrimitive", (void*)primitiveHasSecureHashPrimitive},
	{"DSAPrims", "primitiveHashBlock", (void*)primitiveHashBlock},
	{"DSAPrims", "primitiveBigMultiply", (void*)primitiveBigMultiply},
	{"DSAPrims", "setInterpreter", (void*)setInterpreter},
	{"DSAPrims", "getModuleName", (void*)getModuleName},
	{"DSAPrims", "primitiveHighestNonZeroDigitIndex", (void*)primitiveHighestNonZeroDigitIndex},
	{NULL, NULL, NULL}
};


#endif /* ifdef SQ_BUILTIN_PLUGIN */

