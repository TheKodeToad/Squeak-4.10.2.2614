/* Automatically generated from Squeak on 30 July 2012 4:52:33 pm 
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

#include "sqMemoryAccess.h"


/*** Constants ***/
#define BEBalloonEngineSize 12
#define BEBitBltIndex 2
#define BEFormsIndex 3
#define BESpanIndex 1
#define BEWorkBufferIndex 0
#define ETBalloonEdgeDataSize 6
#define ETIndexIndex 0
#define ETLinesIndex 4
#define ETXValueIndex 1
#define ETYValueIndex 2
#define ETZValueIndex 3
#define FTBalloonFillDataSize 6
#define FTIndexIndex 0
#define FTMaxXIndex 2
#define FTMinXIndex 1
#define FTYValueIndex 3
#define GBBaseSize 16
#define GBBitmapDepth 12
#define GBBitmapHeight 11
#define GBBitmapRaster 14
#define GBBitmapSize 13
#define GBBitmapWidth 10
#define GBColormapOffset 18
#define GBColormapSize 15
#define GBEndX 14
#define GBEndY 15
#define GBFinalX 21
#define GBMBaseSize 18
#define GBTileFlag 16
#define GBUpdateDDX 4
#define GBUpdateDDY 5
#define GBUpdateDX 2
#define GBUpdateDY 3
#define GBUpdateData 10
#define GBUpdateX 0
#define GBUpdateY 1
#define GBViaX 12
#define GBViaY 13
#define GBWideEntry 18
#define GBWideExit 19
#define GBWideExtent 20
#define GBWideFill 16
#define GBWideSize 28
#define GBWideUpdateData 22
#define GBWideWidth 17
#define GEBaseEdgeSize 10
#define GEBaseFillSize 4
#define GEEdgeFillsInvalid 65536
#define GEFillIndexLeft 8
#define GEFillIndexRight 9
#define GENumLines 7
#define GEObjectIndex 2
#define GEObjectLength 1
#define GEObjectType 0
#define GEPrimitiveBezier 6
#define GEPrimitiveClippedBitmapFill 1024
#define GEPrimitiveEdge 2
#define GEPrimitiveEdgeMask 255
#define GEPrimitiveFill 256
#define GEPrimitiveFillMask 65280
#define GEPrimitiveLine 4
#define GEPrimitiveLinearGradientFill 512
#define GEPrimitiveRadialGradientFill 768
#define GEPrimitiveTypeMask 65535
#define GEPrimitiveWide 1
#define GEPrimitiveWideBezier 7
#define GEPrimitiveWideLine 5
#define GEPrimitiveWideMask 254
#define GEStateAddingFromGET 1
#define GEStateBlitBuffer 5
#define GEStateCompleted 8
#define GEStateScanningAET 3
#define GEStateUnlocked 0
#define GEStateUpdateEdges 6
#define GEStateWaitingChange 7
#define GEStateWaitingForEdge 2
#define GEStateWaitingForFill 4
#define GEXValue 4
#define GEYValue 5
#define GEZValue 6
#define GErrorAETEntry 6
#define GErrorBadState 2
#define GErrorFillEntry 5
#define GErrorGETEntry 4
#define GErrorNeedFlush 3
#define GErrorNoMoreSpace 1
#define GFDirectionX 6
#define GFDirectionY 7
#define GFNormalX 8
#define GFNormalY 9
#define GFOriginX 4
#define GFOriginY 5
#define GFRampLength 10
#define GFRampOffset 12
#define GGBaseSize 12
#define GLBaseSize 16
#define GLEndX 14
#define GLEndY 15
#define GLError 13
#define GLErrorAdjDown 15
#define GLErrorAdjUp 14
#define GLWideEntry 18
#define GLWideExit 19
#define GLWideExtent 20
#define GLWideFill 16
#define GLWideSize 21
#define GLWideWidth 17
#define GLXDirection 10
#define GLXIncrement 12
#define GLYDirection 11
#define GWAAColorMask 51
#define GWAAColorShift 50
#define GWAAHalfPixel 53
#define GWAALevel 48
#define GWAAScanMask 52
#define GWAAShift 49
#define GWAETStart 13
#define GWAETUsed 14
#define GWBezierHeightSubdivisions 109
#define GWBezierLineConversions 111
#define GWBezierMonotonSubdivisions 108
#define GWBezierOverflowSubdivisions 110
#define GWBufferTop 10
#define GWClearSpanBuffer 69
#define GWClipMaxX 43
#define GWClipMaxY 45
#define GWClipMinX 42
#define GWClipMinY 44
#define GWColorTransform 24
#define GWCountAddAETEntry 97
#define GWCountChangeAETEntry 107
#define GWCountDisplaySpan 103
#define GWCountFinishTest 93
#define GWCountInitializing 91
#define GWCountMergeFill 101
#define GWCountNextAETEntry 105
#define GWCountNextFillEntry 99
#define GWCountNextGETEntry 95
#define GWCurrentY 88
#define GWCurrentZ 113
#define GWDestOffsetX 46
#define GWDestOffsetY 47
#define GWEdgeTransform 18
#define GWFillMaxX 37
#define GWFillMaxY 39
#define GWFillMinX 36
#define GWFillMinY 38
#define GWGETStart 11
#define GWGETUsed 12
#define GWHasColorTransform 17
#define GWHasEdgeTransform 16
#define GWHeaderSize 128
#define GWLastExportedEdge 65
#define GWLastExportedFill 66
#define GWLastExportedLeftX 67
#define GWLastExportedRightX 68
#define GWMagicIndex 0
#define GWMagicNumber 1097753705
#define GWMinimalSize 256
#define GWNeedsFlush 63
#define GWObjStart 8
#define GWObjUsed 9
#define GWPoint1 80
#define GWPoint2 82
#define GWPoint3 84
#define GWPoint4 86
#define GWSize 1
#define GWSpanEnd 34
#define GWSpanEndAA 35
#define GWSpanSize 33
#define GWSpanStart 32
#define GWState 2
#define GWStopReason 64
#define GWTimeAddAETEntry 96
#define GWTimeChangeAETEntry 106
#define GWTimeDisplaySpan 102
#define GWTimeFinishTest 92
#define GWTimeInitializing 90
#define GWTimeMergeFill 100
#define GWTimeNextAETEntry 104
#define GWTimeNextFillEntry 98
#define GWTimeNextGETEntry 94

/*** Function Prototypes ***/
static sqInt accurateLengthOfwith(sqInt deltaX, sqInt deltaY);
static sqInt addEdgeToGET(sqInt edge);
static sqInt adjustWideBezierLeftwidthoffsetendX(sqInt bezier, sqInt lineWidth, sqInt lineOffset, sqInt endX);
static sqInt adjustWideBezierRightwidthoffsetendX(sqInt bezier, sqInt lineWidth, sqInt lineOffset, sqInt endX);
static sqInt adjustWideLineafterSteppingFromto(sqInt line, sqInt lastX, sqInt nextX);
static sqInt allocateBitmapFillcolormap(sqInt cmSize, int *cmBits);
static sqInt allocateGETEntry(sqInt nSlots);
static sqInt allocateGradientFillrampWidthisRadial(int *ramp, sqInt rampWidth, sqInt isRadial);
static sqInt allocateObjEntry(sqInt nSlots);
static sqInt checkCompressedFillIndexListmaxsegments(sqInt fillList, sqInt maxIndex, sqInt nSegs);
static sqInt checkCompressedFills(sqInt indexList);
static sqInt checkCompressedLineWidthssegments(sqInt lineWidthList, sqInt nSegments);
static sqInt checkCompressedPointssegments(sqInt points, sqInt nSegments);
static sqInt checkCompressedShapesegmentsleftFillsrightFillslineWidthslineFillsfillIndexList(sqInt points, sqInt nSegments, sqInt leftFills, sqInt rightFills, sqInt lineWidths, sqInt lineFills, sqInt fillIndexList);
static double * circleCosTable(void);
static double * circleSinTable(void);
static sqInt clearSpanBuffer(void);
static sqInt computeBeziersplitAt(sqInt index, double  param);
static sqInt computeBezierSplitAtHalf(sqInt index);
static sqInt computeFinalWideBezierValueswidth(sqInt bezier, sqInt lineWidth);
static sqInt copyBitsFromtoat(sqInt x0, sqInt x1, sqInt yValue);
static sqInt createGlobalEdgeTable(void);
static sqInt displaySpanBufferAt(sqInt y);
static sqInt errorWrongIndex(void);
static sqInt fillBitmapSpanfromto(int *bits, sqInt leftX, sqInt rightX);
static sqInt fillBitmapSpanfromtoat(sqInt bmFill, sqInt leftX, sqInt rightX, sqInt yValue);
static sqInt fillBitmapSpanAAfromtoat(sqInt bmFill, sqInt leftX, sqInt rightX, sqInt yValue);
static sqInt fillColorSpanAAx0x1(sqInt pixelValue32, sqInt leftX, sqInt rightX);
static sqInt fillLinearGradientfromtoat(sqInt fill, sqInt leftX, sqInt rightX, sqInt yValue);
static sqInt fillLinearGradientAArampdsdsXfromto(sqInt fill, int *ramp, sqInt deltaS, sqInt dsX, sqInt leftX, sqInt rightX);
static sqInt fillRadialDecreasingAArampdeltaSTdsXdtXfromto(sqInt fill, int *ramp,  int *deltaST, sqInt dsX, sqInt dtX, sqInt leftX, sqInt rightX);
static sqInt fillRadialGradientfromtoat(sqInt fill, sqInt leftX, sqInt rightX, sqInt yValue);
static sqInt fillRadialIncreasingAArampdeltaSTdsXdtXfromto(sqInt fill, int *ramp,  int *deltaST, sqInt dsX, sqInt dtX, sqInt leftX, sqInt rightX);
static sqInt fillSortsbefore(sqInt fillEntry1, sqInt fillEntry2);
static sqInt fillSpanfromto(unsigned int fill, sqInt leftX, sqInt rightX);
static sqInt findNextExternalEntryFromGET(void);
static sqInt findNextExternalFillFromAET(void);
static sqInt findNextExternalUpdateFromAET(void);
static sqInt findStackFilldepth(sqInt fillIndex, sqInt depth);
#pragma export on
EXPORT(const char*) getModuleName(void);
#pragma export off
static sqInt getSortsbefore(sqInt edge1, sqInt edge2);
static sqInt halt(void);
static sqInt hideFilldepth(sqInt fillIndex, sqInt depth);
static sqInt indexForInsertingIntoAET(sqInt edge);
static sqInt initColorTransform(void);
static sqInt initEdgeTransform(void);
#pragma export on
EXPORT(sqInt) initialiseModule(void);
#pragma export off
static sqInt initializeGETProcessing(void);
static sqInt insertEdgeIntoAET(sqInt edge);
static sqInt insertToAETbeforeIndex(sqInt edge, sqInt index);
static sqInt isEdge(sqInt edge);
static sqInt isFillOkay(sqInt fill);
static sqInt loadAndSubdivideBezierFromviatoisWide(int *point1, int *point2, int *point3, sqInt wideFlag);
static sqInt loadArrayShapenSegmentsfilllineWidthlineFill(sqInt points, sqInt nSegments, sqInt fillIndex, sqInt lineWidth, sqInt lineFill);
static sqInt loadArrayTransformFromintolength(sqInt transformOop, float *destPtr, sqInt n);
static sqInt loadBeziersegmentleftFillrightFilloffset(sqInt bezier, sqInt index, sqInt leftFillIndex, sqInt rightFillIndex, sqInt yOffset);
static sqInt loadBitBltFrom(sqInt bbObj);
static sqInt loadBitmapFillcolormaptilefromalongnormalxIndex(sqInt formOop, sqInt cmOop, sqInt tileFlag, int *point1, int *point2, int *point3, sqInt xIndex);
static int * loadBitsFrom(sqInt bmFill);
static sqInt loadColorTransformFrom(sqInt transformOop);
static sqInt loadCompressedShapesegmentsleftFillsrightFillslineWidthslineFillsfillIndexListpointShort(int *points, sqInt nSegments, int *leftFills, int *rightFills, int *lineWidths, int *lineFills, int *fillIndexList, sqInt pointsShort);
static sqInt loadEdgeStateFrom(sqInt edgeOop);
static sqInt loadEdgeTransformFrom(sqInt transformOop);
static sqInt loadFillOrientationfromalongnormalwidthheight(sqInt fill, int *point1, int *point2, int *point3, sqInt fillWidth, sqInt fillHeight);
static sqInt loadFormsFrom(sqInt arrayOop);
static sqInt loadGradientFillfromalongnormalisRadial(sqInt rampOop, int *point1, int *point2, int *point3, sqInt isRadial);
static sqInt loadLinefromtooffsetleftFillrightFill(sqInt line, int *point1, int *point2, sqInt yOffset, sqInt leftFill, sqInt rightFill);
static sqInt loadOvallineFillleftFillrightFill(sqInt lineWidth, sqInt lineFill, sqInt leftFill, sqInt rightFill);
static sqInt loadOvalSegmentwhcxcy(sqInt seg, sqInt w, sqInt h, sqInt cx, sqInt cy);
static sqInt loadPointfrom(int *pointArray, sqInt pointOop);
static sqInt loadPolygonnPointsfilllineWidthlineFillpointsShort(int *points, sqInt nPoints, sqInt fillIndex, sqInt lineWidth, sqInt lineFill, sqInt isShort);
static sqInt loadRenderingState(void);
static sqInt loadShapenSegmentsfilllineWidthlineFillpointsShort(int *points, sqInt nSegments, sqInt fillIndex, sqInt lineWidth, sqInt lineFill, sqInt pointsShort);
static sqInt loadSpanBufferFrom(sqInt spanOop);
static sqInt loadTransformFromintolength(sqInt transformOop, float *destPtr, sqInt n);
static sqInt loadWideBezierlineFillleftFillrightFilln(sqInt lineWidth, sqInt lineFill, sqInt leftFill, sqInt rightFill, sqInt nSegments);
static sqInt loadWideLinefromtolineFillleftFillrightFill(sqInt lineWidth, int *p1, int *p2, sqInt lineFill, sqInt leftFill, sqInt rightFill);
static sqInt loadWordTransformFromintolength(sqInt transformOop, float *destPtr, sqInt n);
static sqInt loadWorkBufferFrom(sqInt wbOop);
#pragma export on
EXPORT(sqInt) moduleUnloaded(char *aModuleName);
#pragma export off
static sqInt moveAETEntryFromedgex(sqInt index, sqInt edge, sqInt xValue);
static sqInt needAvailableSpace(sqInt nSlots);
static sqInt postDisplayAction(void);
#pragma export on
EXPORT(sqInt) primitiveAbortProcessing(void);
EXPORT(sqInt) primitiveAddActiveEdgeEntry(void);
EXPORT(sqInt) primitiveAddBezier(void);
EXPORT(sqInt) primitiveAddBezierShape(void);
EXPORT(sqInt) primitiveAddBitmapFill(void);
EXPORT(sqInt) primitiveAddCompressedShape(void);
EXPORT(sqInt) primitiveAddGradientFill(void);
EXPORT(sqInt) primitiveAddLine(void);
EXPORT(sqInt) primitiveAddOval(void);
EXPORT(sqInt) primitiveAddPolygon(void);
EXPORT(sqInt) primitiveAddRect(void);
EXPORT(sqInt) primitiveChangedActiveEdgeEntry(void);
EXPORT(sqInt) primitiveCopyBuffer(void);
EXPORT(sqInt) primitiveDisplaySpanBuffer(void);
EXPORT(sqInt) primitiveDoProfileStats(void);
EXPORT(sqInt) primitiveFinishedProcessing(void);
EXPORT(sqInt) primitiveGetAALevel(void);
EXPORT(sqInt) primitiveGetBezierStats(void);
EXPORT(sqInt) primitiveGetClipRect(void);
EXPORT(sqInt) primitiveGetCounts(void);
EXPORT(sqInt) primitiveGetDepth(void);
EXPORT(sqInt) primitiveGetFailureReason(void);
EXPORT(sqInt) primitiveGetOffset(void);
EXPORT(sqInt) primitiveGetTimes(void);
EXPORT(sqInt) primitiveInitializeBuffer(void);
EXPORT(sqInt) primitiveInitializeProcessing(void);
EXPORT(sqInt) primitiveMergeFillFrom(void);
EXPORT(sqInt) primitiveNeedsFlush(void);
EXPORT(sqInt) primitiveNeedsFlushPut(void);
EXPORT(sqInt) primitiveNextActiveEdgeEntry(void);
EXPORT(sqInt) primitiveNextFillEntry(void);
EXPORT(sqInt) primitiveNextGlobalEdgeEntry(void);
EXPORT(sqInt) primitiveRegisterExternalEdge(void);
EXPORT(sqInt) primitiveRegisterExternalFill(void);
EXPORT(sqInt) primitiveRenderImage(void);
EXPORT(sqInt) primitiveRenderScanline(void);
EXPORT(sqInt) primitiveSetAALevel(void);
EXPORT(sqInt) primitiveSetBitBltPlugin(void);
EXPORT(sqInt) primitiveSetClipRect(void);
EXPORT(sqInt) primitiveSetColorTransform(void);
EXPORT(sqInt) primitiveSetDepth(void);
EXPORT(sqInt) primitiveSetEdgeTransform(void);
EXPORT(sqInt) primitiveSetOffset(void);
#pragma export off
static sqInt proceedRenderingImage(void);
static sqInt proceedRenderingScanline(void);
static sqInt quickLoadEngineFrom(sqInt engineOop);
static sqInt quickLoadEngineFromrequiredState(sqInt oop, sqInt requiredState);
static sqInt quickLoadEngineFromrequiredStateor(sqInt oop, sqInt requiredState, sqInt alternativeState);
static sqInt quickSortGlobalEdgeTablefromto(int *array, sqInt i, sqInt j);
static int * rShiftTable(void);
static sqInt removeFirstAETEntry(void);
static sqInt resetGraphicsEngineStats(void);
static sqInt resortFirstAETEntry(void);
static sqInt setAALevel(sqInt level);
#pragma export on
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);
#pragma export off
static sqInt showFilldepthrightX(sqInt fillIndex, sqInt depth, sqInt rightX);
static int * smallSqrtTable(void);
static sqInt stepToFirstBezierInat(sqInt bezier, sqInt yValue);
static sqInt stepToFirstLineInat(sqInt line, sqInt yValue);
static sqInt stepToFirstWideBezierInat(sqInt bezier, sqInt yValue);
static sqInt stepToFirstWideLineInat(sqInt line, sqInt yValue);
static sqInt stepToNextBezierInat(sqInt bezier, sqInt yValue);
static sqInt stepToNextLineInat(sqInt line, sqInt yValue);
static sqInt stepToNextWideBezier(void);
static sqInt stepToNextWideBezierInat(sqInt bezier, sqInt yValue);
static sqInt stepToNextWideLineInat(sqInt line, sqInt yValue);
static sqInt storeEdgeStateFrominto(sqInt edge, sqInt edgeOop);
static sqInt storeFillStateInto(sqInt fillOop);
static sqInt storeRenderingState(void);
static sqInt subdivideBezier(sqInt index);
static sqInt subdivideBezierFrom(sqInt index);
static sqInt subdivideToBeMonotoninX(sqInt base, sqInt doTestX);
static sqInt subdivideToBeMonotonInX(sqInt index);
static sqInt subdivideToBeMonotonInY(sqInt index);
static sqInt toggleFilldepthrightX(sqInt fillIndex, sqInt depth, sqInt rightX);
static sqInt toggleFillsOf(sqInt edge);
static sqInt toggleWideFillOf(sqInt edge);
static sqInt topDepth(void);
static sqInt topFill(void);
static sqInt topRightX(void);
static sqInt transformColor(sqInt fillIndex);
static sqInt transformPoint(int *point);
static sqInt transformWidth(sqInt w);
static sqInt uncheckedTransformColor(sqInt fillIndex);
static sqInt wbStackPush(sqInt nItems);
/*** Variables ***/
static int* aetBuffer;
static char bbPluginName[256] = "BitBltPlugin";
static void * copyBitsFn;
static sqInt dispatchReturnValue;
static sqInt dispatchedValue;
static int doProfileStats = 0;
static sqInt engine;
static sqInt engineStopped;
static sqInt formArray;
static sqInt geProfileTime;
static int* getBuffer;

#ifdef SQUEAK_BUILTIN_PLUGIN
extern
#endif
struct VirtualMachine* interpreterProxy;
static void * loadBBFn;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"B2DPlugin 30 July 2012 (i)"
#else
	"B2DPlugin 30 July 2012 (e)"
#endif
;
static int* objBuffer;
static sqInt objUsed;
static unsigned int* spanBuffer;
static int* workBuffer;



/*	Return the accurate length of the vector described by deltaX and deltaY */

static sqInt accurateLengthOfwith(sqInt deltaX, sqInt deltaY) {
    sqInt length2;

	if (deltaX == 0) {
		if (deltaY < 0) {
			return 0 - deltaY;
		} else {
			return deltaY;
		}
	}
	if (deltaY == 0) {
		if (deltaX < 0) {
			return 0 - deltaX;
		} else {
			return deltaX;
		}
	}
	length2 = (deltaX * deltaX) + (deltaY * deltaY);
	/* begin computeSqrt: */
	if (length2 < 32) {
		return (smallSqrtTable())[length2];
	} else {
		return ((sqInt)((sqrt(((double) length2 ))) + 0.5));
	}
	return null;
}

static sqInt addEdgeToGET(sqInt edge) {
	if (!(allocateGETEntry(1))) {
		return 0;
	}
	getBuffer[workBuffer[GWGETUsed]] = edge;
	workBuffer[GWGETUsed] = ((workBuffer[GWGETUsed]) + 1);
}


/*	Adjust the wide bezier curve (dx < 0) to start/end at the right point */

static sqInt adjustWideBezierLeftwidthoffsetendX(sqInt bezier, sqInt lineWidth, sqInt lineOffset, sqInt endX) {
    sqInt lastX;
    sqInt lastY;

	((objBuffer + bezier) + GBUpdateData)[GBUpdateX] = ((((objBuffer + bezier) + GBUpdateData)[GBUpdateX]) - (lineOffset * 256));
	lastX = ((objBuffer + bezier) + GBWideUpdateData)[GBUpdateX];
	((objBuffer + bezier) + GBWideUpdateData)[GBUpdateX] = (lastX + ((lineWidth - lineOffset) * 256));
	lastY = ((objBuffer + bezier) + GBWideUpdateData)[GBUpdateY];
	((objBuffer + bezier) + GBWideUpdateData)[GBUpdateY] = (lastY + (lineWidth * 256));
	objBuffer[bezier + GBFinalX] = (endX - lineOffset);
}


/*	Adjust the wide bezier curve (dx >= 0) to start/end at the right point */

static sqInt adjustWideBezierRightwidthoffsetendX(sqInt bezier, sqInt lineWidth, sqInt lineOffset, sqInt endX) {
    sqInt lastX;
    sqInt lastY;

	((objBuffer + bezier) + GBUpdateData)[GBUpdateX] = ((((objBuffer + bezier) + GBUpdateData)[GBUpdateX]) + (lineOffset * 256));
	lastX = ((objBuffer + bezier) + GBWideUpdateData)[GBUpdateX];
	((objBuffer + bezier) + GBWideUpdateData)[GBUpdateX] = (lastX - ((lineWidth - lineOffset) * 256));

	/* Set lineWidth pixels down */

	lastY = ((objBuffer + bezier) + GBWideUpdateData)[GBUpdateY];
	((objBuffer + bezier) + GBWideUpdateData)[GBUpdateY] = (lastY + (lineWidth * 256));
	objBuffer[bezier + GBFinalX] = ((endX - lineOffset) + lineWidth);
}


/*	Adjust the wide line after it has been stepped from lastX to nextX.
	Special adjustments of line width and start position are made here
	to simulate a rectangular brush */

static sqInt adjustWideLineafterSteppingFromto(sqInt line, sqInt lastX, sqInt nextX) {
    sqInt baseWidth;
    sqInt deltaX;
    sqInt lineOffset;
    sqInt lineWidth;
    sqInt xDir;
    sqInt yEntry;
    sqInt yExit;


	/* Don't inline this */
	/* Fetch the values the adjustment decisions are based on */

	yEntry = objBuffer[line + GLWideEntry];
	yExit = objBuffer[line + GLWideExit];
	baseWidth = objBuffer[line + GLWideExtent];
	lineOffset = ((sqInt) baseWidth >> 1);
	lineWidth = objBuffer[line + GLWideWidth];
	xDir = objBuffer[line + GLXDirection];

	/* Adjust the start of the line to fill an entire rectangle */

	deltaX = nextX - lastX;
	if (yEntry < baseWidth) {
		if (xDir < 0) {

			/* effectively adding */

			lineWidth -= deltaX;
		} else {
			lineWidth += deltaX;
			objBuffer[line + GEXValue] = lastX;
		}
	}
	if ((yExit + lineOffset) == 0) {
		if (xDir > 0) {
			lineWidth -= objBuffer[line + GLXIncrement];
		} else {

			/* effectively subtracting */

			lineWidth += objBuffer[line + GLXIncrement];
			objBuffer[line + GEXValue] = lastX;
		}
	}
	if ((yExit + lineOffset) > 0) {
		if (xDir < 0) {

			/* effectively subtracting */

			lineWidth += deltaX;
			objBuffer[line + GEXValue] = lastX;
		} else {
			lineWidth -= deltaX;
		}
	}
	objBuffer[line + GLWideWidth] = lineWidth;
}

static sqInt allocateBitmapFillcolormap(sqInt cmSize, int *cmBits) {
    int *cm;
    sqInt fill;
    sqInt fillSize;
    sqInt i;

	fillSize = GBMBaseSize + cmSize;
	if (!(allocateObjEntry(fillSize))) {
		return 0;
	}
	fill = objUsed;
	objUsed = fill + fillSize;
	objBuffer[fill + GEObjectType] = GEPrimitiveClippedBitmapFill;
	objBuffer[fill + GEObjectIndex] = 0;
	objBuffer[fill + GEObjectLength] = fillSize;
	cm = (objBuffer + fill) + GBColormapOffset;
	if ((workBuffer[GWHasColorTransform]) != 0) {
		for (i = 0; i <= (cmSize - 1); i += 1) {
			cm[i] = (transformColor(cmBits[i]));
		}
	} else {
		for (i = 0; i <= (cmSize - 1); i += 1) {
			cm[i] = (cmBits[i]);
		}
	}
	objBuffer[fill + GBColormapSize] = cmSize;
	return fill;
}


/*	Allocate n slots in the global edge table */

static sqInt allocateGETEntry(sqInt nSlots) {
    sqInt dstIndex;
    sqInt i;
    sqInt srcIndex;

	if (!(needAvailableSpace(nSlots))) {
		return 0;
	}
	if (!((workBuffer[GWAETUsed]) == 0)) {

		/* Then move the AET upwards */

		srcIndex = workBuffer[GWAETUsed];
		dstIndex = (workBuffer[GWAETUsed]) + nSlots;
		for (i = 1; i <= (workBuffer[GWAETUsed]); i += 1) {
			aetBuffer[(dstIndex -= 1)] = (aetBuffer[(srcIndex -= 1)]);
		}
	}
	aetBuffer += nSlots;
	return 1;
}

static sqInt allocateGradientFillrampWidthisRadial(int *ramp, sqInt rampWidth, sqInt isRadial) {
    sqInt fill;
    sqInt fillSize;
    sqInt i;
    int *rampPtr;

	fillSize = GGBaseSize + rampWidth;
	if (!(allocateObjEntry(fillSize))) {
		return 0;
	}
	fill = objUsed;
	objUsed = fill + fillSize;
	if (isRadial) {
		objBuffer[fill + GEObjectType] = GEPrimitiveRadialGradientFill;
	} else {
		objBuffer[fill + GEObjectType] = GEPrimitiveLinearGradientFill;
	}
	objBuffer[fill + GEObjectIndex] = 0;
	objBuffer[fill + GEObjectLength] = fillSize;
	rampPtr = (objBuffer + fill) + GFRampOffset;
	if ((workBuffer[GWHasColorTransform]) != 0) {
		for (i = 0; i <= (rampWidth - 1); i += 1) {
			rampPtr[i] = (transformColor(ramp[i]));
		}
	} else {
		for (i = 0; i <= (rampWidth - 1); i += 1) {
			rampPtr[i] = (ramp[i]);
		}
	}
	objBuffer[fill + GFRampLength] = rampWidth;
	return fill;
}


/*	Allocate n slots in the object buffer */

static sqInt allocateObjEntry(sqInt nSlots) {
    sqInt dstIndex;
    sqInt i;
    sqInt srcIndex;

	if (!(allocateGETEntry(nSlots))) {
		return 0;
	}
	if (!((workBuffer[GWGETUsed]) == 0)) {

		/* Then move the GET upwards */

		srcIndex = workBuffer[GWGETUsed];
		dstIndex = (workBuffer[GWGETUsed]) + nSlots;
		for (i = 1; i <= (workBuffer[GWGETUsed]); i += 1) {
			getBuffer[(dstIndex -= 1)] = (getBuffer[(srcIndex -= 1)]);
		}
	}
	getBuffer += nSlots;
	return 1;
}


/*	Check the fill indexes in the run-length encoded fillList */

static sqInt checkCompressedFillIndexListmaxsegments(sqInt fillList, sqInt maxIndex, sqInt nSegs) {
    int *fillPtr;
    sqInt i;
    sqInt length;
    sqInt nFills;
    sqInt runLength;
    sqInt runValue;

	length = interpreterProxy->slotSizeOf(fillList);
	fillPtr = interpreterProxy->firstIndexableField(fillList);
	nFills = 0;
	for (i = 0; i <= (length - 1); i += 1) {
		runLength = ((usqInt) ((((int *) fillPtr))[i]) >> 16);
		runValue = ((((int *) fillPtr))[i]) & 65535;
		if (!((runValue >= 0) && (runValue <= maxIndex))) {
			return 0;
		}
		nFills += runLength;
	}
	return nFills == nSegs;
}


/*	Check if the indexList (containing fill handles) is okay. */

static sqInt checkCompressedFills(sqInt indexList) {
    sqInt fillIndex;
    int *fillPtr;
    sqInt i;
    sqInt length;

	if (!(interpreterProxy->isWords(indexList))) {
		return 0;
	}
	length = interpreterProxy->slotSizeOf(indexList);
	fillPtr = interpreterProxy->firstIndexableField(indexList);
	for (i = 0; i <= (length - 1); i += 1) {

		/* Make sure the fill is okay */

		fillIndex = fillPtr[i];
		if (!(isFillOkay(fillIndex))) {
			return 0;
		}
	}
	return 1;
}


/*	Check the run-length encoded lineWidthList matches nSegments */

static sqInt checkCompressedLineWidthssegments(sqInt lineWidthList, sqInt nSegments) {
    sqInt i;
    sqInt length;
    sqInt nItems;
    int *ptr;
    sqInt runLength;

	length = interpreterProxy->slotSizeOf(lineWidthList);
	ptr = interpreterProxy->firstIndexableField(lineWidthList);
	nItems = 0;
	for (i = 0; i <= (length - 1); i += 1) {
		runLength = ((usqInt) ((((int *) ptr))[i]) >> 16);
		nItems += runLength;
	}
	return nItems == nSegments;
}


/*	Check if the given point array can be handled by the engine. */

static sqInt checkCompressedPointssegments(sqInt points, sqInt nSegments) {
    sqInt pSize;

	if (!(interpreterProxy->isWords(points))) {
		return 0;
	}

	/* The points must be either in PointArray format or ShortPointArray format.
	Also, we currently handle only quadratic segments (e.g., 3 points each) and thus either
		pSize = nSegments * 3,		for ShortPointArrays or,
		pSize = nSegments * 6,		for PointArrays */

	pSize = interpreterProxy->slotSizeOf(points);
	if (!((pSize == (nSegments * 3)) || (pSize == (nSegments * 6)))) {
		return 0;
	}
	return 1;
}


/*	Check if the given shape can be handled by the engine. 
	Since there are a number of requirements this is an extra method. */

static sqInt checkCompressedShapesegmentsleftFillsrightFillslineWidthslineFillsfillIndexList(sqInt points, sqInt nSegments, sqInt leftFills, sqInt rightFills, sqInt lineWidths, sqInt lineFills, sqInt fillIndexList) {
    sqInt maxFillIndex;

	if (!(checkCompressedPointssegments(points, nSegments))) {
		return 0;
	}
	if (!(checkCompressedFills(fillIndexList))) {
		return 0;
	}
	maxFillIndex = interpreterProxy->slotSizeOf(fillIndexList);
	if (!(checkCompressedFillIndexListmaxsegments(leftFills, maxFillIndex, nSegments))) {
		return 0;
	}
	if (!(checkCompressedFillIndexListmaxsegments(rightFills, maxFillIndex, nSegments))) {
		return 0;
	}
	if (!(checkCompressedFillIndexListmaxsegments(lineFills, maxFillIndex, nSegments))) {
		return 0;
	}
	if (!(checkCompressedLineWidthssegments(lineWidths, nSegments))) {
		return 0;
	}
	return 1;
}

static double * circleCosTable(void) {
    static double theTable[33] =
		{1.0, 0.98078528040323, 0.923879532511287, 0.831469612302545,
		0.7071067811865475, 0.555570233019602, 0.38268343236509, 0.1950903220161286,
		0.0, -0.1950903220161283, -0.3826834323650896, -0.555570233019602,
		-0.707106781186547, -0.831469612302545, -0.9238795325112865, -0.98078528040323,
		-1.0, -0.98078528040323, -0.923879532511287, -0.831469612302545,
		-0.707106781186548, -0.555570233019602, -0.3826834323650903, -0.1950903220161287,
		0.0, 0.1950903220161282, 0.38268343236509, 0.555570233019602,
		0.707106781186547, 0.831469612302545, 0.9238795325112865, 0.98078528040323,
		1.0 };

	return theTable;
}

static double * circleSinTable(void) {
    static double theTable[33] =
		{0.0, 0.1950903220161282, 0.3826834323650897, 0.555570233019602,
		0.707106781186547, 0.831469612302545, 0.923879532511287, 0.98078528040323,
		1.0, 0.98078528040323, 0.923879532511287, 0.831469612302545,
		0.7071067811865475, 0.555570233019602, 0.38268343236509, 0.1950903220161286,
		0.0, -0.1950903220161283, -0.3826834323650896, -0.555570233019602,
		-0.707106781186547, -0.831469612302545, -0.9238795325112865, -0.98078528040323,
		-1.0, -0.98078528040323, -0.923879532511287, -0.831469612302545,
		-0.707106781186548, -0.555570233019602, -0.3826834323650903, -0.1950903220161287,
		 0.0 };

	return theTable;
}


/*	Clear the current span buffer.
	The span buffer is only cleared in the area that has been used by the previous scan line. */

static sqInt clearSpanBuffer(void) {
    sqInt x0;
    sqInt x1;

	x0 = ((usqInt) (workBuffer[GWSpanStart])) >> (workBuffer[GWAAShift]);
	x1 = (((usqInt) (workBuffer[GWSpanEnd])) >> (workBuffer[GWAAShift])) + 1;
	if (x0 < 0) {
		x0 = 0;
	}
	if (x1 > (workBuffer[GWSpanSize])) {
		x1 = workBuffer[GWSpanSize];
	}
	while (x0 < x1) {
		spanBuffer[x0] = 0;
		x0 += 1;
	}
	workBuffer[GWSpanStart] = (workBuffer[GWSpanSize]);
	workBuffer[GWSpanEnd] = 0;
}


/*	Split the bezier curve at the given parametric value.
	Note: Since this method is only invoked to make non-monoton
		beziers monoton we must check for the resulting y values
		to be *really* between the start and end value. */

static sqInt computeBeziersplitAt(sqInt index, double  param) {
    sqInt endX;
    sqInt endY;
    sqInt leftViaX;
    sqInt leftViaY;
    sqInt newIndex;
    sqInt rightViaX;
    sqInt rightViaY;
    sqInt sharedX;
    sqInt sharedY;
    sqInt startX;
    sqInt startY;
    sqInt viaX;
    sqInt viaY;

	leftViaX = (startX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 0)]);
	leftViaY = (startY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 1)]);
	rightViaX = (viaX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 2)]);
	rightViaY = (viaY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 3)]);
	endX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 4)];

	/* Compute intermediate points */

	endY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)];
	sharedX = (leftViaX += ((sqInt)((((double) (viaX - startX) )) * param)));
	sharedY = (leftViaY += ((sqInt)((((double) (viaY - startY) )) * param)));
	rightViaX += ((sqInt)((((double) (endX - viaX) )) * param));

	/* Compute new shared point */

	rightViaY += ((sqInt)((((double) (endY - viaY) )) * param));
	sharedX += ((sqInt)((((double) (rightViaX - leftViaX) )) * param));

	/* Check the new via points */

	sharedY += ((sqInt)((((double) (rightViaY - leftViaY) )) * param));
	/* begin assureValue:between:and: */
	if (startY > sharedY) {
		if (leftViaY > startY) {
			leftViaY = startY;
			goto l1;
		}
		if (leftViaY < sharedY) {
			leftViaY = sharedY;
			goto l1;
		}
	} else {
		if (leftViaY < startY) {
			leftViaY = startY;
			goto l1;
		}
		if (leftViaY > sharedY) {
			leftViaY = sharedY;
			goto l1;
		}
	}
	leftViaY = leftViaY;
l1:	/* end assureValue:between:and: */;
	/* begin assureValue:between:and: */
	if (sharedY > endY) {
		if (rightViaY > sharedY) {
			rightViaY = sharedY;
			goto l2;
		}
		if (rightViaY < endY) {
			rightViaY = endY;
			goto l2;
		}
	} else {
		if (rightViaY < sharedY) {
			rightViaY = sharedY;
			goto l2;
		}
		if (rightViaY > endY) {
			rightViaY = endY;
			goto l2;
		}
	}
	rightViaY = rightViaY;
l2:	/* end assureValue:between:and: */;
	/* begin allocateBezierStackEntry */
	/* begin wbStackPush: */
	if (!(needAvailableSpace(6))) {
		goto l3;
	}
	workBuffer[GWBufferTop] = ((workBuffer[GWBufferTop]) - 6);
l3:	/* end wbStackPush: */;
	newIndex = (workBuffer[GWSize]) - (workBuffer[GWBufferTop]);
	if (engineStopped) {
		return 0;
	}
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 2)] = leftViaX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 3)] = leftViaY;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 4)] = sharedX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)] = sharedY;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 0)] = sharedX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 1)] = sharedY;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 2)] = rightViaX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 3)] = rightViaY;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 4)] = endX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 5)] = endY;
	return newIndex;
}


/*	Split the bezier curve at 0.5. */

static sqInt computeBezierSplitAtHalf(sqInt index) {
    sqInt endX;
    sqInt endY;
    sqInt leftViaX;
    sqInt leftViaY;
    sqInt newIndex;
    sqInt rightViaX;
    sqInt rightViaY;
    sqInt sharedX;
    sqInt sharedY;
    sqInt startX;
    sqInt startY;
    sqInt viaX;
    sqInt viaY;

	/* begin allocateBezierStackEntry */
	/* begin wbStackPush: */
	if (!(needAvailableSpace(6))) {
		goto l1;
	}
	workBuffer[GWBufferTop] = ((workBuffer[GWBufferTop]) - 6);
l1:	/* end wbStackPush: */;
	newIndex = (workBuffer[GWSize]) - (workBuffer[GWBufferTop]);
	if (engineStopped) {
		return 0;
	}
	leftViaX = (startX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 0)]);
	leftViaY = (startY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 1)]);
	rightViaX = (viaX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 2)]);
	rightViaY = (viaY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 3)]);
	endX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 4)];

	/* Compute intermediate points */

	endY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)];
	leftViaX += ((sqInt) (viaX - startX) >> 1);
	leftViaY += ((sqInt) (viaY - startY) >> 1);
	sharedX = (rightViaX += ((sqInt) (endX - viaX) >> 1));

	/* Compute new shared point */

	sharedY = (rightViaY += ((sqInt) (endY - viaY) >> 1));
	sharedX += ((sqInt) (leftViaX - rightViaX) >> 1);

	/* Store the first part back */

	sharedY += ((sqInt) (leftViaY - rightViaY) >> 1);
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 2)] = leftViaX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 3)] = leftViaY;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 4)] = sharedX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)] = sharedY;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 0)] = sharedX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 1)] = sharedY;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 2)] = rightViaX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 3)] = rightViaY;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 4)] = endX;
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - newIndex) + 5)] = endY;
	return newIndex;
}


/*	Get both values from the two boundaries of the given bezier 
	and compute the actual position/width of the line */

static sqInt computeFinalWideBezierValueswidth(sqInt bezier, sqInt lineWidth) {
    sqInt leftX;
    sqInt rightX;
    sqInt temp;

	leftX = ((sqInt) (((objBuffer + bezier) + GBUpdateData)[GBUpdateX]) >> 8);
	rightX = ((sqInt) (((objBuffer + bezier) + GBWideUpdateData)[GBUpdateX]) >> 8);
	if (leftX > rightX) {
		temp = leftX;
		leftX = rightX;
		rightX = temp;
	}
	objBuffer[bezier + GEXValue] = leftX;
	if ((rightX - leftX) > lineWidth) {
		objBuffer[bezier + GBWideWidth] = (rightX - leftX);
	} else {
		objBuffer[bezier + GBWideWidth] = lineWidth;
	}
}

static sqInt copyBitsFromtoat(sqInt x0, sqInt x1, sqInt yValue) {
	if (copyBitsFn == 0) {
		if (!(initialiseModule())) {
			return 0;
		}
	}
	return ((sqInt (*)(sqInt, sqInt, sqInt))copyBitsFn)(x0, x1, yValue);
}


/*	Create the global edge table */

static sqInt createGlobalEdgeTable(void) {
    sqInt end;
    sqInt object;
    sqInt lineWidth;
    sqInt lineWidth1;

	object = 0;
	end = objUsed;
	while (object < end) {
		if (isEdge(object)) {
			if (!((objBuffer[object + GEYValue]) >= (workBuffer[GWFillMaxY]))) {
				/* begin checkedAddEdgeToGET: */
				if ((((objBuffer[object + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveWideMask) == GEPrimitiveLine) {
					/* begin checkedAddLineToGET: */
					if ((((objBuffer[object + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveWide) != 0) {
						lineWidth1 = objBuffer[object + GLWideExtent];
					} else {
						lineWidth1 = 0;
					}
					if (((objBuffer[object + GLEndY]) + lineWidth1) < (workBuffer[GWFillMinY])) {
						goto l1;
					}
					if ((((objBuffer[object + GEXValue]) - lineWidth1) >= (workBuffer[GWFillMaxX])) && (((objBuffer[object + GLEndX]) - lineWidth1) >= (workBuffer[GWFillMaxX]))) {
						goto l1;
					}
					addEdgeToGET(object);
					goto l1;
				}
				if ((((objBuffer[object + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveWideMask) == GEPrimitiveBezier) {
					/* begin checkedAddBezierToGET: */
					if ((((objBuffer[object + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveWide) != 0) {
						lineWidth = objBuffer[object + GBWideExtent];
					} else {
						lineWidth = 0;
					}
					if (((objBuffer[object + GBEndY]) + lineWidth) < (workBuffer[GWFillMinY])) {
						goto l1;
					}
					if ((((objBuffer[object + GEXValue]) - lineWidth) >= (workBuffer[GWFillMaxX])) && (((objBuffer[object + GBEndX]) - lineWidth) >= (workBuffer[GWFillMaxX]))) {
						goto l1;
					}
					addEdgeToGET(object);
					goto l1;
				}
				addEdgeToGET(object);
			l1:	/* end checkedAddEdgeToGET: */;
			}
		}
		object += objBuffer[object + GEObjectLength];
	}
}


/*	Display the span buffer at the current scan line. */

static sqInt displaySpanBufferAt(sqInt y) {
    sqInt targetX0;
    sqInt targetX1;
    sqInt targetY;


	/* self aaLevelGet > 1 ifTrue:[self adjustAALevel]. */

	targetX0 = ((usqInt) (workBuffer[GWSpanStart])) >> (workBuffer[GWAAShift]);
	if (targetX0 < (workBuffer[GWClipMinX])) {
		targetX0 = workBuffer[GWClipMinX];
	}
	targetX1 = ((usqInt) (((workBuffer[GWSpanEnd]) + (workBuffer[GWAALevel])) - 1)) >> (workBuffer[GWAAShift]);
	if (targetX1 > (workBuffer[GWClipMaxX])) {
		targetX1 = workBuffer[GWClipMaxX];
	}
	targetY = ((usqInt) y) >> (workBuffer[GWAAShift]);
	if ((targetY < (workBuffer[GWClipMinY])) || ((targetY >= (workBuffer[GWClipMaxY])) || ((targetX1 < (workBuffer[GWClipMinX])) || (targetX0 >= (workBuffer[GWClipMaxX]))))) {
		return 0;
	}
	copyBitsFromtoat(targetX0, targetX1, targetY);
}


/*	Ignore dispatch errors when translating to C
	(since we have no entry point for #error in the VM proxy) */

static sqInt errorWrongIndex(void) {
	;
}


/*	Fill the span buffer between leftEdge and rightEdge using the given bits.
	Note: We always start from zero - this avoids using huge bitmap buffers if the bitmap is to be displayed at the very far right hand side and also gives us a chance of using certain bitmaps (e.g., those with depth 32) directly. */

static sqInt fillBitmapSpanfromto(int *bits, sqInt leftX, sqInt rightX) {
    sqInt baseShift;
    sqInt bitX;
    sqInt colorMask;
    sqInt colorShift;
    sqInt fillValue;
    sqInt x;
    sqInt x0;
    sqInt x1;

	x0 = leftX;
	x1 = rightX;

	/* Hack for pre-increment */

	bitX = -1;
	if ((workBuffer[GWAALevel]) == 1) {
		while (x0 < x1) {
			fillValue = (((int *) bits))[(bitX += 1)];
			spanBuffer[x0] = fillValue;
			x0 += 1;
		}
	} else {

		/* Generic version with anti-aliasing */

		colorMask = workBuffer[GWAAColorMask];
		colorShift = workBuffer[GWAAColorShift];
		baseShift = workBuffer[GWAAShift];
		while (x0 < x1) {
			x = ((usqInt) x0) >> baseShift;
			fillValue = (((int *) bits))[(bitX += 1)];
			fillValue = ((usqInt) (fillValue & colorMask)) >> colorShift;
			spanBuffer[x] = ((spanBuffer[x]) + fillValue);
			x0 += 1;
		}
	}
	if (x1 > (workBuffer[GWSpanEnd])) {
		workBuffer[GWSpanEnd] = x1;
	}
	if (x1 > (workBuffer[GWSpanEndAA])) {
		workBuffer[GWSpanEndAA] = x1;
	}
}

static sqInt fillBitmapSpanfromtoat(sqInt bmFill, sqInt leftX, sqInt rightX, sqInt yValue) {
    int *bits;
    sqInt bmHeight;
    sqInt bmWidth;
    sqInt deltaX;
    sqInt deltaY;
    sqInt ds;
    sqInt dsX;
    sqInt dt;
    sqInt dtX;
    sqInt fillValue;
    sqInt tileFlag;
    sqInt x;
    sqInt x1;
    sqInt xp;
    sqInt yp;
    sqInt newDelta;
    sqInt newDelta1;
    sqInt a;
    sqInt b;
    sqInt bmDepth;
    sqInt bmRaster;
    sqInt cMask;
    sqInt g;
    sqInt r;
    sqInt rShift;
    sqInt value;

	if (!((workBuffer[GWAALevel]) == 1)) {
		return fillBitmapSpanAAfromtoat(bmFill, leftX, rightX, yValue);
	}
	bits = loadBitsFrom(bmFill);
	if (bits == null) {
		return null;
	}
	bmWidth = objBuffer[bmFill + GBBitmapWidth];
	bmHeight = objBuffer[bmFill + GBBitmapHeight];
	tileFlag = (objBuffer[bmFill + GBTileFlag]) == 1;
	deltaX = leftX - (objBuffer[bmFill + GFOriginX]);
	deltaY = yValue - (objBuffer[bmFill + GFOriginY]);
	dsX = objBuffer[bmFill + GFDirectionX];
	dtX = objBuffer[bmFill + GFNormalX];
	ds = (deltaX * dsX) + (deltaY * (objBuffer[bmFill + GFDirectionY]));
	dt = (deltaX * dtX) + (deltaY * (objBuffer[bmFill + GFNormalY]));
	x = leftX;
	x1 = rightX;
	while (x < x1) {
		if (tileFlag) {
			/* begin repeatValue:max: */
			newDelta = ds;
			while (newDelta < 0) {
				newDelta += bmWidth << 16;
			}
			while (newDelta >= (bmWidth << 16)) {
				newDelta -= bmWidth << 16;
			}
			ds = newDelta;
			/* begin repeatValue:max: */
			newDelta1 = dt;
			while (newDelta1 < 0) {
				newDelta1 += bmHeight << 16;
			}
			while (newDelta1 >= (bmHeight << 16)) {
				newDelta1 -= bmHeight << 16;
			}
			dt = newDelta1;
		}
		xp = ((sqInt) ds >> 16);
		yp = ((sqInt) dt >> 16);
		if (!(tileFlag)) {
			/* begin clampValue:max: */
			if (xp < 0) {
				xp = 0;
				goto l1;
			} else {
				if (xp >= bmWidth) {
					xp = bmWidth - 1;
					goto l1;
				} else {
					xp = xp;
					goto l1;
				}
			}
		l1:	/* end clampValue:max: */;
			/* begin clampValue:max: */
			if (yp < 0) {
				yp = 0;
				goto l2;
			} else {
				if (yp >= bmHeight) {
					yp = bmHeight - 1;
					goto l2;
				} else {
					yp = yp;
					goto l2;
				}
			}
		l2:	/* end clampValue:max: */;
		}
		if ((xp >= 0) && ((yp >= 0) && ((xp < bmWidth) && (yp < bmHeight)))) {
			/* begin bitmapValue:bits:atX:y: */
			bmDepth = objBuffer[bmFill + GBBitmapDepth];
			bmRaster = objBuffer[bmFill + GBBitmapRaster];
			if (bmDepth == 32) {
				value = (((int*) bits))[(bmRaster * yp) + xp];
				if ((value != 0) && ((value & 4278190080U) == 0)) {
					value = value | 4278190080U;
				}
				fillValue = uncheckedTransformColor(value);
				goto l3;
			}
			rShift = (rShiftTable())[bmDepth];
			value = (((int*) bits))[(bmRaster * yp) + (((usqInt) xp) >> rShift)];
			cMask = (1 << bmDepth) - 1;
			rShift = (32 - bmDepth) - ((xp & ((1 << rShift) - 1)) * bmDepth);
			value = (((usqInt) value) >> rShift) & cMask;
			if (bmDepth == 16) {
				if (!(value == 0)) {
					b = (value & 31) << 3;
					b += ((usqInt) b) >> 5;
					g = ((((usqInt) value) >> 5) & 31) << 3;
					g += ((usqInt) g) >> 5;
					r = ((((usqInt) value) >> 10) & 31) << 3;
					r += ((usqInt) r) >> 5;
					a = 255;
					value = ((b + (g << 8)) + (r << 16)) + (a << 24);
				}
			} else {
				if ((objBuffer[bmFill + GBColormapSize]) == 0) {
					value = 0;
				} else {
					value = ((objBuffer + bmFill) + GBColormapOffset)[value];
				}
			}
			fillValue = uncheckedTransformColor(value);
		l3:	/* end bitmapValue:bits:atX:y: */;
			spanBuffer[x] = fillValue;
		}
		ds += dsX;
		dt += dtX;
		x += 1;
	}
}

static sqInt fillBitmapSpanAAfromtoat(sqInt bmFill, sqInt leftX, sqInt rightX, sqInt yValue) {
    sqInt aaLevel;
    sqInt baseShift;
    int *bits;
    sqInt bmHeight;
    sqInt bmWidth;
    sqInt cMask;
    sqInt cShift;
    sqInt deltaX;
    sqInt deltaY;
    sqInt ds;
    sqInt dsX;
    sqInt dt;
    sqInt dtX;
    sqInt fillValue;
    sqInt firstPixel;
    sqInt idx;
    sqInt lastPixel;
    sqInt tileFlag;
    sqInt x;
    sqInt xp;
    sqInt yp;
    sqInt newDelta;
    sqInt newDelta1;
    sqInt a;
    sqInt b;
    sqInt bmDepth;
    sqInt bmRaster;
    sqInt cMask1;
    sqInt g;
    sqInt r;
    sqInt rShift;
    sqInt value;
    sqInt newDelta2;
    sqInt newDelta3;
    sqInt a1;
    sqInt b1;
    sqInt bmDepth1;
    sqInt bmRaster1;
    sqInt cMask2;
    sqInt g1;
    sqInt r1;
    sqInt rShift1;
    sqInt value1;
    sqInt newDelta4;
    sqInt newDelta5;
    sqInt a2;
    sqInt b2;
    sqInt bmDepth2;
    sqInt bmRaster2;
    sqInt cMask3;
    sqInt g2;
    sqInt r2;
    sqInt rShift2;
    sqInt value2;
    sqInt firstPixel1;

	bits = loadBitsFrom(bmFill);
	if (bits == null) {
		return null;
	}
	bmWidth = objBuffer[bmFill + GBBitmapWidth];
	bmHeight = objBuffer[bmFill + GBBitmapHeight];
	tileFlag = (objBuffer[bmFill + GBTileFlag]) == 1;
	deltaX = leftX - (objBuffer[bmFill + GFOriginX]);
	deltaY = yValue - (objBuffer[bmFill + GFOriginY]);
	dsX = objBuffer[bmFill + GFDirectionX];
	dtX = objBuffer[bmFill + GFNormalX];
	ds = (deltaX * dsX) + (deltaY * (objBuffer[bmFill + GFDirectionY]));
	dt = (deltaX * dtX) + (deltaY * (objBuffer[bmFill + GFNormalY]));
	aaLevel = workBuffer[GWAALevel];
	/* begin aaFirstPixelFrom:to: */
	firstPixel1 = ((leftX + (workBuffer[GWAALevel])) - 1) & (~((workBuffer[GWAALevel]) - 1));
	if (firstPixel1 > rightX) {
		firstPixel = rightX;
		goto l10;
	} else {
		firstPixel = firstPixel1;
		goto l10;
	}
l10:	/* end aaFirstPixelFrom:to: */;
	lastPixel = (rightX - 1) & (~((workBuffer[GWAALevel]) - 1));
	baseShift = workBuffer[GWAAShift];
	cMask = workBuffer[GWAAColorMask];
	cShift = workBuffer[GWAAColorShift];
	x = leftX;
	while (x < firstPixel) {
		if (tileFlag) {
			/* begin repeatValue:max: */
			newDelta = ds;
			while (newDelta < 0) {
				newDelta += bmWidth << 16;
			}
			while (newDelta >= (bmWidth << 16)) {
				newDelta -= bmWidth << 16;
			}
			ds = newDelta;
			/* begin repeatValue:max: */
			newDelta1 = dt;
			while (newDelta1 < 0) {
				newDelta1 += bmHeight << 16;
			}
			while (newDelta1 >= (bmHeight << 16)) {
				newDelta1 -= bmHeight << 16;
			}
			dt = newDelta1;
		}
		xp = ((sqInt) ds >> 16);
		yp = ((sqInt) dt >> 16);
		if (!(tileFlag)) {
			/* begin clampValue:max: */
			if (xp < 0) {
				xp = 0;
				goto l1;
			} else {
				if (xp >= bmWidth) {
					xp = bmWidth - 1;
					goto l1;
				} else {
					xp = xp;
					goto l1;
				}
			}
		l1:	/* end clampValue:max: */;
			/* begin clampValue:max: */
			if (yp < 0) {
				yp = 0;
				goto l2;
			} else {
				if (yp >= bmHeight) {
					yp = bmHeight - 1;
					goto l2;
				} else {
					yp = yp;
					goto l2;
				}
			}
		l2:	/* end clampValue:max: */;
		}
		if ((xp >= 0) && ((yp >= 0) && ((xp < bmWidth) && (yp < bmHeight)))) {
			/* begin bitmapValue:bits:atX:y: */
			bmDepth = objBuffer[bmFill + GBBitmapDepth];
			bmRaster = objBuffer[bmFill + GBBitmapRaster];
			if (bmDepth == 32) {
				value = (((int*) bits))[(bmRaster * yp) + xp];
				if ((value != 0) && ((value & 4278190080U) == 0)) {
					value = value | 4278190080U;
				}
				fillValue = uncheckedTransformColor(value);
				goto l3;
			}
			rShift = (rShiftTable())[bmDepth];
			value = (((int*) bits))[(bmRaster * yp) + (((usqInt) xp) >> rShift)];
			cMask1 = (1 << bmDepth) - 1;
			rShift = (32 - bmDepth) - ((xp & ((1 << rShift) - 1)) * bmDepth);
			value = (((usqInt) value) >> rShift) & cMask1;
			if (bmDepth == 16) {
				if (!(value == 0)) {
					b = (value & 31) << 3;
					b += ((usqInt) b) >> 5;
					g = ((((usqInt) value) >> 5) & 31) << 3;
					g += ((usqInt) g) >> 5;
					r = ((((usqInt) value) >> 10) & 31) << 3;
					r += ((usqInt) r) >> 5;
					a = 255;
					value = ((b + (g << 8)) + (r << 16)) + (a << 24);
				}
			} else {
				if ((objBuffer[bmFill + GBColormapSize]) == 0) {
					value = 0;
				} else {
					value = ((objBuffer + bmFill) + GBColormapOffset)[value];
				}
			}
			fillValue = uncheckedTransformColor(value);
		l3:	/* end bitmapValue:bits:atX:y: */;
			fillValue = ((usqInt) (fillValue & cMask)) >> cShift;
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + fillValue);
		}
		ds += dsX;
		dt += dtX;
		x += 1;
	}
	cMask = (((usqInt) (workBuffer[GWAAColorMask])) >> (workBuffer[GWAAShift])) | 4042322160U;
	cShift = workBuffer[GWAAShift];
	while (x < lastPixel) {
		if (tileFlag) {
			/* begin repeatValue:max: */
			newDelta2 = ds;
			while (newDelta2 < 0) {
				newDelta2 += bmWidth << 16;
			}
			while (newDelta2 >= (bmWidth << 16)) {
				newDelta2 -= bmWidth << 16;
			}
			ds = newDelta2;
			/* begin repeatValue:max: */
			newDelta3 = dt;
			while (newDelta3 < 0) {
				newDelta3 += bmHeight << 16;
			}
			while (newDelta3 >= (bmHeight << 16)) {
				newDelta3 -= bmHeight << 16;
			}
			dt = newDelta3;
		}
		xp = ((sqInt) ds >> 16);
		yp = ((sqInt) dt >> 16);
		if (!(tileFlag)) {
			/* begin clampValue:max: */
			if (xp < 0) {
				xp = 0;
				goto l4;
			} else {
				if (xp >= bmWidth) {
					xp = bmWidth - 1;
					goto l4;
				} else {
					xp = xp;
					goto l4;
				}
			}
		l4:	/* end clampValue:max: */;
			/* begin clampValue:max: */
			if (yp < 0) {
				yp = 0;
				goto l5;
			} else {
				if (yp >= bmHeight) {
					yp = bmHeight - 1;
					goto l5;
				} else {
					yp = yp;
					goto l5;
				}
			}
		l5:	/* end clampValue:max: */;
		}
		if ((xp >= 0) && ((yp >= 0) && ((xp < bmWidth) && (yp < bmHeight)))) {
			/* begin bitmapValue:bits:atX:y: */
			bmDepth1 = objBuffer[bmFill + GBBitmapDepth];
			bmRaster1 = objBuffer[bmFill + GBBitmapRaster];
			if (bmDepth1 == 32) {
				value1 = (((int*) bits))[(bmRaster1 * yp) + xp];
				if ((value1 != 0) && ((value1 & 4278190080U) == 0)) {
					value1 = value1 | 4278190080U;
				}
				fillValue = uncheckedTransformColor(value1);
				goto l6;
			}
			rShift1 = (rShiftTable())[bmDepth1];
			value1 = (((int*) bits))[(bmRaster1 * yp) + (((usqInt) xp) >> rShift1)];
			cMask2 = (1 << bmDepth1) - 1;
			rShift1 = (32 - bmDepth1) - ((xp & ((1 << rShift1) - 1)) * bmDepth1);
			value1 = (((usqInt) value1) >> rShift1) & cMask2;
			if (bmDepth1 == 16) {
				if (!(value1 == 0)) {
					b1 = (value1 & 31) << 3;
					b1 += ((usqInt) b1) >> 5;
					g1 = ((((usqInt) value1) >> 5) & 31) << 3;
					g1 += ((usqInt) g1) >> 5;
					r1 = ((((usqInt) value1) >> 10) & 31) << 3;
					r1 += ((usqInt) r1) >> 5;
					a1 = 255;
					value1 = ((b1 + (g1 << 8)) + (r1 << 16)) + (a1 << 24);
				}
			} else {
				if ((objBuffer[bmFill + GBColormapSize]) == 0) {
					value1 = 0;
				} else {
					value1 = ((objBuffer + bmFill) + GBColormapOffset)[value1];
				}
			}
			fillValue = uncheckedTransformColor(value1);
		l6:	/* end bitmapValue:bits:atX:y: */;
			fillValue = ((usqInt) (fillValue & cMask)) >> cShift;
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + fillValue);
		}
		ds += dsX << cShift;
		dt += dtX << cShift;
		x += aaLevel;
	}
	cMask = workBuffer[GWAAColorMask];
	cShift = workBuffer[GWAAColorShift];
	while (x < rightX) {
		if (tileFlag) {
			/* begin repeatValue:max: */
			newDelta4 = ds;
			while (newDelta4 < 0) {
				newDelta4 += bmWidth << 16;
			}
			while (newDelta4 >= (bmWidth << 16)) {
				newDelta4 -= bmWidth << 16;
			}
			ds = newDelta4;
			/* begin repeatValue:max: */
			newDelta5 = dt;
			while (newDelta5 < 0) {
				newDelta5 += bmHeight << 16;
			}
			while (newDelta5 >= (bmHeight << 16)) {
				newDelta5 -= bmHeight << 16;
			}
			dt = newDelta5;
		}
		xp = ((sqInt) ds >> 16);
		yp = ((sqInt) dt >> 16);
		if (!(tileFlag)) {
			/* begin clampValue:max: */
			if (xp < 0) {
				xp = 0;
				goto l7;
			} else {
				if (xp >= bmWidth) {
					xp = bmWidth - 1;
					goto l7;
				} else {
					xp = xp;
					goto l7;
				}
			}
		l7:	/* end clampValue:max: */;
			/* begin clampValue:max: */
			if (yp < 0) {
				yp = 0;
				goto l8;
			} else {
				if (yp >= bmHeight) {
					yp = bmHeight - 1;
					goto l8;
				} else {
					yp = yp;
					goto l8;
				}
			}
		l8:	/* end clampValue:max: */;
		}
		if ((xp >= 0) && ((yp >= 0) && ((xp < bmWidth) && (yp < bmHeight)))) {
			/* begin bitmapValue:bits:atX:y: */
			bmDepth2 = objBuffer[bmFill + GBBitmapDepth];
			bmRaster2 = objBuffer[bmFill + GBBitmapRaster];
			if (bmDepth2 == 32) {
				value2 = (((int*) bits))[(bmRaster2 * yp) + xp];
				if ((value2 != 0) && ((value2 & 4278190080U) == 0)) {
					value2 = value2 | 4278190080U;
				}
				fillValue = uncheckedTransformColor(value2);
				goto l9;
			}
			rShift2 = (rShiftTable())[bmDepth2];
			value2 = (((int*) bits))[(bmRaster2 * yp) + (((usqInt) xp) >> rShift2)];
			cMask3 = (1 << bmDepth2) - 1;
			rShift2 = (32 - bmDepth2) - ((xp & ((1 << rShift2) - 1)) * bmDepth2);
			value2 = (((usqInt) value2) >> rShift2) & cMask3;
			if (bmDepth2 == 16) {
				if (!(value2 == 0)) {
					b2 = (value2 & 31) << 3;
					b2 += ((usqInt) b2) >> 5;
					g2 = ((((usqInt) value2) >> 5) & 31) << 3;
					g2 += ((usqInt) g2) >> 5;
					r2 = ((((usqInt) value2) >> 10) & 31) << 3;
					r2 += ((usqInt) r2) >> 5;
					a2 = 255;
					value2 = ((b2 + (g2 << 8)) + (r2 << 16)) + (a2 << 24);
				}
			} else {
				if ((objBuffer[bmFill + GBColormapSize]) == 0) {
					value2 = 0;
				} else {
					value2 = ((objBuffer + bmFill) + GBColormapOffset)[value2];
				}
			}
			fillValue = uncheckedTransformColor(value2);
		l9:	/* end bitmapValue:bits:atX:y: */;
			fillValue = ((usqInt) (fillValue & cMask)) >> cShift;
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + fillValue);
		}
		ds += dsX;
		dt += dtX;
		x += 1;
	}
}


/*	This is the inner loop for solid color fills with anti-aliasing.
	This loop has been unrolled for speed and quality into three parts:
		a) copy all pixels that fall into the first full pixel.
		b) copy aaLevel pixels between the first and the last full pixel
		c) copy all pixels that fall in the last full pixel */

static sqInt fillColorSpanAAx0x1(sqInt pixelValue32, sqInt leftX, sqInt rightX) {
    sqInt aaLevel;
    sqInt baseShift;
    sqInt colorMask;
    sqInt firstPixel;
    sqInt idx;
    sqInt lastPixel;
    sqInt pv32;
    sqInt x;
    sqInt firstPixel1;

	/* begin aaFirstPixelFrom:to: */
	firstPixel1 = ((leftX + (workBuffer[GWAALevel])) - 1) & (~((workBuffer[GWAALevel]) - 1));
	if (firstPixel1 > rightX) {
		firstPixel = rightX;
		goto l1;
	} else {
		firstPixel = firstPixel1;
		goto l1;
	}
l1:	/* end aaFirstPixelFrom:to: */;
	lastPixel = (rightX - 1) & (~((workBuffer[GWAALevel]) - 1));
	aaLevel = workBuffer[GWAALevel];
	baseShift = workBuffer[GWAAShift];

	/* Part a: Deal with the first n sub-pixels */

	x = leftX;
	if (x < firstPixel) {
		pv32 = ((usqInt) (pixelValue32 & (workBuffer[GWAAColorMask]))) >> (workBuffer[GWAAColorShift]);
		while (x < firstPixel) {
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + pv32);
			x += 1;
		}
	}
	if (x < lastPixel) {
		colorMask = (((usqInt) (workBuffer[GWAAColorMask])) >> (workBuffer[GWAAShift])) | 4042322160U;
		pv32 = ((usqInt) (pixelValue32 & colorMask)) >> (workBuffer[GWAAShift]);
		while (x < lastPixel) {
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + pv32);
			x += aaLevel;
		}
	}
	if (x < rightX) {
		pv32 = ((usqInt) (pixelValue32 & (workBuffer[GWAAColorMask]))) >> (workBuffer[GWAAColorShift]);
		while (x < rightX) {
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + pv32);
			x += 1;
		}
	}
}


/*	Draw a linear gradient fill. */

static sqInt fillLinearGradientfromtoat(sqInt fill, sqInt leftX, sqInt rightX, sqInt yValue) {
    sqInt ds;
    sqInt dsX;
    int *ramp;
    sqInt rampIndex;
    sqInt rampSize;
    sqInt x;
    sqInt x0;
    sqInt x1;
    sqInt x01;
    sqInt x11;
    sqInt x02;
    sqInt x12;

	ramp = (objBuffer + fill) + GFRampOffset;
	rampSize = objBuffer[fill + GFRampLength];
	dsX = objBuffer[fill + GFDirectionX];
	ds = ((leftX - (objBuffer[fill + GFOriginX])) * dsX) + ((yValue - (objBuffer[fill + GFOriginY])) * (objBuffer[fill + GFDirectionY]));
	x = (x0 = leftX);

	/* Note: The inner loop has been divided into three parts for speed */
	/* Part one: Fill everything outside the left boundary */

	x1 = rightX;
	while (((((rampIndex = ((sqInt) ds >> 16))) < 0) || (rampIndex >= rampSize)) && (x < x1)) {
		x += 1;
		ds += dsX;
	}
	if (x > x0) {
		if (rampIndex < 0) {
			rampIndex = 0;
		}
		if (rampIndex >= rampSize) {
			rampIndex = rampSize - 1;
		}
		/* begin fillColorSpan:from:to: */
		if (!((workBuffer[GWAALevel]) == 1)) {
			fillColorSpanAAx0x1(ramp[rampIndex], x0, x);
			goto l1;
		}
		x01 = x0;
		x11 = x;
		while ((x01 + 4) < x11) {
			spanBuffer[x01] = (ramp[rampIndex]);
			spanBuffer[x01 + 1] = (ramp[rampIndex]);
			spanBuffer[x01 + 2] = (ramp[rampIndex]);
			spanBuffer[x01 + 3] = (ramp[rampIndex]);
			x01 += 4;
		}
		while (x01 < x11) {
			spanBuffer[x01] = (ramp[rampIndex]);
			x01 += 1;
		}
	l1:	/* end fillColorSpan:from:to: */;
	}
	if ((workBuffer[GWAALevel]) == 1) {
		while (((((rampIndex = ((sqInt) ds >> 16))) < rampSize) && (rampIndex >= 0)) && (x < x1)) {
			spanBuffer[x] = (ramp[rampIndex]);
			x += 1;
			ds += dsX;
		}
	} else {
		x = fillLinearGradientAArampdsdsXfromto(fill, ramp, ds, dsX, x, rightX);
	}
	if (x < x1) {
		if (rampIndex < 0) {
			rampIndex = 0;
		}
		if (rampIndex >= rampSize) {
			rampIndex = rampSize - 1;
		}
		/* begin fillColorSpan:from:to: */
		if (!((workBuffer[GWAALevel]) == 1)) {
			fillColorSpanAAx0x1(ramp[rampIndex], x, x1);
			goto l2;
		}
		x02 = x;
		x12 = x1;
		while ((x02 + 4) < x12) {
			spanBuffer[x02] = (ramp[rampIndex]);
			spanBuffer[x02 + 1] = (ramp[rampIndex]);
			spanBuffer[x02 + 2] = (ramp[rampIndex]);
			spanBuffer[x02 + 3] = (ramp[rampIndex]);
			x02 += 4;
		}
		while (x02 < x12) {
			spanBuffer[x02] = (ramp[rampIndex]);
			x02 += 1;
		}
	l2:	/* end fillColorSpan:from:to: */;
	}
}


/*	This is the AA version of linear gradient filling. */

static sqInt fillLinearGradientAArampdsdsXfromto(sqInt fill, int *ramp, sqInt deltaS, sqInt dsX, sqInt leftX, sqInt rightX) {
    sqInt aaLevel;
    sqInt baseShift;
    sqInt colorMask;
    sqInt colorShift;
    sqInt ds;
    sqInt firstPixel;
    sqInt idx;
    sqInt lastPixel;
    sqInt rampIndex;
    sqInt rampSize;
    sqInt rampValue;
    sqInt x;
    sqInt firstPixel1;

	aaLevel = workBuffer[GWAALevel];
	baseShift = workBuffer[GWAAShift];
	rampSize = objBuffer[fill + GFRampLength];
	ds = deltaS;
	x = leftX;
	rampIndex = ((sqInt) ds >> 16);
	/* begin aaFirstPixelFrom:to: */
	firstPixel1 = ((leftX + (workBuffer[GWAALevel])) - 1) & (~((workBuffer[GWAALevel]) - 1));
	if (firstPixel1 > rightX) {
		firstPixel = rightX;
		goto l1;
	} else {
		firstPixel = firstPixel1;
		goto l1;
	}
l1:	/* end aaFirstPixelFrom:to: */;

	/* Deal with the first n sub-pixels */

	lastPixel = (rightX - 1) & (~((workBuffer[GWAALevel]) - 1));
	colorMask = workBuffer[GWAAColorMask];
	colorShift = workBuffer[GWAAColorShift];
	while ((x < firstPixel) && ((rampIndex < rampSize) && (rampIndex >= 0))) {
		rampValue = (((int *) ramp))[rampIndex];

		/* Copy as many pixels as possible */

		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while ((x < firstPixel) && ((((sqInt) ds >> 16)) == rampIndex)) {
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + rampValue);
			x += 1;
			ds += dsX;
		}
		rampIndex = ((sqInt) ds >> 16);
	}
	colorMask = (((usqInt) (workBuffer[GWAAColorMask])) >> (workBuffer[GWAAShift])) | 4042322160U;
	colorShift = workBuffer[GWAAShift];
	while ((x < lastPixel) && ((rampIndex < rampSize) && (rampIndex >= 0))) {
		rampValue = (((int *) ramp))[rampIndex];

		/* Copy as many pixels as possible */

		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while ((x < lastPixel) && ((((sqInt) ds >> 16)) == rampIndex)) {
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + rampValue);
			x += aaLevel;
			ds += dsX << colorShift;
		}
		rampIndex = ((sqInt) ds >> 16);
	}
	colorMask = workBuffer[GWAAColorMask];
	colorShift = workBuffer[GWAAColorShift];
	while ((x < rightX) && ((rampIndex < rampSize) && (rampIndex >= 0))) {
		rampValue = (((int *) ramp))[rampIndex];

		/* Copy as many pixels as possible */

		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while ((x < rightX) && ((((sqInt) ds >> 16)) == rampIndex)) {
			idx = ((usqInt) x) >> baseShift;
			spanBuffer[idx] = ((spanBuffer[idx]) + rampValue);
			x += 1;
			ds += dsX;
		}
		rampIndex = ((sqInt) ds >> 16);
	}
	return x;
}


/*	Part 2a) Compute the decreasing part of the ramp */

static sqInt fillRadialDecreasingAArampdeltaSTdsXdtXfromto(sqInt fill, int *ramp,  int *deltaST, sqInt dsX, sqInt dtX, sqInt leftX, sqInt rightX) {
    sqInt aaLevel;
    sqInt baseShift;
    sqInt colorMask;
    sqInt colorShift;
    sqInt ds;
    sqInt dt;
    sqInt firstPixel;
    sqInt index;
    sqInt lastPixel;
    sqInt length2;
    sqInt nextLength;
    sqInt rampIndex;
    sqInt rampValue;
    sqInt x;
    sqInt x1;
    sqInt firstPixel1;

	ds = (((int*) deltaST))[0];
	dt = (((int*) deltaST))[1];
	aaLevel = workBuffer[GWAALevel];
	baseShift = workBuffer[GWAAShift];
	rampIndex = accurateLengthOfwith(((sqInt) ds >> 16), ((sqInt) dt >> 16));
	length2 = (rampIndex - 1) * (rampIndex - 1);
	x = leftX;
	x1 = objBuffer[fill + GFOriginX];
	if (x1 > rightX) {
		x1 = rightX;
	}
	/* begin aaFirstPixelFrom:to: */
	firstPixel1 = ((leftX + (workBuffer[GWAALevel])) - 1) & (~((workBuffer[GWAALevel]) - 1));
	if (firstPixel1 > x1) {
		firstPixel = x1;
		goto l1;
	} else {
		firstPixel = firstPixel1;
		goto l1;
	}
l1:	/* end aaFirstPixelFrom:to: */;

	/* Deal with the first n sub-pixels */

	lastPixel = (x1 - 1) & (~((workBuffer[GWAALevel]) - 1));
	if (x < firstPixel) {
		colorMask = workBuffer[GWAAColorMask];
		colorShift = workBuffer[GWAAColorShift];
		rampValue = (((int *) ramp))[rampIndex];
		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while (x < firstPixel) {
			while ((x < firstPixel) && ((((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)))) >= length2)) {
				index = ((usqInt) x) >> baseShift;
				spanBuffer[index] = ((spanBuffer[index]) + rampValue);
				x += 1;
				ds += dsX;
				dt += dtX;
			}
			nextLength = ((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)));
			while (nextLength < length2) {
				rampIndex -= 1;
				rampValue = (((int *) ramp))[rampIndex];
				rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
				length2 = (rampIndex - 1) * (rampIndex - 1);
			}
		}
	}
	if (x < lastPixel) {
		colorMask = (((usqInt) (workBuffer[GWAAColorMask])) >> (workBuffer[GWAAShift])) | 4042322160U;
		colorShift = workBuffer[GWAAShift];
		rampValue = (((int *) ramp))[rampIndex];
		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while (x < lastPixel) {
			while ((x < lastPixel) && ((((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)))) >= length2)) {
				index = ((usqInt) x) >> baseShift;
				spanBuffer[index] = ((spanBuffer[index]) + rampValue);
				x += aaLevel;
				ds += dsX << colorShift;
				dt += dtX << colorShift;
			}
			nextLength = ((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)));
			while (nextLength < length2) {
				rampIndex -= 1;
				rampValue = (((int *) ramp))[rampIndex];
				rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
				length2 = (rampIndex - 1) * (rampIndex - 1);
			}
		}
	}
	if (x < x1) {
		colorMask = workBuffer[GWAAColorMask];
		colorShift = workBuffer[GWAAColorShift];
		rampValue = (((int *) ramp))[rampIndex];
		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while (x < x1) {
			while ((x < x1) && ((((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)))) >= length2)) {
				index = ((usqInt) x) >> baseShift;
				spanBuffer[index] = ((spanBuffer[index]) + rampValue);
				x += 1;
				ds += dsX;
				dt += dtX;
			}
			nextLength = ((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)));
			while (nextLength < length2) {
				rampIndex -= 1;
				rampValue = (((int *) ramp))[rampIndex];
				rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
				length2 = (rampIndex - 1) * (rampIndex - 1);
			}
		}
	}
	(((int *) deltaST))[0] = ds;
	(((int *) deltaST))[1] = dt;
	return x;
}


/*	Draw a radial gradient fill. */

static sqInt fillRadialGradientfromtoat(sqInt fill, sqInt leftX, sqInt rightX, sqInt yValue) {
    int *deltaST;
    sqInt deltaX;
    sqInt deltaY;
    sqInt ds;
    sqInt dsX;
    sqInt dt;
    sqInt dtX;
    sqInt length2;
    int *ramp;
    sqInt rampSize;
    sqInt x;
    sqInt x1;
    sqInt x0;
    sqInt x11;
    sqInt ds1;
    sqInt dt1;
    sqInt length21;
    sqInt nextLength;
    sqInt rampIndex;
    sqInt rampValue;
    sqInt x2;
    sqInt x12;
    sqInt x01;
    sqInt x13;
    sqInt ds2;
    sqInt dt2;
    sqInt lastLength;
    sqInt length22;
    sqInt nextLength1;
    sqInt rampIndex1;
    sqInt rampSize1;
    sqInt rampValue1;
    sqInt x3;
    sqInt x14;

	ramp = (objBuffer + fill) + GFRampOffset;
	rampSize = objBuffer[fill + GFRampLength];
	deltaX = leftX - (objBuffer[fill + GFOriginX]);
	deltaY = yValue - (objBuffer[fill + GFOriginY]);
	dsX = objBuffer[fill + GFDirectionX];
	dtX = objBuffer[fill + GFNormalX];
	ds = (deltaX * dsX) + (deltaY * (objBuffer[fill + GFDirectionY]));
	dt = (deltaX * dtX) + (deltaY * (objBuffer[fill + GFNormalY]));
	x = leftX;

	/* Note: The inner loop has been divided into three parts for speed */
	/* Part one: Fill everything outside the left boundary */

	x1 = rightX;

	/* This is the upper bound */

	length2 = (rampSize - 1) * (rampSize - 1);
	while (((((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)))) >= length2) && (x < x1)) {
		x += 1;
		ds += dsX;
		dt += dtX;
	}
	if (x > leftX) {
		/* begin fillColorSpan:from:to: */
		if (!((workBuffer[GWAALevel]) == 1)) {
			fillColorSpanAAx0x1(ramp[rampSize - 1], leftX, x);
			goto l1;
		}
		x0 = leftX;
		x11 = x;
		while ((x0 + 4) < x11) {
			spanBuffer[x0] = (ramp[rampSize - 1]);
			spanBuffer[x0 + 1] = (ramp[rampSize - 1]);
			spanBuffer[x0 + 2] = (ramp[rampSize - 1]);
			spanBuffer[x0 + 3] = (ramp[rampSize - 1]);
			x0 += 4;
		}
		while (x0 < x11) {
			spanBuffer[x0] = (ramp[rampSize - 1]);
			x0 += 1;
		}
	l1:	/* end fillColorSpan:from:to: */;
	}
	deltaST = ((int *) (workBuffer + GWPoint1));
	deltaST[0] = ds;
	deltaST[1] = dt;
	if (x < (objBuffer[fill + GFOriginX])) {
		if ((workBuffer[GWAALevel]) == 1) {
			/* begin fillRadialDecreasing:ramp:deltaST:dsX:dtX:from:to: */
			ds1 = (((int*) deltaST))[0];
			dt1 = (((int*) deltaST))[1];
			rampIndex = accurateLengthOfwith(((sqInt) ds1 >> 16), ((sqInt) dt1 >> 16));
			rampValue = (((int *) ramp))[rampIndex];
			length21 = (rampIndex - 1) * (rampIndex - 1);
			x2 = x;
			x12 = x1;
			if (x12 > (objBuffer[fill + GFOriginX])) {
				x12 = objBuffer[fill + GFOriginX];
			}
			while (x2 < x12) {
				while ((x2 < x12) && ((((((sqInt) ds1 >> 16)) * (((sqInt) ds1 >> 16))) + ((((sqInt) dt1 >> 16)) * (((sqInt) dt1 >> 16)))) >= length21)) {
					spanBuffer[x2] = rampValue;
					x2 += 1;
					ds1 += dsX;
					dt1 += dtX;
				}
				nextLength = ((((sqInt) ds1 >> 16)) * (((sqInt) ds1 >> 16))) + ((((sqInt) dt1 >> 16)) * (((sqInt) dt1 >> 16)));
				while (nextLength < length21) {
					rampIndex -= 1;
					rampValue = (((int *) ramp))[rampIndex];
					length21 = (rampIndex - 1) * (rampIndex - 1);
				}
			}
			(((int *) deltaST))[0] = ds1;
			(((int *) deltaST))[1] = dt1;
			x = x2;
		} else {
			x = fillRadialDecreasingAArampdeltaSTdsXdtXfromto(fill, ramp, deltaST, dsX, dtX, x, x1);
		}
	}
	if (x < x1) {
		if ((workBuffer[GWAALevel]) == 1) {
			/* begin fillRadialIncreasing:ramp:deltaST:dsX:dtX:from:to: */
			ds2 = (((int*) deltaST))[0];
			dt2 = (((int*) deltaST))[1];
			rampIndex1 = accurateLengthOfwith(((sqInt) ds2 >> 16), ((sqInt) dt2 >> 16));
			rampValue1 = (((int *) ramp))[rampIndex1];
			rampSize1 = objBuffer[fill + GFRampLength];
			length22 = (rampSize1 - 1) * (rampSize1 - 1);
			nextLength1 = (rampIndex1 + 1) * (rampIndex1 + 1);
			lastLength = ((((sqInt) ds2 >> 16)) * (((sqInt) ds2 >> 16))) + ((((sqInt) dt2 >> 16)) * (((sqInt) dt2 >> 16)));
			x3 = x;
			x14 = x1;
			while ((x3 < x14) && (lastLength < length22)) {
				while ((x3 < x14) && ((((((sqInt) ds2 >> 16)) * (((sqInt) ds2 >> 16))) + ((((sqInt) dt2 >> 16)) * (((sqInt) dt2 >> 16)))) <= nextLength1)) {
					spanBuffer[x3] = rampValue1;
					x3 += 1;
					ds2 += dsX;
					dt2 += dtX;
				}
				lastLength = ((((sqInt) ds2 >> 16)) * (((sqInt) ds2 >> 16))) + ((((sqInt) dt2 >> 16)) * (((sqInt) dt2 >> 16)));
				while (lastLength > nextLength1) {
					rampIndex1 += 1;
					rampValue1 = (((int *) ramp))[rampIndex1];
					nextLength1 = (rampIndex1 + 1) * (rampIndex1 + 1);
				}
			}
			(((int *) deltaST))[0] = ds2;
			(((int *) deltaST))[1] = dt2;
			x = x3;
		} else {
			x = fillRadialIncreasingAArampdeltaSTdsXdtXfromto(fill, ramp, deltaST, dsX, dtX, x, x1);
		}
	}
	if (x < rightX) {
		/* begin fillColorSpan:from:to: */
		if (!((workBuffer[GWAALevel]) == 1)) {
			fillColorSpanAAx0x1(ramp[rampSize - 1], x, rightX);
			goto l2;
		}
		x01 = x;
		x13 = rightX;
		while ((x01 + 4) < x13) {
			spanBuffer[x01] = (ramp[rampSize - 1]);
			spanBuffer[x01 + 1] = (ramp[rampSize - 1]);
			spanBuffer[x01 + 2] = (ramp[rampSize - 1]);
			spanBuffer[x01 + 3] = (ramp[rampSize - 1]);
			x01 += 4;
		}
		while (x01 < x13) {
			spanBuffer[x01] = (ramp[rampSize - 1]);
			x01 += 1;
		}
	l2:	/* end fillColorSpan:from:to: */;
	}
}


/*	Part 2b) Compute the increasing part of the ramp */

static sqInt fillRadialIncreasingAArampdeltaSTdsXdtXfromto(sqInt fill, int *ramp,  int *deltaST, sqInt dsX, sqInt dtX, sqInt leftX, sqInt rightX) {
    sqInt aaLevel;
    sqInt baseShift;
    sqInt colorMask;
    sqInt colorShift;
    sqInt ds;
    sqInt dt;
    sqInt firstPixel;
    sqInt index;
    sqInt lastLength;
    sqInt lastPixel;
    sqInt length2;
    sqInt nextLength;
    sqInt rampIndex;
    sqInt rampSize;
    sqInt rampValue;
    sqInt x;
    sqInt firstPixel1;

	ds = (((int*) deltaST))[0];
	dt = (((int*) deltaST))[1];
	aaLevel = workBuffer[GWAALevel];
	baseShift = workBuffer[GWAAShift];
	rampIndex = accurateLengthOfwith(((sqInt) ds >> 16), ((sqInt) dt >> 16));
	rampSize = objBuffer[fill + GFRampLength];

	/* This is the upper bound */

	length2 = (rampSize - 1) * (rampSize - 1);
	nextLength = (rampIndex + 1) * (rampIndex + 1);
	lastLength = ((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)));
	x = leftX;
	/* begin aaFirstPixelFrom:to: */
	firstPixel1 = ((leftX + (workBuffer[GWAALevel])) - 1) & (~((workBuffer[GWAALevel]) - 1));
	if (firstPixel1 > rightX) {
		firstPixel = rightX;
		goto l1;
	} else {
		firstPixel = firstPixel1;
		goto l1;
	}
l1:	/* end aaFirstPixelFrom:to: */;

	/* Deal with the first n subPixels */

	lastPixel = (rightX - 1) & (~((workBuffer[GWAALevel]) - 1));
	if ((x < firstPixel) && (lastLength < length2)) {
		colorMask = workBuffer[GWAAColorMask];
		colorShift = workBuffer[GWAAColorShift];
		rampValue = (((int *) ramp))[rampIndex];
		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while ((x < firstPixel) && (lastLength < length2)) {
			while ((x < firstPixel) && ((((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)))) <= nextLength)) {
				index = ((usqInt) x) >> baseShift;
				spanBuffer[index] = ((spanBuffer[index]) + rampValue);
				x += 1;
				ds += dsX;
				dt += dtX;
			}
			lastLength = ((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)));
			while (lastLength > nextLength) {
				rampIndex += 1;
				rampValue = (((int *) ramp))[rampIndex];
				rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
				nextLength = (rampIndex + 1) * (rampIndex + 1);
			}
		}
	}
	if ((x < lastPixel) && (lastLength < length2)) {
		colorMask = (((usqInt) (workBuffer[GWAAColorMask])) >> (workBuffer[GWAAShift])) | 4042322160U;
		colorShift = workBuffer[GWAAShift];
		rampValue = (((int *) ramp))[rampIndex];
		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while ((x < lastPixel) && (lastLength < length2)) {
			while ((x < lastPixel) && ((((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)))) <= nextLength)) {
				index = ((usqInt) x) >> baseShift;
				spanBuffer[index] = ((spanBuffer[index]) + rampValue);
				x += aaLevel;
				ds += dsX << colorShift;
				dt += dtX << colorShift;
			}
			lastLength = ((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)));
			while (lastLength > nextLength) {
				rampIndex += 1;
				rampValue = (((int *) ramp))[rampIndex];
				rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
				nextLength = (rampIndex + 1) * (rampIndex + 1);
			}
		}
	}
	if ((x < rightX) && (lastLength < length2)) {
		colorMask = workBuffer[GWAAColorMask];
		colorShift = workBuffer[GWAAColorShift];
		rampValue = (((int *) ramp))[rampIndex];
		rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
		while ((x < rightX) && (lastLength < length2)) {
			while ((x < rightX) && ((((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)))) <= nextLength)) {
				index = ((usqInt) x) >> baseShift;
				spanBuffer[index] = ((spanBuffer[index]) + rampValue);
				x += 1;
				ds += dsX;
				dt += dtX;
			}
			lastLength = ((((sqInt) ds >> 16)) * (((sqInt) ds >> 16))) + ((((sqInt) dt >> 16)) * (((sqInt) dt >> 16)));
			while (lastLength > nextLength) {
				rampIndex += 1;
				rampValue = (((int *) ramp))[rampIndex];
				rampValue = ((usqInt) (rampValue & colorMask)) >> colorShift;
				nextLength = (rampIndex + 1) * (rampIndex + 1);
			}
		}
	}
	(((int *) deltaST))[0] = ds;
	(((int *) deltaST))[1] = dt;
	return x;
}


/*	Return true if fillEntry1 should be drawn before fillEntry2 */

static sqInt fillSortsbefore(sqInt fillEntry1, sqInt fillEntry2) {
    sqInt diff;


	/* First check the depth value */

	diff = (workBuffer[(workBuffer[GWBufferTop]) + (fillEntry1 + 1)]) - (workBuffer[(workBuffer[GWBufferTop]) + (fillEntry2 + 1)]);
	if (!(diff == 0)) {
		return diff > 0;
	}
	return (((unsigned) (workBuffer[(workBuffer[GWBufferTop]) + fillEntry1]))) < (((unsigned) (workBuffer[(workBuffer[GWBufferTop]) + fillEntry2])));
}


/*	Fill the span buffer from leftX to rightX with the given fill.
	Clip before performing any operations. Return true if the fill must
	be handled by some Smalltalk code. */

static sqInt fillSpanfromto(unsigned int fill, sqInt leftX, sqInt rightX) {
    sqInt type;
    sqInt x0;
    sqInt x1;
    sqInt x01;
    sqInt x11;

	if (fill == 0) {
		return 0;
	}
	if (leftX < (workBuffer[GWSpanEndAA])) {
		x0 = workBuffer[GWSpanEndAA];
	} else {
		x0 = leftX;
	}
	if (rightX > ((workBuffer[GWSpanSize]) << (workBuffer[GWAAShift]))) {
		x1 = (workBuffer[GWSpanSize]) << (workBuffer[GWAAShift]);
	} else {
		x1 = rightX;
	}
	if (x0 < (workBuffer[GWFillMinX])) {
		x0 = workBuffer[GWFillMinX];
	}
	if (x1 > (workBuffer[GWFillMaxX])) {
		x1 = workBuffer[GWFillMaxX];
	}
	if (x0 < (workBuffer[GWSpanStart])) {
		workBuffer[GWSpanStart] = x0;
	}
	if (x1 > (workBuffer[GWSpanEnd])) {
		workBuffer[GWSpanEnd] = x1;
	}
	if (x1 > (workBuffer[GWSpanEndAA])) {
		workBuffer[GWSpanEndAA] = x1;
	}
	if (x0 >= x1) {
		return 0;
	}
	if ((fill & 4278190080U) != 0) {
		/* begin fillColorSpan:from:to: */
		if (!((workBuffer[GWAALevel]) == 1)) {
			fillColorSpanAAx0x1(fill, x0, x1);
			goto l1;
		}
		x01 = x0;
		x11 = x1;
		while ((x01 + 4) < x11) {
			spanBuffer[x01] = fill;
			spanBuffer[x01 + 1] = fill;
			spanBuffer[x01 + 2] = fill;
			spanBuffer[x01 + 3] = fill;
			x01 += 4;
		}
		while (x01 < x11) {
			spanBuffer[x01] = fill;
			x01 += 1;
		}
	l1:	/* end fillColorSpan:from:to: */;
	} else {
		workBuffer[GWLastExportedFill] = fill;
		workBuffer[GWLastExportedLeftX] = x0;
		workBuffer[GWLastExportedRightX] = x1;
		type = ((usqInt) (((objBuffer[fill + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveFillMask)) >> 8;
		if (type <= 1) {
			return 1;
		}
		switch (type) {
		case 0:
		case 1:
			errorWrongIndex();
			break;
		case 2:
			fillLinearGradientfromtoat(workBuffer[GWLastExportedFill], workBuffer[GWLastExportedLeftX], workBuffer[GWLastExportedRightX], workBuffer[GWCurrentY]);
			break;
		case 3:
			fillRadialGradientfromtoat(workBuffer[GWLastExportedFill], workBuffer[GWLastExportedLeftX], workBuffer[GWLastExportedRightX], workBuffer[GWCurrentY]);
			break;
		case 4:
		case 5:
			fillBitmapSpanfromtoat(workBuffer[GWLastExportedFill], workBuffer[GWLastExportedLeftX], workBuffer[GWLastExportedRightX], workBuffer[GWCurrentY]);
			break;
		}
	}
	return 0;
}


/*	Check the global edge table for any entries that cannot be handled by the engine itself.
	If there are any, return true. Otherwise, initialize the the edge and add it to the AET */

static sqInt findNextExternalEntryFromGET(void) {
    sqInt edge;
    sqInt type;
    sqInt yValue;


	/* As long as we have entries in the GET */

	yValue = workBuffer[GWCurrentY];
	while ((workBuffer[GWGETStart]) < (workBuffer[GWGETUsed])) {
		edge = getBuffer[workBuffer[GWGETStart]];
		if ((objBuffer[edge + GEYValue]) > yValue) {
			return 0;
		}
		type = (objBuffer[edge + GEObjectType]) & GEPrimitiveTypeMask;
		if ((type & GEPrimitiveWideMask) == GEPrimitiveEdge) {
			return 1;
		}
		if (!(needAvailableSpace(1))) {
			return 0;
		}
		switch (type) {
		case 0:
		case 1:
		case 2:
		case 3:
			errorWrongIndex();
			break;
		case 4:
			stepToFirstLineInat(getBuffer[workBuffer[GWGETStart]], workBuffer[GWCurrentY]);
			break;
		case 5:
			stepToFirstWideLineInat(getBuffer[workBuffer[GWGETStart]], workBuffer[GWCurrentY]);
			break;
		case 6:
			stepToFirstBezierInat(getBuffer[workBuffer[GWGETStart]], workBuffer[GWCurrentY]);
			break;
		case 7:
			stepToFirstWideBezierInat(getBuffer[workBuffer[GWGETStart]], workBuffer[GWCurrentY]);
			break;
		}
		insertEdgeIntoAET(edge);
		workBuffer[GWGETStart] = ((workBuffer[GWGETStart]) + 1);
	}
	return 0;
}


/*	Scan the active edge table. If there is any fill that cannot be handled by the engine itself,  return true. Otherwise handle the fills and return false. */
/*	self currentYGet >= 680 ifTrue:[
self printAET.
self halt.
]. */

static sqInt findNextExternalFillFromAET(void) {
    sqInt leftEdge;
    sqInt leftX;
    sqInt rightEdge;
    sqInt rightX;
    sqInt fill;
    sqInt startX;
    sqInt stopX;
    sqInt someIntegerValue;
    sqInt someIntegerValue1;
    sqInt rightX1;
    sqInt fill1;
    sqInt startX1;
    sqInt stopX1;
    sqInt someIntegerValue2;
    sqInt someIntegerValue11;

	leftX = (rightX = workBuffer[GWFillMaxX]);
	while ((workBuffer[GWAETStart]) < (workBuffer[GWAETUsed])) {

		/* TODO: We should check if leftX from last operation 
			is  greater than leftX from next edge.
			Currently, we rely here on spanEndAA
			from the span buffer fill. */

		leftEdge = (rightEdge = aetBuffer[workBuffer[GWAETStart]]);
		leftX = (rightX = objBuffer[leftEdge + GEXValue]);
		if (leftX >= (workBuffer[GWFillMaxX])) {
			return 0;
		}
		/* begin quickRemoveInvalidFillsAt: */
		if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
			goto l3;
		}
		while ((topRightX()) <= leftX) {
			hideFilldepth(topFill(), topDepth());
			if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
				goto l3;
			}
		}
	l3:	/* end quickRemoveInvalidFillsAt: */;
		if ((((objBuffer[leftEdge + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveWide) != 0) {
			toggleWideFillOf(leftEdge);
		}
		if (((objBuffer[leftEdge + GEObjectType]) & GEEdgeFillsInvalid) == 0) {
			toggleFillsOf(leftEdge);
			if (engineStopped) {
				return 0;
			}
		}
		workBuffer[GWAETStart] = ((workBuffer[GWAETStart]) + 1);
		if ((workBuffer[GWAETStart]) < (workBuffer[GWAETUsed])) {
			rightEdge = aetBuffer[workBuffer[GWAETStart]];
			rightX = objBuffer[rightEdge + GEXValue];
			if (rightX >= (workBuffer[GWFillMinX])) {
				/* begin fillAllFrom:to: */
				/* begin topFill */
				if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
					fill = 0;
					goto l8;
				} else {
					fill = workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)];
					goto l8;
				}
			l8:	/* end topFill */;
				startX = leftX;
				/* begin topRightX */
				if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
					stopX = 999999999;
					goto l9;
				} else {
					stopX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)];
					goto l9;
				}
			l9:	/* end topRightX */;
				while (stopX < rightX) {
					/* begin makeUnsignedFrom: */
					/* begin topFill */
					if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
						someIntegerValue = 0;
						goto l6;
					} else {
						someIntegerValue = workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)];
						goto l6;
					}
				l6:	/* end topFill */;
					fill = someIntegerValue;
					if (!(fill == 0)) {
						if (fillSpanfromto(fill, startX, stopX)) {
							goto l2;
						}
					}
					/* begin quickRemoveInvalidFillsAt: */
					if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
						goto l1;
					}
					while ((topRightX()) <= stopX) {
						hideFilldepth(topFill(), topDepth());
						if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
							goto l1;
						}
					}
				l1:	/* end quickRemoveInvalidFillsAt: */;
					startX = stopX;
					/* begin topRightX */
					if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
						stopX = 999999999;
						goto l7;
					} else {
						stopX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)];
						goto l7;
					}
				l7:	/* end topRightX */;
				}
				/* begin makeUnsignedFrom: */
				/* begin topFill */
				if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
					someIntegerValue1 = 0;
					goto l10;
				} else {
					someIntegerValue1 = workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)];
					goto l10;
				}
			l10:	/* end topFill */;
				fill = someIntegerValue1;
				if (!(fill == 0)) {
					fillSpanfromto(fill, startX, rightX);
					goto l2;
				}
			l2:	/* end fillAllFrom:to: */;
			}
		}
	}
	if (rightX < (workBuffer[GWFillMaxX])) {
		/* begin fillAllFrom:to: */
		rightX1 = workBuffer[GWFillMaxX];
		/* begin topFill */
		if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
			fill1 = 0;
			goto l13;
		} else {
			fill1 = workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)];
			goto l13;
		}
	l13:	/* end topFill */;
		startX1 = rightX;
		/* begin topRightX */
		if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
			stopX1 = 999999999;
			goto l14;
		} else {
			stopX1 = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)];
			goto l14;
		}
	l14:	/* end topRightX */;
		while (stopX1 < rightX1) {
			/* begin makeUnsignedFrom: */
			/* begin topFill */
			if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
				someIntegerValue2 = 0;
				goto l11;
			} else {
				someIntegerValue2 = workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)];
				goto l11;
			}
		l11:	/* end topFill */;
			fill1 = someIntegerValue2;
			if (!(fill1 == 0)) {
				if (fillSpanfromto(fill1, startX1, stopX1)) {
					goto l5;
				}
			}
			/* begin quickRemoveInvalidFillsAt: */
			if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
				goto l4;
			}
			while ((topRightX()) <= stopX1) {
				hideFilldepth(topFill(), topDepth());
				if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
					goto l4;
				}
			}
		l4:	/* end quickRemoveInvalidFillsAt: */;
			startX1 = stopX1;
			/* begin topRightX */
			if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
				stopX1 = 999999999;
				goto l12;
			} else {
				stopX1 = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)];
				goto l12;
			}
		l12:	/* end topRightX */;
		}
		/* begin makeUnsignedFrom: */
		/* begin topFill */
		if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
			someIntegerValue11 = 0;
			goto l15;
		} else {
			someIntegerValue11 = workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)];
			goto l15;
		}
	l15:	/* end topFill */;
		fill1 = someIntegerValue11;
		if (!(fill1 == 0)) {
			fillSpanfromto(fill1, startX1, rightX1);
			goto l5;
		}
	l5:	/* end fillAllFrom:to: */;
	}
	return 0;
}


/*	Check the active edge table for any entries that cannot be handled by the engine itself.
	If there are any, return true. Otherwise, step the the edge to the next y value. */

static sqInt findNextExternalUpdateFromAET(void) {
    sqInt count;
    sqInt edge;
    sqInt type;

	while ((workBuffer[GWAETStart]) < (workBuffer[GWAETUsed])) {
		edge = aetBuffer[workBuffer[GWAETStart]];
		count = (objBuffer[edge + GENumLines]) - 1;
		if (count == 0) {
			removeFirstAETEntry();
		} else {
			objBuffer[edge + GENumLines] = count;
			type = (objBuffer[edge + GEObjectType]) & GEPrimitiveTypeMask;
			if ((type & GEPrimitiveWideMask) == GEPrimitiveEdge) {
				return 1;
			}
			switch (type) {
			case 0:
			case 1:
			case 2:
			case 3:
				errorWrongIndex();
				break;
			case 4:
				stepToNextLineInat(aetBuffer[workBuffer[GWAETStart]], workBuffer[GWCurrentY]);
				break;
			case 5:
				stepToNextWideLineInat(aetBuffer[workBuffer[GWAETStart]], workBuffer[GWCurrentY]);
				break;
			case 6:
				stepToNextBezierInat(aetBuffer[workBuffer[GWAETStart]], workBuffer[GWCurrentY]);
				break;
			case 7:
				stepToNextWideBezier();
				break;
			}
			resortFirstAETEntry();
			workBuffer[GWAETStart] = ((workBuffer[GWAETStart]) + 1);
		}
	}
	return 0;
}

static sqInt findStackFilldepth(sqInt fillIndex, sqInt depth) {
    sqInt index;

	index = 0;
	while ((index < ((workBuffer[GWSize]) - (workBuffer[GWBufferTop]))) && (((workBuffer[(workBuffer[GWBufferTop]) + index]) != fillIndex) || ((workBuffer[(workBuffer[GWBufferTop]) + (index + 1)]) != depth))) {
		index += 3;
	}
	if (index >= ((workBuffer[GWSize]) - (workBuffer[GWBufferTop]))) {
		return -1;
	} else {
		return index;
	}
}


/*	Note: This is hardcoded so it can be run from Squeak.
	The module name is used for validating a module *after*
	it is loaded to check if it does really contain the module
	we're thinking it contains. This is important! */

EXPORT(const char*) getModuleName(void) {
	return moduleName;
}


/*	Return true if the edge at index i should sort before the edge at index j. */

static sqInt getSortsbefore(sqInt edge1, sqInt edge2) {
    sqInt diff;

	if (edge1 == edge2) {
		return 1;
	}
	diff = (objBuffer[edge1 + GEYValue]) - (objBuffer[edge2 + GEYValue]);
	if (!(diff == 0)) {
		return diff < 0;
	}
	diff = (objBuffer[edge1 + GEXValue]) - (objBuffer[edge2 + GEXValue]);
	return diff < 0;
}

static sqInt halt(void) {
	;
}


/*	Make the fill style with the given index invisible */

static sqInt hideFilldepth(sqInt fillIndex, sqInt depth) {
    sqInt index;
    sqInt newDepth;
    sqInt newRightX;
    sqInt newTop;
    sqInt newTopIndex;

	index = findStackFilldepth(fillIndex, depth);
	if (index == -1) {
		return 0;
	}
	if (index == 0) {
		/* begin freeStackFillEntry */
		/* begin wbStackPop: */
		workBuffer[GWBufferTop] = ((workBuffer[GWBufferTop]) + 3);
		return 1;
	}
	workBuffer[(workBuffer[GWBufferTop]) + index] = (workBuffer[(workBuffer[GWBufferTop]) + 0]);
	workBuffer[(workBuffer[GWBufferTop]) + (index + 1)] = (workBuffer[(workBuffer[GWBufferTop]) + (0 + 1)]);
	workBuffer[(workBuffer[GWBufferTop]) + (index + 2)] = (workBuffer[(workBuffer[GWBufferTop]) + (0 + 2)]);
	/* begin freeStackFillEntry */
	/* begin wbStackPop: */
	workBuffer[GWBufferTop] = ((workBuffer[GWBufferTop]) + 3);
	if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) <= 3) {
		return 1;
	}
	newTopIndex = 0;
	index = 3;
	while (index < ((workBuffer[GWSize]) - (workBuffer[GWBufferTop]))) {
		if (fillSortsbefore(index, newTopIndex)) {
			newTopIndex = index;
		}
		index += 3;
	}
	if ((newTopIndex + 3) == ((workBuffer[GWSize]) - (workBuffer[GWBufferTop]))) {
		return 1;
	}
	newTop = workBuffer[(workBuffer[GWBufferTop]) + newTopIndex];
	workBuffer[(workBuffer[GWBufferTop]) + newTopIndex] = (workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)]);
	workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)] = newTop;
	newDepth = workBuffer[(workBuffer[GWBufferTop]) + (newTopIndex + 1)];
	workBuffer[(workBuffer[GWBufferTop]) + (newTopIndex + 1)] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 1)]);
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 1)] = newDepth;
	newRightX = workBuffer[(workBuffer[GWBufferTop]) + (newTopIndex + 2)];
	workBuffer[(workBuffer[GWBufferTop]) + (newTopIndex + 2)] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)]);
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)] = newRightX;
	return 1;
}


/*	Find insertion point for the given edge in the AET */

static sqInt indexForInsertingIntoAET(sqInt edge) {
    sqInt index;
    sqInt initialX;

	initialX = objBuffer[edge + GEXValue];
	index = 0;
	while ((index < (workBuffer[GWAETUsed])) && ((objBuffer[(aetBuffer[index]) + GEXValue]) < initialX)) {
		index += 1;
	}
	while ((index < (workBuffer[GWAETUsed])) && (((objBuffer[(aetBuffer[index]) + GEXValue]) == initialX) && (getSortsbefore(aetBuffer[index], edge)))) {
		index += 1;
	}
	return index;
}

static sqInt initColorTransform(void) {
    float *transform;

	transform = ((float *) (workBuffer + GWColorTransform));
	transform[0] = (((float) 1.0));
	transform[1] = (((float) 0.0));
	transform[2] = (((float) 1.0));
	transform[3] = (((float) 0.0));
	transform[4] = (((float) 1.0));
	transform[5] = (((float) 0.0));
	transform[6] = (((float) 1.0));
	transform[7] = (((float) 0.0));
	workBuffer[GWHasColorTransform] = 0;
}

static sqInt initEdgeTransform(void) {
    float *transform;

	transform = ((float *) (workBuffer + GWEdgeTransform));
	transform[0] = (((float) 1.0));
	transform[1] = (((float) 0.0));
	transform[2] = (((float) 0.0));
	transform[3] = (((float) 0.0));
	transform[4] = (((float) 1.0));
	transform[5] = (((float) 0.0));
	workBuffer[GWHasEdgeTransform] = 0;
}

EXPORT(sqInt) initialiseModule(void) {
	loadBBFn = interpreterProxy->ioLoadFunctionFrom("loadBitBltFrom", bbPluginName);
	copyBitsFn = interpreterProxy->ioLoadFunctionFrom("copyBitsFromtoat", bbPluginName);
	return (loadBBFn != 0) && (copyBitsFn != 0);
}


/*	Initialization stuff that needs to be done before any processing can take place. */
/*	Make sure aaLevel is initialized */

static sqInt initializeGETProcessing(void) {
	setAALevel(workBuffer[GWAALevel]);
	if ((workBuffer[GWClipMinX]) < 0) {
		workBuffer[GWClipMinX] = 0;
	}
	if ((workBuffer[GWClipMaxX]) > (workBuffer[GWSpanSize])) {
		workBuffer[GWClipMaxX] = (workBuffer[GWSpanSize]);
	}
	workBuffer[GWFillMinX] = ((workBuffer[GWClipMinX]) << (workBuffer[GWAAShift]));
	workBuffer[GWFillMinY] = ((workBuffer[GWClipMinY]) << (workBuffer[GWAAShift]));
	workBuffer[GWFillMaxX] = ((workBuffer[GWClipMaxX]) << (workBuffer[GWAAShift]));
	workBuffer[GWFillMaxY] = ((workBuffer[GWClipMaxY]) << (workBuffer[GWAAShift]));
	workBuffer[GWGETUsed] = 0;
	workBuffer[GWAETUsed] = 0;
	getBuffer = objBuffer + objUsed;

	/* Create the global edge table */

	aetBuffer = objBuffer + objUsed;
	createGlobalEdgeTable();
	if (engineStopped) {
		return null;
	}
	if ((workBuffer[GWGETUsed]) == 0) {
		workBuffer[GWCurrentY] = (workBuffer[GWFillMaxY]);
		return 0;
	}
	/* begin sortGlobalEdgeTable */
	quickSortGlobalEdgeTablefromto(getBuffer, 0, (workBuffer[GWGETUsed]) - 1);
	workBuffer[GWCurrentY] = (objBuffer[(getBuffer[0]) + GEYValue]);
	if ((workBuffer[GWCurrentY]) < (workBuffer[GWFillMinY])) {
		workBuffer[GWCurrentY] = (workBuffer[GWFillMinY]);
	}
	workBuffer[GWSpanStart] = 0;
	workBuffer[GWSpanEnd] = (((workBuffer[GWSpanSize]) << (workBuffer[GWAAShift])) - 1);
	clearSpanBuffer();
}


/*	Insert the edge with the given index from the global edge table into the active edge table.
	The edge has already been stepped to the initial yValue -- thus remainingLines and rasterX
	are both set. */

static sqInt insertEdgeIntoAET(sqInt edge) {
    sqInt index;

	if ((objBuffer[edge + GENumLines]) <= 0) {
		return null;
	}

	/* And insert edge */

	index = indexForInsertingIntoAET(edge);
	insertToAETbeforeIndex(edge, index);
}


/*	Insert the given edge into the AET. */

static sqInt insertToAETbeforeIndex(sqInt edge, sqInt index) {
    sqInt i;

	if (!(needAvailableSpace(1))) {
		return null;
	}
	i = (workBuffer[GWAETUsed]) - 1;
	while (!(i < index)) {
		aetBuffer[i + 1] = (aetBuffer[i]);
		i -= 1;
	}
	aetBuffer[index] = edge;
	workBuffer[GWAETUsed] = ((workBuffer[GWAETUsed]) + 1);
}

static sqInt isEdge(sqInt edge) {
    sqInt type;

	type = (objBuffer[edge + GEObjectType]) & GEPrimitiveTypeMask;
	if (type > GEPrimitiveEdgeMask) {
		return 0;
	}
	return (((objBuffer[edge + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveEdgeMask) != 0;
}

static sqInt isFillOkay(sqInt fill) {
	return (fill == 0) || (((fill & 4278190080U) != 0) || (((fill >= 0) && (fill < objUsed)) && (((fill & 4278190080U) != 0) || ((((objBuffer[fill + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveFillMask) != 0))));
}


/*	Load and subdivide the bezier curve from point1/point2/point3.
	If wideFlag is set then make sure the curve is monoton in X. */

static sqInt loadAndSubdivideBezierFromviatoisWide(int *point1, int *point2, int *point3, sqInt wideFlag) {
    sqInt bz1;
    sqInt bz2;
    sqInt index;
    sqInt index1;
    sqInt index2;

	/* begin allocateBezierStackEntry */
	/* begin wbStackPush: */
	if (!(needAvailableSpace(6))) {
		goto l1;
	}
	workBuffer[GWBufferTop] = ((workBuffer[GWBufferTop]) - 6);
l1:	/* end wbStackPush: */;
	bz1 = (workBuffer[GWSize]) - (workBuffer[GWBufferTop]);
	if (engineStopped) {
		return 0;
	}
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - bz1) + 0)] = (point1[0]);
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - bz1) + 1)] = (point1[1]);
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - bz1) + 2)] = (point2[0]);
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - bz1) + 3)] = (point2[1]);
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - bz1) + 4)] = (point3[0]);
	workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - bz1) + 5)] = (point3[1]);
	index2 = (bz2 = subdivideToBeMonotoninX(bz1, wideFlag));
	for (index = bz1; index <= bz2; index += 6) {
		index1 = subdivideBezierFrom(index);
		if (index1 > index2) {
			index2 = index1;
		}
		if (engineStopped) {
			return 0;
		}
	}
	return index2 / 6;
}

static sqInt loadArrayShapenSegmentsfilllineWidthlineFill(sqInt points, sqInt nSegments, sqInt fillIndex, sqInt lineWidth, sqInt lineFill) {
    sqInt i;
    sqInt pointOop;
    sqInt segs;
    sqInt x0;
    sqInt x1;
    sqInt x2;
    sqInt y0;
    sqInt y1;
    sqInt y2;

	for (i = 0; i <= (nSegments - 1); i += 1) {
		pointOop = interpreterProxy->fetchPointerofObject(i * 3, points);
		loadPointfrom(((int *) (workBuffer + GWPoint1)), pointOop);
		pointOop = interpreterProxy->fetchPointerofObject((i * 3) + 1, points);
		loadPointfrom(((int *) (workBuffer + GWPoint2)), pointOop);
		pointOop = interpreterProxy->fetchPointerofObject((i * 3) + 2, points);
		loadPointfrom(((int *) (workBuffer + GWPoint3)), pointOop);
		if (interpreterProxy->failed()) {
			return null;
		}
		/* begin transformPoints: */
		if (3 > 0) {
			transformPoint(((int *) (workBuffer + GWPoint1)));
		}
		if (3 > 1) {
			transformPoint(((int *) (workBuffer + GWPoint2)));
		}
		if (3 > 2) {
			transformPoint(((int *) (workBuffer + GWPoint3)));
		}
		if (3 > 3) {
			transformPoint(((int *) (workBuffer + GWPoint4)));
		}
		x0 = (((int *) (workBuffer + GWPoint1)))[0];
		y0 = (((int *) (workBuffer + GWPoint1)))[1];
		x1 = (((int *) (workBuffer + GWPoint2)))[0];
		y1 = (((int *) (workBuffer + GWPoint2)))[1];
		x2 = (((int *) (workBuffer + GWPoint3)))[0];

		/* Check if we can use a line */

		y2 = (((int *) (workBuffer + GWPoint3)))[1];
		if (((x0 == y0) && (x1 == y1)) || ((x1 == x2) && (y1 == y2))) {
			loadWideLinefromtolineFillleftFillrightFill(lineWidth, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint3)), lineFill, fillIndex, 0);
		} else {
			segs = loadAndSubdivideBezierFromviatoisWide(((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), ((int *) (workBuffer + GWPoint3)), (lineWidth != 0) && (lineFill != 0));
			if (engineStopped) {
				return null;
			}
			loadWideBezierlineFillleftFillrightFilln(lineWidth, lineFill, fillIndex, 0, segs);
		}
		if (engineStopped) {
			return null;
		}
	}
}


/*	Load a transformation from the given array. */

static sqInt loadArrayTransformFromintolength(sqInt transformOop, float *destPtr, sqInt n) {
    sqInt i;
    sqInt value;

	for (i = 0; i <= (n - 1); i += 1) {
		value = interpreterProxy->fetchPointerofObject(i, transformOop);
		if (!(((value & 1)) || (interpreterProxy->isFloatObject(value)))) {
			return interpreterProxy->primitiveFail();
		}
		if ((value & 1)) {
			destPtr[i] = (((float) (((double) ((value >> 1)) ))));
		} else {
			destPtr[i] = (((float) (interpreterProxy->floatValueOf(value))));
		}
	}
}


/*	Initialize the bezier segment stored on the stack */

static sqInt loadBeziersegmentleftFillrightFilloffset(sqInt bezier, sqInt index, sqInt leftFillIndex, sqInt rightFillIndex, sqInt yOffset) {
	if ((workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)]) >= (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 1)])) {
		objBuffer[bezier + GEXValue] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 0)]);
		objBuffer[bezier + GEYValue] = ((workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 1)]) - yOffset);
		objBuffer[bezier + GBViaX] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 2)]);
		objBuffer[bezier + GBViaY] = ((workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 3)]) - yOffset);
		objBuffer[bezier + GBEndX] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 4)]);
		objBuffer[bezier + GBEndY] = ((workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)]) - yOffset);
	} else {
		objBuffer[bezier + GEXValue] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 4)]);
		objBuffer[bezier + GEYValue] = ((workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)]) - yOffset);
		objBuffer[bezier + GBViaX] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 2)]);
		objBuffer[bezier + GBViaY] = ((workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 3)]) - yOffset);
		objBuffer[bezier + GBEndX] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 0)]);
		objBuffer[bezier + GBEndY] = ((workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 1)]) - yOffset);
	}
	objBuffer[bezier + GEZValue] = (workBuffer[GWCurrentZ]);
	objBuffer[bezier + GEFillIndexLeft] = leftFillIndex;
	objBuffer[bezier + GEFillIndexRight] = rightFillIndex;
}

static sqInt loadBitBltFrom(sqInt bbObj) {
	if (loadBBFn == 0) {
		if (!(initialiseModule())) {
			return 0;
		}
	}
	return ((sqInt (*)(sqInt))loadBBFn)(bbObj);
}


/*	Load the bitmap fill. */

static sqInt loadBitmapFillcolormaptilefromalongnormalxIndex(sqInt formOop, sqInt cmOop, sqInt tileFlag, int *point1, int *point2, int *point3, sqInt xIndex) {
    sqInt bmBits;
    sqInt bmBitsSize;
    sqInt bmDepth;
    sqInt bmFill;
    sqInt bmHeight;
    sqInt bmRaster;
    sqInt bmWidth;
    int *cmBits;
    sqInt cmSize;
    sqInt ppw;

	if (cmOop == (interpreterProxy->nilObject())) {
		cmSize = 0;
		cmBits = null;
	} else {
		if (!((interpreterProxy->fetchClassOf(cmOop)) == (interpreterProxy->classBitmap()))) {
			return interpreterProxy->primitiveFail();
		}
		cmSize = interpreterProxy->slotSizeOf(cmOop);
		cmBits = interpreterProxy->firstIndexableField(cmOop);
	}
	if ((formOop & 1)) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->isPointers(formOop))) {
		return interpreterProxy->primitiveFail();
	}
	if ((interpreterProxy->slotSizeOf(formOop)) < 5) {
		return interpreterProxy->primitiveFail();
	}
	bmBits = interpreterProxy->fetchPointerofObject(0, formOop);
	if (!((interpreterProxy->fetchClassOf(bmBits)) == (interpreterProxy->classBitmap()))) {
		return interpreterProxy->primitiveFail();
	}
	bmBitsSize = interpreterProxy->slotSizeOf(bmBits);
	bmWidth = interpreterProxy->fetchIntegerofObject(1, formOop);
	bmHeight = interpreterProxy->fetchIntegerofObject(2, formOop);
	bmDepth = interpreterProxy->fetchIntegerofObject(3, formOop);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!((bmWidth >= 0) && (bmHeight >= 0))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((((((bmDepth == 32) || (bmDepth == 8)) || (bmDepth == 16)) || (bmDepth == 1)) || (bmDepth == 2)) || (bmDepth == 4))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((cmSize == 0) || (cmSize == (1 << bmDepth)))) {
		return interpreterProxy->primitiveFail();
	}
	ppw = 32 / bmDepth;
	bmRaster = (bmWidth + (ppw - 1)) / ppw;
	if (!(bmBitsSize == (bmRaster * bmHeight))) {
		return interpreterProxy->primitiveFail();
	}
	bmFill = allocateBitmapFillcolormap(cmSize, cmBits);
	if (engineStopped) {
		return null;
	}
	objBuffer[bmFill + GBBitmapWidth] = bmWidth;
	objBuffer[bmFill + GBBitmapHeight] = bmHeight;
	objBuffer[bmFill + GBBitmapDepth] = bmDepth;
	objBuffer[bmFill + GBBitmapRaster] = bmRaster;
	objBuffer[bmFill + GBBitmapSize] = bmBitsSize;
	objBuffer[bmFill + GBTileFlag] = tileFlag;
	objBuffer[bmFill + GEObjectIndex] = xIndex;
	loadFillOrientationfromalongnormalwidthheight(bmFill, point1, point2, point3, bmWidth, bmHeight);
	return bmFill;
}


/*	Note: Assumes that the contents of formArray has been checked before */

static int * loadBitsFrom(sqInt bmFill) {
    sqInt bitsLen;
    sqInt bitsOop;
    sqInt formOop;
    sqInt xIndex;

	xIndex = objBuffer[bmFill + GEObjectIndex];
	if (xIndex > (interpreterProxy->slotSizeOf(formArray))) {
		return null;
	}
	formOop = interpreterProxy->fetchPointerofObject(xIndex, formArray);
	bitsOop = interpreterProxy->fetchPointerofObject(0, formOop);
	bitsLen = interpreterProxy->slotSizeOf(bitsOop);
	if (!(bitsLen == (objBuffer[bmFill + GBBitmapSize]))) {
		return null;
	}
	return interpreterProxy->firstIndexableField(bitsOop);
}


/*	Load a 2x3 transformation matrix from the given oop.
	Return true if the matrix is not nil, false otherwise */

static sqInt loadColorTransformFrom(sqInt transformOop) {
    sqInt okay;
    float *transform;

	transform = ((float *) (workBuffer + GWColorTransform));
	workBuffer[GWHasColorTransform] = 0;
	okay = loadTransformFromintolength(transformOop, transform, 8);
	if (!(okay)) {
		return 0;
	}
	workBuffer[GWHasColorTransform] = 1;
	transform[1] = ((transform[1]) * (((float) 256.0)));
	transform[3] = ((transform[3]) * (((float) 256.0)));
	transform[5] = ((transform[5]) * (((float) 256.0)));
	transform[7] = ((transform[7]) * (((float) 256.0)));
	return okay;
}


/*	Load a compressed shape into the engine.
		WARNING: THIS METHOD NEEDS THE FULL FRAME SIZE!!!!
	 */

static sqInt loadCompressedShapesegmentsleftFillsrightFillslineWidthslineFillsfillIndexListpointShort(int *points, sqInt nSegments, int *leftFills, int *rightFills, int *lineWidths, int *lineFills, int *fillIndexList, sqInt pointsShort) {
    sqInt i;
    sqInt leftLength;
    sqInt leftRun;
    sqInt leftValue;
    sqInt lineFillLength;
    sqInt lineFillRun;
    sqInt lineFillValue;
    sqInt rightLength;
    sqInt rightRun;
    sqInt rightValue;
    sqInt widthLength;
    sqInt widthRun;
    sqInt widthValue;
    sqInt index;
    sqInt segs;
    sqInt x0;
    sqInt x1;
    sqInt x2;
    sqInt y0;
    sqInt y1;
    sqInt y2;

	if (nSegments == 0) {
		return 0;
	}
	leftRun = (rightRun = (widthRun = (lineFillRun = -1)));
	leftLength = (rightLength = (widthLength = (lineFillLength = 1)));
	leftValue = (rightValue = (widthValue = (lineFillValue = 0)));
	for (i = 1; i <= nSegments; i += 1) {
		if (((leftLength -= 1)) <= 0) {

			/* Decrement current run length and load new stuff */

			leftRun += 1;
			leftLength = ((usqInt) ((((int *) leftFills))[leftRun]) >> 16);
			leftValue = ((((int *) leftFills))[leftRun]) & 65535;
			if (!(leftValue == 0)) {
				leftValue = fillIndexList[leftValue - 1];
				leftValue = transformColor(leftValue);
				if (engineStopped) {
					return null;
				}
			}
		}
		if (((rightLength -= 1)) <= 0) {
			rightRun += 1;
			rightLength = ((usqInt) ((((int *) rightFills))[rightRun]) >> 16);
			rightValue = ((((int *) rightFills))[rightRun]) & 65535;
			if (!(rightValue == 0)) {
				rightValue = fillIndexList[rightValue - 1];
				rightValue = transformColor(rightValue);
			}
		}
		if (((widthLength -= 1)) <= 0) {
			widthRun += 1;
			widthLength = ((usqInt) ((((int *) lineWidths))[widthRun]) >> 16);
			widthValue = ((((int *) lineWidths))[widthRun]) & 65535;
			if (!(widthValue == 0)) {
				widthValue = transformWidth(widthValue);
			}
		}
		if (((lineFillLength -= 1)) <= 0) {
			lineFillRun += 1;
			lineFillLength = ((usqInt) ((((int *) lineFills))[lineFillRun]) >> 16);
			lineFillValue = ((((int *) lineFills))[lineFillRun]) & 65535;
			if (!(lineFillValue == 0)) {
				lineFillValue = fillIndexList[lineFillValue - 1];
			}
		}
		/* begin loadCompressedSegment:from:short:leftFill:rightFill:lineWidth:lineColor: */
		if ((leftValue == rightValue) && ((widthValue == 0) || (lineFillValue == 0))) {
			goto l1;
		}
		index = (i - 1) * 6;
		if (pointsShort) {
			x0 = (((short *) points))[index + 0];
			y0 = (((short *) points))[index + 1];
			x1 = (((short *) points))[index + 2];
			y1 = (((short *) points))[index + 3];
			x2 = (((short *) points))[index + 4];
			y2 = (((short *) points))[index + 5];
		} else {
			x0 = (((int *) points))[index + 0];
			y0 = (((int *) points))[index + 1];
			x1 = (((int *) points))[index + 2];
			y1 = (((int *) points))[index + 3];
			x2 = (((int *) points))[index + 4];
			y2 = (((int *) points))[index + 5];
		}
		if (((x0 == x1) && (y0 == y1)) || ((x1 == x2) && (y1 == y2))) {
			if ((x0 == x2) && (y0 == y2)) {
				goto l1;
			}
			(((int *) (workBuffer + GWPoint1)))[0] = x0;
			(((int *) (workBuffer + GWPoint1)))[1] = y0;
			(((int *) (workBuffer + GWPoint2)))[0] = x2;
			(((int *) (workBuffer + GWPoint2)))[1] = y2;
			/* begin transformPoints: */
			if (2 > 0) {
				transformPoint(((int *) (workBuffer + GWPoint1)));
			}
			if (2 > 1) {
				transformPoint(((int *) (workBuffer + GWPoint2)));
			}
			if (2 > 2) {
				transformPoint(((int *) (workBuffer + GWPoint3)));
			}
			if (2 > 3) {
				transformPoint(((int *) (workBuffer + GWPoint4)));
			}
			loadWideLinefromtolineFillleftFillrightFill(widthValue, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), lineFillValue, leftValue, rightValue);
			goto l1;
		}
		(((int *) (workBuffer + GWPoint1)))[0] = x0;
		(((int *) (workBuffer + GWPoint1)))[1] = y0;
		(((int *) (workBuffer + GWPoint2)))[0] = x1;
		(((int *) (workBuffer + GWPoint2)))[1] = y1;
		(((int *) (workBuffer + GWPoint3)))[0] = x2;
		(((int *) (workBuffer + GWPoint3)))[1] = y2;
		/* begin transformPoints: */
		if (3 > 0) {
			transformPoint(((int *) (workBuffer + GWPoint1)));
		}
		if (3 > 1) {
			transformPoint(((int *) (workBuffer + GWPoint2)));
		}
		if (3 > 2) {
			transformPoint(((int *) (workBuffer + GWPoint3)));
		}
		if (3 > 3) {
			transformPoint(((int *) (workBuffer + GWPoint4)));
		}
		segs = loadAndSubdivideBezierFromviatoisWide(((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), ((int *) (workBuffer + GWPoint3)), (widthValue != 0) && (lineFillValue != 0));
		if (engineStopped) {
			goto l1;
		}
		loadWideBezierlineFillleftFillrightFilln(widthValue, lineFillValue, leftValue, rightValue, segs);
	l1:	/* end loadCompressedSegment:from:short:leftFill:rightFill:lineWidth:lineColor: */;
		if (engineStopped) {
			return null;
		}
	}
}

static sqInt loadEdgeStateFrom(sqInt edgeOop) {
    sqInt edge;
    sqInt value;
    sqInt value1;
    sqInt value2;
    sqInt value3;

	edge = workBuffer[GWLastExportedEdge];
	if ((interpreterProxy->slotSizeOf(edgeOop)) < ETBalloonEdgeDataSize) {
		return interpreterProxy->primitiveFail();
	}
	/* begin edgeXValueOf:put: */
	value = interpreterProxy->fetchIntegerofObject(ETXValueIndex, edgeOop);
	objBuffer[edge + GEXValue] = value;
	/* begin edgeYValueOf:put: */
	value1 = interpreterProxy->fetchIntegerofObject(ETYValueIndex, edgeOop);
	objBuffer[edge + GEYValue] = value1;
	/* begin edgeZValueOf:put: */
	value2 = interpreterProxy->fetchIntegerofObject(ETZValueIndex, edgeOop);
	objBuffer[edge + GEZValue] = value2;
	/* begin edgeNumLinesOf:put: */
	value3 = interpreterProxy->fetchIntegerofObject(ETLinesIndex, edgeOop);
	objBuffer[edge + GENumLines] = value3;
	return edge;
}


/*	Load a 2x3 transformation matrix from the given oop.
	Return true if the matrix is not nil, false otherwise */

static sqInt loadEdgeTransformFrom(sqInt transformOop) {
    sqInt okay;
    float *transform;

	workBuffer[GWHasEdgeTransform] = 0;
	transform = ((float *) (workBuffer + GWEdgeTransform));
	okay = loadTransformFromintolength(transformOop, transform, 6);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(okay)) {
		return 0;
	}
	workBuffer[GWHasEdgeTransform] = 1;
	transform[2] = (((float) ((transform[2]) + (((double) (workBuffer[GWDestOffsetX]) )))));
	transform[5] = (((float) ((transform[5]) + (((double) (workBuffer[GWDestOffsetY]) )))));
	return 1;
}


/*	Transform the points */

static sqInt loadFillOrientationfromalongnormalwidthheight(sqInt fill, int *point1, int *point2, int *point3, sqInt fillWidth, sqInt fillHeight) {
    sqInt dirX;
    sqInt dirY;
    sqInt dsLength2;
    sqInt dsX;
    sqInt dsY;
    sqInt dtLength2;
    sqInt dtX;
    sqInt dtY;
    sqInt nrmX;
    sqInt nrmY;

	point2[0] = ((point2[0]) + (point1[0]));
	point2[1] = ((point2[1]) + (point1[1]));
	point3[0] = ((point3[0]) + (point1[0]));
	point3[1] = ((point3[1]) + (point1[1]));
	transformPoint(point1);
	transformPoint(point2);
	transformPoint(point3);
	dirX = (point2[0]) - (point1[0]);
	dirY = (point2[1]) - (point1[1]);
	nrmX = (point3[0]) - (point1[0]);

	/* Compute the scale from direction/normal into ramp size */

	nrmY = (point3[1]) - (point1[1]);
	dsLength2 = (dirX * dirX) + (dirY * dirY);
	if (dsLength2 > 0) {
		dsX = ((sqInt)((((((double) dirX )) * (((double) fillWidth ))) * 65536.0) / (((double) dsLength2 ))));
		dsY = ((sqInt)((((((double) dirY )) * (((double) fillWidth ))) * 65536.0) / (((double) dsLength2 ))));
	} else {
		dsX = 0;
		dsY = 0;
	}
	dtLength2 = (nrmX * nrmX) + (nrmY * nrmY);
	if (dtLength2 > 0) {
		dtX = ((sqInt)((((((double) nrmX )) * (((double) fillHeight ))) * 65536.0) / (((double) dtLength2 ))));
		dtY = ((sqInt)((((((double) nrmY )) * (((double) fillHeight ))) * 65536.0) / (((double) dtLength2 ))));
	} else {
		dtX = 0;
		dtY = 0;
	}
	objBuffer[fill + GFOriginX] = (point1[0]);
	objBuffer[fill + GFOriginY] = (point1[1]);
	objBuffer[fill + GFDirectionX] = dsX;
	objBuffer[fill + GFDirectionY] = dsY;
	objBuffer[fill + GFNormalX] = dtX;
	objBuffer[fill + GFNormalY] = dtY;
}


/*	Check all the forms from arrayOop. */

static sqInt loadFormsFrom(sqInt arrayOop) {
    sqInt bmBits;
    sqInt bmBitsSize;
    sqInt bmDepth;
    sqInt bmHeight;
    sqInt bmRaster;
    sqInt bmWidth;
    sqInt formOop;
    sqInt i;
    sqInt ppw;

	if (!(interpreterProxy->isArray(arrayOop))) {
		return 0;
	}
	formArray = arrayOop;
	for (i = 0; i <= ((interpreterProxy->slotSizeOf(formArray)) - 1); i += 1) {
		formOop = interpreterProxy->fetchPointerofObject(i, formArray);
		if ((formOop & 1)) {
			return 0;
		}
		if (!(interpreterProxy->isPointers(formOop))) {
			return 0;
		}
		if ((interpreterProxy->slotSizeOf(formOop)) < 5) {
			return 0;
		}
		bmBits = interpreterProxy->fetchPointerofObject(0, formOop);
		if (!((interpreterProxy->fetchClassOf(bmBits)) == (interpreterProxy->classBitmap()))) {
			return 0;
		}
		bmBitsSize = interpreterProxy->slotSizeOf(bmBits);
		bmWidth = interpreterProxy->fetchIntegerofObject(1, formOop);
		bmHeight = interpreterProxy->fetchIntegerofObject(2, formOop);
		bmDepth = interpreterProxy->fetchIntegerofObject(3, formOop);
		if (interpreterProxy->failed()) {
			return 0;
		}
		if (!((bmWidth >= 0) && (bmHeight >= 0))) {
			return 0;
		}
		ppw = 32 / bmDepth;
		bmRaster = (bmWidth + (ppw - 1)) / ppw;
		if (!(bmBitsSize == (bmRaster * bmHeight))) {
			return 0;
		}
	}
	return 1;
}


/*	Load the gradient fill as defined by the color ramp. */

static sqInt loadGradientFillfromalongnormalisRadial(sqInt rampOop, int *point1, int *point2, int *point3, sqInt isRadial) {
    sqInt fill;
    sqInt rampWidth;

	if (!((interpreterProxy->fetchClassOf(rampOop)) == (interpreterProxy->classBitmap()))) {
		return interpreterProxy->primitiveFail();
	}
	rampWidth = interpreterProxy->slotSizeOf(rampOop);
	fill = allocateGradientFillrampWidthisRadial(interpreterProxy->firstIndexableField(rampOop), rampWidth, isRadial);
	if (engineStopped) {
		return null;
	}
	loadFillOrientationfromalongnormalwidthheight(fill, point1, point2, point3, rampWidth, rampWidth);
	return fill;
}


/*	Load the line defined by point1 and point2. */

static sqInt loadLinefromtooffsetleftFillrightFill(sqInt line, int *point1, int *point2, sqInt yOffset, sqInt leftFill, sqInt rightFill) {
    int *p1;
    int *p2;
    sqInt yDir;

	if ((point1[1]) <= (point2[1])) {
		p1 = point1;
		p2 = point2;
		yDir = 1;
	} else {
		p1 = point2;
		p2 = point1;
		yDir = -1;
	}
	objBuffer[line + GEXValue] = (p1[0]);
	objBuffer[line + GEYValue] = ((p1[1]) - yOffset);
	objBuffer[line + GEZValue] = (workBuffer[GWCurrentZ]);
	objBuffer[line + GEFillIndexLeft] = leftFill;
	objBuffer[line + GEFillIndexRight] = rightFill;
	objBuffer[line + GLEndX] = (p2[0]);
	objBuffer[line + GLEndY] = ((p2[1]) - yOffset);
	objBuffer[line + GLYDirection] = yDir;
}


/*	Load a rectangular oval currently defined by point1/point2 */

static sqInt loadOvallineFillleftFillrightFill(sqInt lineWidth, sqInt lineFill, sqInt leftFill, sqInt rightFill) {
    sqInt cx;
    sqInt cy;
    sqInt h;
    sqInt i;
    sqInt nSegments;
    sqInt w;

	w = ((sqInt) (((((int *) (workBuffer + GWPoint2)))[0]) - ((((int *) (workBuffer + GWPoint1)))[0])) >> 1);
	h = ((sqInt) (((((int *) (workBuffer + GWPoint2)))[1]) - ((((int *) (workBuffer + GWPoint1)))[1])) >> 1);
	cx = ((sqInt) (((((int *) (workBuffer + GWPoint2)))[0]) + ((((int *) (workBuffer + GWPoint1)))[0])) >> 1);
	cy = ((sqInt) (((((int *) (workBuffer + GWPoint2)))[1]) + ((((int *) (workBuffer + GWPoint1)))[1])) >> 1);
	for (i = 0; i <= 15; i += 1) {
		loadOvalSegmentwhcxcy(i, w, h, cx, cy);
		/* begin transformPoints: */
		if (3 > 0) {
			transformPoint(((int *) (workBuffer + GWPoint1)));
		}
		if (3 > 1) {
			transformPoint(((int *) (workBuffer + GWPoint2)));
		}
		if (3 > 2) {
			transformPoint(((int *) (workBuffer + GWPoint3)));
		}
		if (3 > 3) {
			transformPoint(((int *) (workBuffer + GWPoint4)));
		}
		nSegments = loadAndSubdivideBezierFromviatoisWide(((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), ((int *) (workBuffer + GWPoint3)), (lineWidth != 0) && (lineFill != 0));
		if (engineStopped) {
			return null;
		}
		loadWideBezierlineFillleftFillrightFilln(lineWidth, lineFill, leftFill, rightFill, nSegments);
		if (engineStopped) {
			return null;
		}
	}
}

static sqInt loadOvalSegmentwhcxcy(sqInt seg, sqInt w, sqInt h, sqInt cx, sqInt cy) {
    sqInt x0;
    sqInt x1;
    sqInt x2;
    sqInt y0;
    sqInt y1;
    sqInt y2;


	/* Load start point of segment */

	x0 = ((sqInt)((((circleCosTable())[(seg * 2) + 0]) * (((double) w ))) + cx));
	y0 = ((sqInt)((((circleSinTable())[(seg * 2) + 0]) * (((double) h ))) + cy));
	(((int *) (workBuffer + GWPoint1)))[0] = x0;
	(((int *) (workBuffer + GWPoint1)))[1] = y0;
	x2 = ((sqInt)((((circleCosTable())[(seg * 2) + 2]) * (((double) w ))) + cx));
	y2 = ((sqInt)((((circleSinTable())[(seg * 2) + 2]) * (((double) h ))) + cy));
	(((int *) (workBuffer + GWPoint3)))[0] = x2;
	(((int *) (workBuffer + GWPoint3)))[1] = y2;
	x1 = ((sqInt)((((circleCosTable())[(seg * 2) + 1]) * (((double) w ))) + cx));

	/* NOTE: The intermediate point is the point ON the curve
	and not yet the control point (which is OFF the curve) */

	y1 = ((sqInt)((((circleSinTable())[(seg * 2) + 1]) * (((double) h ))) + cy));
	x1 = (x1 * 2) - (((sqInt) (x0 + x2) >> 1));
	y1 = (y1 * 2) - (((sqInt) (y0 + y2) >> 1));
	(((int *) (workBuffer + GWPoint2)))[0] = x1;
	(((int *) (workBuffer + GWPoint2)))[1] = y1;
}


/*	Load the contents of pointOop into pointArray */

static sqInt loadPointfrom(int *pointArray, sqInt pointOop) {
    sqInt value;

	if (!((interpreterProxy->fetchClassOf(pointOop)) == (interpreterProxy->classPoint()))) {
		return interpreterProxy->primitiveFail();
	}
	value = interpreterProxy->fetchPointerofObject(0, pointOop);
	if (!(((value & 1)) || (interpreterProxy->isFloatObject(value)))) {
		return interpreterProxy->primitiveFail();
	}
	if ((value & 1)) {
		pointArray[0] = ((value >> 1));
	} else {
		pointArray[0] = (((sqInt)(interpreterProxy->floatValueOf(value))));
	}
	value = interpreterProxy->fetchPointerofObject(1, pointOop);
	if (!(((value & 1)) || (interpreterProxy->isFloatObject(value)))) {
		return interpreterProxy->primitiveFail();
	}
	if ((value & 1)) {
		pointArray[1] = ((value >> 1));
	} else {
		pointArray[1] = (((sqInt)(interpreterProxy->floatValueOf(value))));
	}
}

static sqInt loadPolygonnPointsfilllineWidthlineFillpointsShort(int *points, sqInt nPoints, sqInt fillIndex, sqInt lineWidth, sqInt lineFill, sqInt isShort) {
    sqInt i;
    sqInt x0;
    sqInt x1;
    sqInt y0;
    sqInt y1;

	if (isShort) {
		x0 = (((short *) points))[0];
		y0 = (((short *) points))[1];
	} else {
		x0 = (((int *) points))[0];
		y0 = (((int *) points))[1];
	}
	for (i = 1; i <= (nPoints - 1); i += 1) {
		if (isShort) {
			x1 = (((short *) points))[i * 2];
			y1 = (((short *) points))[(i * 2) + 1];
		} else {
			x1 = (((int *) points))[i * 2];
			y1 = (((int *) points))[(i * 2) + 1];
		}
		(((int *) (workBuffer + GWPoint1)))[0] = x0;
		(((int *) (workBuffer + GWPoint1)))[1] = y0;
		(((int *) (workBuffer + GWPoint2)))[0] = x1;
		(((int *) (workBuffer + GWPoint2)))[1] = y1;
		/* begin transformPoints: */
		if (2 > 0) {
			transformPoint(((int *) (workBuffer + GWPoint1)));
		}
		if (2 > 1) {
			transformPoint(((int *) (workBuffer + GWPoint2)));
		}
		if (2 > 2) {
			transformPoint(((int *) (workBuffer + GWPoint3)));
		}
		if (2 > 3) {
			transformPoint(((int *) (workBuffer + GWPoint4)));
		}
		loadWideLinefromtolineFillleftFillrightFill(lineWidth, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), lineFill, fillIndex, 0);
		if (engineStopped) {
			return null;
		}
		x0 = x1;
		y0 = y1;
	}
}


/*	Load the entire state from the interpreter for the rendering primitives */

static sqInt loadRenderingState(void) {
    sqInt edgeOop;
    sqInt fillOop;
    sqInt state;

	if (!((interpreterProxy->methodArgumentCount()) == 2)) {
		return interpreterProxy->primitiveFail();
	}
	fillOop = interpreterProxy->stackObjectValue(0);
	edgeOop = interpreterProxy->stackObjectValue(1);
	engine = interpreterProxy->stackObjectValue(2);
	if (interpreterProxy->failed()) {
		return 0;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return 0;
	}
	if (!(loadSpanBufferFrom(interpreterProxy->fetchPointerofObject(BESpanIndex, engine)))) {
		return 0;
	}
	if (!(loadBitBltFrom(interpreterProxy->fetchPointerofObject(BEBitBltIndex, engine)))) {
		return 0;
	}
	if (!(loadFormsFrom(interpreterProxy->fetchPointerofObject(BEFormsIndex, engine)))) {
		return 0;
	}
	if ((interpreterProxy->slotSizeOf(edgeOop)) < ETBalloonEdgeDataSize) {
		return 0;
	}
	if ((interpreterProxy->slotSizeOf(fillOop)) < FTBalloonFillDataSize) {
		return 0;
	}
	state = workBuffer[GWState];
	if ((state == GEStateWaitingForEdge) || ((state == GEStateWaitingForFill) || (state == GEStateWaitingChange))) {
		return 0;
	}
	return 1;
}

static sqInt loadShapenSegmentsfilllineWidthlineFillpointsShort(int *points, sqInt nSegments, sqInt fillIndex, sqInt lineWidth, sqInt lineFill, sqInt pointsShort) {
    sqInt i;
    sqInt index;
    sqInt segs;
    sqInt x0;
    sqInt x1;
    sqInt x2;
    sqInt y0;
    sqInt y1;
    sqInt y2;

	for (i = 1; i <= nSegments; i += 1) {
		/* begin loadCompressedSegment:from:short:leftFill:rightFill:lineWidth:lineColor: */
		if ((fillIndex == 0) && ((lineWidth == 0) || (lineFill == 0))) {
			goto l1;
		}
		index = (i - 1) * 6;
		if (pointsShort) {
			x0 = (((short *) points))[index + 0];
			y0 = (((short *) points))[index + 1];
			x1 = (((short *) points))[index + 2];
			y1 = (((short *) points))[index + 3];
			x2 = (((short *) points))[index + 4];
			y2 = (((short *) points))[index + 5];
		} else {
			x0 = (((int *) points))[index + 0];
			y0 = (((int *) points))[index + 1];
			x1 = (((int *) points))[index + 2];
			y1 = (((int *) points))[index + 3];
			x2 = (((int *) points))[index + 4];
			y2 = (((int *) points))[index + 5];
		}
		if (((x0 == x1) && (y0 == y1)) || ((x1 == x2) && (y1 == y2))) {
			if ((x0 == x2) && (y0 == y2)) {
				goto l1;
			}
			(((int *) (workBuffer + GWPoint1)))[0] = x0;
			(((int *) (workBuffer + GWPoint1)))[1] = y0;
			(((int *) (workBuffer + GWPoint2)))[0] = x2;
			(((int *) (workBuffer + GWPoint2)))[1] = y2;
			/* begin transformPoints: */
			if (2 > 0) {
				transformPoint(((int *) (workBuffer + GWPoint1)));
			}
			if (2 > 1) {
				transformPoint(((int *) (workBuffer + GWPoint2)));
			}
			if (2 > 2) {
				transformPoint(((int *) (workBuffer + GWPoint3)));
			}
			if (2 > 3) {
				transformPoint(((int *) (workBuffer + GWPoint4)));
			}
			loadWideLinefromtolineFillleftFillrightFill(lineWidth, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), lineFill, fillIndex, 0);
			goto l1;
		}
		(((int *) (workBuffer + GWPoint1)))[0] = x0;
		(((int *) (workBuffer + GWPoint1)))[1] = y0;
		(((int *) (workBuffer + GWPoint2)))[0] = x1;
		(((int *) (workBuffer + GWPoint2)))[1] = y1;
		(((int *) (workBuffer + GWPoint3)))[0] = x2;
		(((int *) (workBuffer + GWPoint3)))[1] = y2;
		/* begin transformPoints: */
		if (3 > 0) {
			transformPoint(((int *) (workBuffer + GWPoint1)));
		}
		if (3 > 1) {
			transformPoint(((int *) (workBuffer + GWPoint2)));
		}
		if (3 > 2) {
			transformPoint(((int *) (workBuffer + GWPoint3)));
		}
		if (3 > 3) {
			transformPoint(((int *) (workBuffer + GWPoint4)));
		}
		segs = loadAndSubdivideBezierFromviatoisWide(((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), ((int *) (workBuffer + GWPoint3)), (lineWidth != 0) && (lineFill != 0));
		if (engineStopped) {
			goto l1;
		}
		loadWideBezierlineFillleftFillrightFilln(lineWidth, lineFill, fillIndex, 0, segs);
	l1:	/* end loadCompressedSegment:from:short:leftFill:rightFill:lineWidth:lineColor: */;
		if (engineStopped) {
			return null;
		}
	}
}


/*	Load the span buffer from the given oop. */

static sqInt loadSpanBufferFrom(sqInt spanOop) {
    sqInt value;

	if (!((interpreterProxy->fetchClassOf(spanOop)) == (interpreterProxy->classBitmap()))) {
		return 0;
	}

	/* Leave last entry unused to avoid complications */

	spanBuffer = interpreterProxy->firstIndexableField(spanOop);
	/* begin spanSizePut: */
	value = (interpreterProxy->slotSizeOf(spanOop)) - 1;
	workBuffer[GWSpanSize] = value;
	return 1;
}


/*	Load a transformation from transformOop into the float array
	defined by destPtr. The transformation is assumed to be either
	an array or a FloatArray of length n. */

static sqInt loadTransformFromintolength(sqInt transformOop, float *destPtr, sqInt n) {
	if (transformOop == (interpreterProxy->nilObject())) {
		return 0;
	}
	if ((transformOop & 1)) {
		return interpreterProxy->primitiveFail();
	}
	if (!((interpreterProxy->slotSizeOf(transformOop)) == n)) {
		return interpreterProxy->primitiveFail();
	}
	if (interpreterProxy->isWords(transformOop)) {
		loadWordTransformFromintolength(transformOop, destPtr, n);
	} else {
		loadArrayTransformFromintolength(transformOop, destPtr, n);
	}
	return 1;
}


/*	Load the (possibly wide) bezier from the segments currently on the bezier stack. */

static sqInt loadWideBezierlineFillleftFillrightFilln(sqInt lineWidth, sqInt lineFill, sqInt leftFill, sqInt rightFill, sqInt nSegments) {
    sqInt bezier;
    sqInt index;
    sqInt offset;
    sqInt wide;
    sqInt bezier1;
    sqInt bezier2;

	if ((lineWidth == 0) || (lineFill == 0)) {
		wide = 0;
		offset = 0;
	} else {
		wide = 1;
		offset = ((sqInt) lineWidth >> 1);
	}
	index = nSegments * 6;
	while (index > 0) {
		if (wide) {
			/* begin allocateWideBezier */
			if (!(allocateObjEntry(GBWideSize))) {
				bezier = 0;
				goto l1;
			}
			bezier1 = objUsed;
			objUsed = bezier1 + GBWideSize;
			objBuffer[bezier1 + GEObjectType] = GEPrimitiveWideBezier;
			objBuffer[bezier1 + GEObjectIndex] = 0;
			objBuffer[bezier1 + GEObjectLength] = GBWideSize;
			bezier = bezier1;
		l1:	/* end allocateWideBezier */;
		} else {
			/* begin allocateBezier */
			if (!(allocateObjEntry(GBBaseSize))) {
				bezier = 0;
				goto l2;
			}
			bezier2 = objUsed;
			objUsed = bezier2 + GBBaseSize;
			objBuffer[bezier2 + GEObjectType] = GEPrimitiveBezier;
			objBuffer[bezier2 + GEObjectIndex] = 0;
			objBuffer[bezier2 + GEObjectLength] = GBBaseSize;
			bezier = bezier2;
		l2:	/* end allocateBezier */;
		}
		if (engineStopped) {
			return 0;
		}
		loadBeziersegmentleftFillrightFilloffset(bezier, index, leftFill, rightFill, offset);
		if (wide) {
			objBuffer[bezier + GBWideFill] = lineFill;
			objBuffer[bezier + GBWideWidth] = lineWidth;
			objBuffer[bezier + GBWideExtent] = lineWidth;
		}
		index -= 6;
	}
	/* begin wbStackClear */
	workBuffer[GWBufferTop] = (workBuffer[GWSize]);
}


/*	Load a (possibly wide) line defined by the points p1 and p2 */

static sqInt loadWideLinefromtolineFillleftFillrightFill(sqInt lineWidth, int *p1, int *p2, sqInt lineFill, sqInt leftFill, sqInt rightFill) {
    sqInt line;
    sqInt offset;
    sqInt line1;
    sqInt line2;

	if ((lineWidth == 0) || (lineFill == 0)) {
		/* begin allocateLine */
		if (!(allocateObjEntry(GLBaseSize))) {
			line = 0;
			goto l1;
		}
		line1 = objUsed;
		objUsed = line1 + GLBaseSize;
		objBuffer[line1 + GEObjectType] = GEPrimitiveLine;
		objBuffer[line1 + GEObjectIndex] = 0;
		objBuffer[line1 + GEObjectLength] = GLBaseSize;
		line = line1;
	l1:	/* end allocateLine */;
		offset = 0;
	} else {
		/* begin allocateWideLine */
		if (!(allocateObjEntry(GLWideSize))) {
			line = 0;
			goto l2;
		}
		line2 = objUsed;
		objUsed = line2 + GLWideSize;
		objBuffer[line2 + GEObjectType] = GEPrimitiveWideLine;
		objBuffer[line2 + GEObjectIndex] = 0;
		objBuffer[line2 + GEObjectLength] = GLWideSize;
		line = line2;
	l2:	/* end allocateWideLine */;
		offset = ((sqInt) lineWidth >> 1);
	}
	if (engineStopped) {
		return 0;
	}
	loadLinefromtooffsetleftFillrightFill(line, p1, p2, offset, leftFill, rightFill);
	if ((((objBuffer[line + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveWide) != 0) {
		objBuffer[line + GLWideFill] = lineFill;
		objBuffer[line + GLWideWidth] = lineWidth;
		objBuffer[line + GLWideExtent] = lineWidth;
	}
}


/*	Load a float array transformation from the given oop */

static sqInt loadWordTransformFromintolength(sqInt transformOop, float *destPtr, sqInt n) {
    sqInt i;
    float *srcPtr;

	srcPtr = ((float *) (interpreterProxy->firstIndexableField(transformOop)));
	for (i = 0; i <= (n - 1); i += 1) {
		destPtr[i] = (srcPtr[i]);
	}
}


/*	Load the working buffer from the given oop */

static sqInt loadWorkBufferFrom(sqInt wbOop) {
	if ((wbOop & 1)) {
		return 0;
	}
	if (!(interpreterProxy->isWords(wbOop))) {
		return 0;
	}
	if ((interpreterProxy->slotSizeOf(wbOop)) < GWMinimalSize) {
		return 0;
	}
	/* begin workBufferPut: */
	workBuffer = interpreterProxy->firstIndexableField(wbOop);
	if (!((workBuffer[GWMagicIndex]) == GWMagicNumber)) {
		return 0;
	}
	if (!((workBuffer[GWSize]) == (interpreterProxy->slotSizeOf(wbOop)))) {
		return 0;
	}
	if (!((workBuffer[GWObjStart]) == GWHeaderSize)) {
		return 0;
	}
	objBuffer = workBuffer + (workBuffer[GWObjStart]);
	getBuffer = objBuffer + (workBuffer[GWObjUsed]);

	/* Make sure we don't exceed the work buffer */

	aetBuffer = getBuffer + (workBuffer[GWGETUsed]);
	if ((((GWHeaderSize + (workBuffer[GWObjUsed])) + (workBuffer[GWGETUsed])) + (workBuffer[GWAETUsed])) > (workBuffer[GWSize])) {
		return 0;
	}
	return 1;
}


/*	The module with the given name was just unloaded.
	Make sure we have no dangling references. */

EXPORT(sqInt) moduleUnloaded(char *aModuleName) {
	if ((strcmp(aModuleName, bbPluginName)) == 0) {

		/* BitBlt just shut down. How nasty. */

		loadBBFn = 0;
		copyBitsFn = 0;
	}
}


/*	The entry at index is not in the right position of the AET. 
	Move it to the left until the position is okay. */

static sqInt moveAETEntryFromedgex(sqInt index, sqInt edge, sqInt xValue) {
    sqInt newIndex;

	newIndex = index;
	while ((newIndex > 0) && ((objBuffer[(aetBuffer[newIndex - 1]) + GEXValue]) > xValue)) {
		aetBuffer[newIndex] = (aetBuffer[newIndex - 1]);
		newIndex -= 1;
	}
	aetBuffer[newIndex] = edge;
}


/*	Check if we have n slots available */

static sqInt needAvailableSpace(sqInt nSlots) {
	if (((((GWHeaderSize + objUsed) + (workBuffer[GWGETUsed])) + (workBuffer[GWAETUsed])) + nSlots) > (workBuffer[GWBufferTop])) {
		/* begin stopBecauseOf: */
		workBuffer[GWStopReason] = GErrorNoMoreSpace;
		engineStopped = 1;
		return 0;
	}
	return 1;
}


/*	We have just blitted a scan line to the screen.
	Do whatever seems to be a good idea here. */
/*	Note: In the future we may check the time needed for this scan line and interrupt processing to give the Smalltalk code a chance to run at a certain time. */
/*	Check if there is any more work to do. */

static sqInt postDisplayAction(void) {
	if (((workBuffer[GWGETStart]) >= (workBuffer[GWGETUsed])) && ((workBuffer[GWAETUsed]) == 0)) {
		workBuffer[GWState] = GEStateCompleted;
	}
	if ((workBuffer[GWCurrentY]) >= (workBuffer[GWFillMaxY])) {
		workBuffer[GWState] = GEStateCompleted;
	}
}

EXPORT(sqInt) primitiveAbortProcessing(void) {
	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	workBuffer[GWState] = GEStateCompleted;
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
}


/*	Note: No need to load either bitBlt or spanBuffer */

EXPORT(sqInt) primitiveAddActiveEdgeEntry(void) {
    sqInt edge;
    sqInt edgeOop;
    sqInt value;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	edgeOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateWaitingForEdge))) {
		return interpreterProxy->primitiveFail();
	}
	edge = loadEdgeStateFrom(edgeOop);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(needAvailableSpace(1))) {
		return interpreterProxy->primitiveFail();
	}
	if ((objBuffer[edge + GENumLines]) > 0) {
		insertEdgeIntoAET(edge);
	}
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	workBuffer[GWState] = GEStateAddingFromGET;
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(1);
	if (doProfileStats) {
		workBuffer[GWCountAddAETEntry] = ((workBuffer[GWCountAddAETEntry]) + 1);
		/* begin incrementStat:by: */
		value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
		workBuffer[GWTimeAddAETEntry] = ((workBuffer[GWTimeAddAETEntry]) + value);
	}
}

EXPORT(sqInt) primitiveAddBezier(void) {
    sqInt endOop;
    sqInt leftFill;
    sqInt nSegments;
    sqInt rightFill;
    sqInt startOop;
    sqInt viaOop;

	if (!((interpreterProxy->methodArgumentCount()) == 5)) {
		return interpreterProxy->primitiveFail();
	}
	rightFill = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(0));
	leftFill = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(1));
	viaOop = interpreterProxy->stackObjectValue(2);
	endOop = interpreterProxy->stackObjectValue(3);
	startOop = interpreterProxy->stackObjectValue(4);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(5), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((isFillOkay(leftFill)) && (isFillOkay(rightFill)))) {
		return interpreterProxy->primitiveFail();
	}
	if ((leftFill == rightFill) && 0) {
		return interpreterProxy->pop(6);
	}
	loadPointfrom(((int *) (workBuffer + GWPoint1)), startOop);
	loadPointfrom(((int *) (workBuffer + GWPoint2)), viaOop);
	loadPointfrom(((int *) (workBuffer + GWPoint3)), endOop);
	if (interpreterProxy->failed()) {
		return 0;
	}
	/* begin transformPoints: */
	if (3 > 0) {
		transformPoint(((int *) (workBuffer + GWPoint1)));
	}
	if (3 > 1) {
		transformPoint(((int *) (workBuffer + GWPoint2)));
	}
	if (3 > 2) {
		transformPoint(((int *) (workBuffer + GWPoint3)));
	}
	if (3 > 3) {
		transformPoint(((int *) (workBuffer + GWPoint4)));
	}
	nSegments = loadAndSubdivideBezierFromviatoisWide(((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), ((int *) (workBuffer + GWPoint3)), 0);
	/* begin needAvailableSpace: */
	if (((((GWHeaderSize + objUsed) + (workBuffer[GWGETUsed])) + (workBuffer[GWAETUsed])) + (nSegments * GBBaseSize)) > (workBuffer[GWBufferTop])) {
		/* begin stopBecauseOf: */
		workBuffer[GWStopReason] = GErrorNoMoreSpace;
		engineStopped = 1;
		goto l1;
	}
l1:	/* end needAvailableSpace: */;
	if (!(engineStopped)) {
		leftFill = transformColor(leftFill);
		rightFill = transformColor(rightFill);
	}
	if (!(engineStopped)) {
		loadWideBezierlineFillleftFillrightFilln(0, 0, leftFill, rightFill, nSegments);
	}
	if (engineStopped) {
		/* begin wbStackClear */
		workBuffer[GWBufferTop] = (workBuffer[GWSize]);
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(5);
	}
}

EXPORT(sqInt) primitiveAddBezierShape(void) {
    sqInt fillIndex;
    sqInt isArray;
    sqInt length;
    sqInt lineFill;
    sqInt lineWidth;
    sqInt nSegments;
    sqInt points;
    sqInt segSize;

	if (!((interpreterProxy->methodArgumentCount()) == 5)) {
		return interpreterProxy->primitiveFail();
	}
	lineFill = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(0));
	lineWidth = interpreterProxy->stackIntegerValue(1);
	fillIndex = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(2));
	nSegments = interpreterProxy->stackIntegerValue(3);
	points = interpreterProxy->stackObjectValue(4);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(5), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	length = interpreterProxy->slotSizeOf(points);
	if (interpreterProxy->isWords(points)) {

		/* Either PointArray or ShortPointArray */

		isArray = 0;
		if (!((length == (nSegments * 3)) || (length == (nSegments * 6)))) {
			return interpreterProxy->primitiveFail();
		}
	} else {
		if (!(interpreterProxy->isArray(points))) {
			return interpreterProxy->primitiveFail();
		}
		if (!(length == (nSegments * 3))) {
			return interpreterProxy->primitiveFail();
		}
		isArray = 1;
	}
	if ((lineWidth == 0) || (lineFill == 0)) {
		segSize = GLBaseSize;
	} else {
		segSize = GLWideSize;
	}
	if (!(needAvailableSpace(segSize * nSegments))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((isFillOkay(lineFill)) && (isFillOkay(fillIndex)))) {
		return interpreterProxy->primitiveFail();
	}
	lineFill = transformColor(lineFill);
	fillIndex = transformColor(fillIndex);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (((lineFill == 0) || (lineWidth == 0)) && (fillIndex == 0)) {
		return interpreterProxy->pop(5);
	}
	if (!(lineWidth == 0)) {
		lineWidth = transformWidth(lineWidth);
		if (lineWidth < 1) {
			lineWidth = 1;
		}
	}
	if (isArray) {
		loadArrayShapenSegmentsfilllineWidthlineFill(points, nSegments, fillIndex, lineWidth, lineFill);
	} else {
		loadShapenSegmentsfilllineWidthlineFillpointsShort(interpreterProxy->firstIndexableField(points), nSegments, fillIndex, lineWidth, lineFill, (nSegments * 3) == length);
	}
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		workBuffer[GWNeedsFlush] = 1;
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(5);
	}
}

EXPORT(sqInt) primitiveAddBitmapFill(void) {
    sqInt cmOop;
    sqInt dirOop;
    sqInt fill;
    sqInt formOop;
    sqInt nrmOop;
    sqInt originOop;
    sqInt tileFlag;
    sqInt xIndex;

	if (!((interpreterProxy->methodArgumentCount()) == 7)) {
		return interpreterProxy->primitiveFail();
	}
	xIndex = interpreterProxy->stackIntegerValue(0);
	if (xIndex <= 0) {
		return interpreterProxy->primitiveFail();
	}
	nrmOop = interpreterProxy->stackObjectValue(1);
	dirOop = interpreterProxy->stackObjectValue(2);
	originOop = interpreterProxy->stackObjectValue(3);
	tileFlag = interpreterProxy->booleanValueOf(interpreterProxy->stackValue(4));
	if (tileFlag) {
		tileFlag = 1;
	} else {
		tileFlag = 0;
	}
	cmOop = interpreterProxy->stackObjectValue(5);
	formOop = interpreterProxy->stackObjectValue(6);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(7), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	loadPointfrom(((int *) (workBuffer + GWPoint1)), originOop);
	loadPointfrom(((int *) (workBuffer + GWPoint2)), dirOop);
	loadPointfrom(((int *) (workBuffer + GWPoint3)), nrmOop);
	if (interpreterProxy->failed()) {
		return 0;
	}
	fill = loadBitmapFillcolormaptilefromalongnormalxIndex(formOop, cmOop, tileFlag, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), ((int *) (workBuffer + GWPoint3)), xIndex - 1);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(8);
		interpreterProxy->push(interpreterProxy->positive32BitIntegerFor(fill));
	}
}

EXPORT(sqInt) primitiveAddCompressedShape(void) {
    sqInt fillIndexList;
    sqInt leftFills;
    sqInt lineFills;
    sqInt lineWidths;
    sqInt nSegments;
    sqInt points;
    sqInt pointsShort;
    sqInt rightFills;

	if (!((interpreterProxy->methodArgumentCount()) == 7)) {
		return interpreterProxy->primitiveFail();
	}
	fillIndexList = interpreterProxy->stackObjectValue(0);
	lineFills = interpreterProxy->stackObjectValue(1);
	lineWidths = interpreterProxy->stackObjectValue(2);
	rightFills = interpreterProxy->stackObjectValue(3);
	leftFills = interpreterProxy->stackObjectValue(4);
	nSegments = interpreterProxy->stackIntegerValue(5);
	points = interpreterProxy->stackObjectValue(6);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(7), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(checkCompressedShapesegmentsleftFillsrightFillslineWidthslineFillsfillIndexList(points, nSegments, leftFills, rightFills, lineWidths, lineFills, fillIndexList))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(needAvailableSpace((((GBBaseSize < GLBaseSize) ? GLBaseSize : GBBaseSize)) * nSegments))) {
		return interpreterProxy->primitiveFail();
	}

	/* Then actually load the compressed shape */

	pointsShort = (interpreterProxy->slotSizeOf(points)) == (nSegments * 3);
	loadCompressedShapesegmentsleftFillsrightFillslineWidthslineFillsfillIndexListpointShort(interpreterProxy->firstIndexableField(points), nSegments, interpreterProxy->firstIndexableField(leftFills), interpreterProxy->firstIndexableField(rightFills), interpreterProxy->firstIndexableField(lineWidths), interpreterProxy->firstIndexableField(lineFills), interpreterProxy->firstIndexableField(fillIndexList), pointsShort);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		workBuffer[GWNeedsFlush] = 1;
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(7);
	}
}

EXPORT(sqInt) primitiveAddGradientFill(void) {
    sqInt dirOop;
    sqInt fill;
    sqInt isRadial;
    sqInt nrmOop;
    sqInt originOop;
    sqInt rampOop;

	if (!((interpreterProxy->methodArgumentCount()) == 5)) {
		return interpreterProxy->primitiveFail();
	}
	isRadial = interpreterProxy->booleanValueOf(interpreterProxy->stackValue(0));
	nrmOop = interpreterProxy->stackValue(1);
	dirOop = interpreterProxy->stackValue(2);
	originOop = interpreterProxy->stackValue(3);
	rampOop = interpreterProxy->stackValue(4);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(5), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	loadPointfrom(((int *) (workBuffer + GWPoint1)), originOop);
	loadPointfrom(((int *) (workBuffer + GWPoint2)), dirOop);
	loadPointfrom(((int *) (workBuffer + GWPoint3)), nrmOop);
	if (interpreterProxy->failed()) {
		return 0;
	}
	fill = loadGradientFillfromalongnormalisRadial(rampOop, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), ((int *) (workBuffer + GWPoint3)), isRadial);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(6);
		interpreterProxy->push(interpreterProxy->positive32BitIntegerFor(fill));
	}
}

EXPORT(sqInt) primitiveAddLine(void) {
    sqInt endOop;
    sqInt leftFill;
    sqInt rightFill;
    sqInt startOop;

	if (!((interpreterProxy->methodArgumentCount()) == 4)) {
		return interpreterProxy->primitiveFail();
	}
	rightFill = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(0));
	leftFill = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(1));
	endOop = interpreterProxy->stackObjectValue(2);
	startOop = interpreterProxy->stackObjectValue(3);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(4), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((isFillOkay(leftFill)) && (isFillOkay(rightFill)))) {
		return interpreterProxy->primitiveFail();
	}
	loadPointfrom(((int *) (workBuffer + GWPoint1)), startOop);
	loadPointfrom(((int *) (workBuffer + GWPoint2)), endOop);
	if (interpreterProxy->failed()) {
		return 0;
	}
	/* begin transformPoints: */
	if (2 > 0) {
		transformPoint(((int *) (workBuffer + GWPoint1)));
	}
	if (2 > 1) {
		transformPoint(((int *) (workBuffer + GWPoint2)));
	}
	if (2 > 2) {
		transformPoint(((int *) (workBuffer + GWPoint3)));
	}
	if (2 > 3) {
		transformPoint(((int *) (workBuffer + GWPoint4)));
	}
	leftFill = transformColor(leftFill);
	rightFill = transformColor(rightFill);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	loadWideLinefromtolineFillleftFillrightFill(0, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), 0, leftFill, rightFill);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(4);
	}
}

EXPORT(sqInt) primitiveAddOval(void) {
    sqInt borderIndex;
    sqInt borderWidth;
    sqInt endOop;
    sqInt fillIndex;
    sqInt startOop;

	if (!((interpreterProxy->methodArgumentCount()) == 5)) {
		return interpreterProxy->primitiveFail();
	}
	borderIndex = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(0));
	borderWidth = interpreterProxy->stackIntegerValue(1);
	fillIndex = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(2));
	endOop = interpreterProxy->stackObjectValue(3);
	startOop = interpreterProxy->stackObjectValue(4);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(5), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((isFillOkay(borderIndex)) && (isFillOkay(fillIndex)))) {
		return interpreterProxy->primitiveFail();
	}
	fillIndex = transformColor(fillIndex);
	borderIndex = transformColor(borderIndex);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if ((fillIndex == 0) && ((borderIndex == 0) || (borderWidth <= 0))) {
		return interpreterProxy->pop(5);
	}
	if (!(needAvailableSpace(16 * GBBaseSize))) {
		return interpreterProxy->primitiveFail();
	}
	if ((borderWidth > 0) && (borderIndex != 0)) {
		borderWidth = transformWidth(borderWidth);
	} else {
		borderWidth = 0;
	}
	loadPointfrom(((int *) (workBuffer + GWPoint1)), startOop);
	loadPointfrom(((int *) (workBuffer + GWPoint2)), endOop);
	if (interpreterProxy->failed()) {
		return 0;
	}
	loadOvallineFillleftFillrightFill(borderWidth, borderIndex, 0, fillIndex);
	if (engineStopped) {
		/* begin wbStackClear */
		workBuffer[GWBufferTop] = (workBuffer[GWSize]);
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		workBuffer[GWNeedsFlush] = 1;
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(5);
	}
}

EXPORT(sqInt) primitiveAddPolygon(void) {
    sqInt fillIndex;
    sqInt isArray;
    sqInt length;
    sqInt lineFill;
    sqInt lineWidth;
    sqInt nPoints;
    sqInt points;
    sqInt segSize;
    sqInt i;
    sqInt x0;
    sqInt x1;
    sqInt y0;
    sqInt y1;

	if (!((interpreterProxy->methodArgumentCount()) == 5)) {
		return interpreterProxy->primitiveFail();
	}
	lineFill = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(0));
	lineWidth = interpreterProxy->stackIntegerValue(1);
	fillIndex = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(2));
	nPoints = interpreterProxy->stackIntegerValue(3);
	points = interpreterProxy->stackObjectValue(4);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(5), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	length = interpreterProxy->slotSizeOf(points);
	if (interpreterProxy->isWords(points)) {

		/* Either PointArray or ShortPointArray */

		isArray = 0;
		if (!((length == nPoints) || ((nPoints * 2) == length))) {
			return interpreterProxy->primitiveFail();
		}
	} else {
		if (!(interpreterProxy->isArray(points))) {
			return interpreterProxy->primitiveFail();
		}
		if (!(length == nPoints)) {
			return interpreterProxy->primitiveFail();
		}
		isArray = 1;
	}
	if ((lineWidth == 0) || (lineFill == 0)) {
		segSize = GLBaseSize;
	} else {
		segSize = GLWideSize;
	}
	if (!(needAvailableSpace(segSize * nPoints))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((isFillOkay(lineFill)) && (isFillOkay(fillIndex)))) {
		return interpreterProxy->primitiveFail();
	}
	lineFill = transformColor(lineFill);
	fillIndex = transformColor(fillIndex);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (((lineFill == 0) || (lineWidth == 0)) && (fillIndex == 0)) {
		return interpreterProxy->pop(6);
	}
	if (!(lineWidth == 0)) {
		lineWidth = transformWidth(lineWidth);
	}
	if (isArray) {
		/* begin loadArrayPolygon:nPoints:fill:lineWidth:lineFill: */
		loadPointfrom(((int *) (workBuffer + GWPoint1)), interpreterProxy->fetchPointerofObject(0, points));
		if (interpreterProxy->failed()) {
			goto l1;
		}
		x0 = (((int *) (workBuffer + GWPoint1)))[0];
		y0 = (((int *) (workBuffer + GWPoint1)))[1];
		for (i = 1; i <= (nPoints - 1); i += 1) {
			loadPointfrom(((int *) (workBuffer + GWPoint1)), interpreterProxy->fetchPointerofObject(i, points));
			if (interpreterProxy->failed()) {
				goto l1;
			}
			x1 = (((int *) (workBuffer + GWPoint1)))[0];
			y1 = (((int *) (workBuffer + GWPoint1)))[1];
			(((int *) (workBuffer + GWPoint1)))[0] = x0;
			(((int *) (workBuffer + GWPoint1)))[1] = y0;
			(((int *) (workBuffer + GWPoint2)))[0] = x1;
			(((int *) (workBuffer + GWPoint2)))[1] = y1;
			/* begin transformPoints: */
			if (2 > 0) {
				transformPoint(((int *) (workBuffer + GWPoint1)));
			}
			if (2 > 1) {
				transformPoint(((int *) (workBuffer + GWPoint2)));
			}
			if (2 > 2) {
				transformPoint(((int *) (workBuffer + GWPoint3)));
			}
			if (2 > 3) {
				transformPoint(((int *) (workBuffer + GWPoint4)));
			}
			loadWideLinefromtolineFillleftFillrightFill(lineWidth, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), lineFill, fillIndex, 0);
			if (engineStopped) {
				goto l1;
			}
			x0 = x1;
			y0 = y1;
		}
	l1:	/* end loadArrayPolygon:nPoints:fill:lineWidth:lineFill: */;
	} else {
		loadPolygonnPointsfilllineWidthlineFillpointsShort(interpreterProxy->firstIndexableField(points), nPoints, fillIndex, lineWidth, lineFill, nPoints == length);
	}
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		workBuffer[GWNeedsFlush] = 1;
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(5);
	}
}

EXPORT(sqInt) primitiveAddRect(void) {
    sqInt borderIndex;
    sqInt borderWidth;
    sqInt endOop;
    sqInt fillIndex;
    sqInt startOop;

	if (!((interpreterProxy->methodArgumentCount()) == 5)) {
		return interpreterProxy->primitiveFail();
	}
	borderIndex = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(0));
	borderWidth = interpreterProxy->stackIntegerValue(1);
	fillIndex = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(2));
	endOop = interpreterProxy->stackObjectValue(3);
	startOop = interpreterProxy->stackObjectValue(4);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(interpreterProxy->stackObjectValue(5), GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((isFillOkay(borderIndex)) && (isFillOkay(fillIndex)))) {
		return interpreterProxy->primitiveFail();
	}
	borderIndex = transformColor(borderIndex);
	fillIndex = transformColor(fillIndex);
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if ((fillIndex == 0) && ((borderIndex == 0) || (borderWidth == 0))) {
		return interpreterProxy->pop(5);
	}
	if (!(needAvailableSpace(4 * GLBaseSize))) {
		return interpreterProxy->primitiveFail();
	}
	if ((borderWidth > 0) && (borderIndex != 0)) {
		borderWidth = transformWidth(borderWidth);
	} else {
		borderWidth = 0;
	}
	loadPointfrom(((int *) (workBuffer + GWPoint1)), startOop);
	loadPointfrom(((int *) (workBuffer + GWPoint3)), endOop);
	if (interpreterProxy->failed()) {
		return null;
	}
	(((int *) (workBuffer + GWPoint2)))[0] = ((((int *) (workBuffer + GWPoint3)))[0]);
	(((int *) (workBuffer + GWPoint2)))[1] = ((((int *) (workBuffer + GWPoint1)))[1]);
	(((int *) (workBuffer + GWPoint4)))[0] = ((((int *) (workBuffer + GWPoint1)))[0]);
	(((int *) (workBuffer + GWPoint4)))[1] = ((((int *) (workBuffer + GWPoint3)))[1]);
	/* begin transformPoints: */
	if (4 > 0) {
		transformPoint(((int *) (workBuffer + GWPoint1)));
	}
	if (4 > 1) {
		transformPoint(((int *) (workBuffer + GWPoint2)));
	}
	if (4 > 2) {
		transformPoint(((int *) (workBuffer + GWPoint3)));
	}
	if (4 > 3) {
		transformPoint(((int *) (workBuffer + GWPoint4)));
	}
	/* begin loadRectangle:lineFill:leftFill:rightFill: */
	loadWideLinefromtolineFillleftFillrightFill(borderWidth, ((int *) (workBuffer + GWPoint1)), ((int *) (workBuffer + GWPoint2)), borderIndex, 0, fillIndex);
	loadWideLinefromtolineFillleftFillrightFill(borderWidth, ((int *) (workBuffer + GWPoint2)), ((int *) (workBuffer + GWPoint3)), borderIndex, 0, fillIndex);
	loadWideLinefromtolineFillleftFillrightFill(borderWidth, ((int *) (workBuffer + GWPoint3)), ((int *) (workBuffer + GWPoint4)), borderIndex, 0, fillIndex);
	loadWideLinefromtolineFillleftFillrightFill(borderWidth, ((int *) (workBuffer + GWPoint4)), ((int *) (workBuffer + GWPoint1)), borderIndex, 0, fillIndex);
	if (!(interpreterProxy->failed())) {
		workBuffer[GWNeedsFlush] = 1;
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(5);
	}
}


/*	Note: No need to load either bitBlt or spanBuffer */

EXPORT(sqInt) primitiveChangedActiveEdgeEntry(void) {
    sqInt edge;
    sqInt edgeOop;
    sqInt value;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	edgeOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateWaitingChange))) {
		return interpreterProxy->primitiveFail();
	}
	edge = loadEdgeStateFrom(edgeOop);
	if (interpreterProxy->failed()) {
		return null;
	}
	if ((objBuffer[edge + GENumLines]) == 0) {
		removeFirstAETEntry();
	} else {
		resortFirstAETEntry();
		workBuffer[GWAETStart] = ((workBuffer[GWAETStart]) + 1);
	}
	workBuffer[GWState] = GEStateUpdateEdges;
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(1);
	if (doProfileStats) {
		workBuffer[GWCountChangeAETEntry] = ((workBuffer[GWCountChangeAETEntry]) + 1);
		/* begin incrementStat:by: */
		value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
		workBuffer[GWTimeChangeAETEntry] = ((workBuffer[GWTimeChangeAETEntry]) + value);
	}
}

EXPORT(sqInt) primitiveCopyBuffer(void) {
    sqInt buf1;
    sqInt buf2;
    sqInt diff;
    int *  dst;
    sqInt i;
    int *  src;

	if (!((interpreterProxy->methodArgumentCount()) == 2)) {
		return interpreterProxy->primitiveFail();
	}
	buf2 = interpreterProxy->stackObjectValue(0);
	buf1 = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(loadWorkBufferFrom(buf1))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((interpreterProxy->fetchClassOf(buf1)) == (interpreterProxy->fetchClassOf(buf2)))) {
		return interpreterProxy->primitiveFail();
	}
	diff = (interpreterProxy->slotSizeOf(buf2)) - (interpreterProxy->slotSizeOf(buf1));
	if (diff < 0) {
		return interpreterProxy->primitiveFail();
	}
	src = workBuffer;
	dst = interpreterProxy->firstIndexableField(buf2);
	for (i = 0; i <= ((workBuffer[GWBufferTop]) - 1); i += 1) {
		dst[i] = (src[i]);
	}
	dst[GWBufferTop] = ((workBuffer[GWBufferTop]) + diff);
	dst[GWSize] = ((workBuffer[GWSize]) + diff);
	src += workBuffer[GWBufferTop];
	dst = (dst + (workBuffer[GWBufferTop])) + diff;
	for (i = 0; i <= (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 1); i += 1) {
		dst[i] = (src[i]);
	}
	if (!(loadWorkBufferFrom(buf2))) {
		return interpreterProxy->primitiveFail();
	}
	interpreterProxy->pop(2);
}


/*	Note: Must load bitBlt and spanBuffer */

EXPORT(sqInt) primitiveDisplaySpanBuffer(void) {
    sqInt value;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateBlitBuffer))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(loadSpanBufferFrom(interpreterProxy->fetchPointerofObject(BESpanIndex, engine)))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(loadBitBltFrom(interpreterProxy->fetchPointerofObject(BEBitBltIndex, engine)))) {
		return interpreterProxy->primitiveFail();
	}
	if (((workBuffer[GWCurrentY]) & (workBuffer[GWAAScanMask])) == (workBuffer[GWAAScanMask])) {
		displaySpanBufferAt(workBuffer[GWCurrentY]);
		postDisplayAction();
	}
	if (!((workBuffer[GWState]) == GEStateCompleted)) {
		workBuffer[GWAETStart] = 0;
		workBuffer[GWCurrentY] = ((workBuffer[GWCurrentY]) + 1);
		workBuffer[GWState] = GEStateUpdateEdges;
	}
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	if (doProfileStats) {
		workBuffer[GWCountDisplaySpan] = ((workBuffer[GWCountDisplaySpan]) + 1);
		/* begin incrementStat:by: */
		value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
		workBuffer[GWTimeDisplaySpan] = ((workBuffer[GWTimeDisplaySpan]) + value);
	}
}


/*	Turn on/off profiling. Return the old value of the flag. */

EXPORT(sqInt) primitiveDoProfileStats(void) {
    sqInt newValue;
    sqInt oldValue;

	oldValue = doProfileStats;
	newValue = interpreterProxy->stackObjectValue(0);
	newValue = interpreterProxy->booleanValueOf(newValue);
	if (!(interpreterProxy->failed())) {
		doProfileStats = newValue;
		interpreterProxy->pop(2);
		interpreterProxy->pushBool(oldValue);
	}
}

EXPORT(sqInt) primitiveFinishedProcessing(void) {
    sqInt finished;
    sqInt value;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	finished = (workBuffer[GWState]) == GEStateCompleted;
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(1);
	interpreterProxy->pushBool(finished);
	if (doProfileStats) {
		workBuffer[GWCountFinishTest] = ((workBuffer[GWCountFinishTest]) + 1);
		/* begin incrementStat:by: */
		value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
		workBuffer[GWTimeFinishTest] = ((workBuffer[GWTimeFinishTest]) + value);
	}
}

EXPORT(sqInt) primitiveGetAALevel(void) {
	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(workBuffer[GWAALevel]);
}

EXPORT(sqInt) primitiveGetBezierStats(void) {
    sqInt statOop;
    int *stats;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	statOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->isWords(statOop))) {
		return interpreterProxy->primitiveFail();
	}
	if ((interpreterProxy->slotSizeOf(statOop)) < 4) {
		return interpreterProxy->primitiveFail();
	}
	stats = interpreterProxy->firstIndexableField(statOop);
	stats[0] = ((stats[0]) + (workBuffer[GWBezierMonotonSubdivisions]));
	stats[1] = ((stats[1]) + (workBuffer[GWBezierHeightSubdivisions]));
	stats[2] = ((stats[2]) + (workBuffer[GWBezierOverflowSubdivisions]));
	stats[3] = ((stats[3]) + (workBuffer[GWBezierLineConversions]));
	interpreterProxy->pop(1);
}

EXPORT(sqInt) primitiveGetClipRect(void) {
    sqInt pointOop;
    sqInt rectOop;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	rectOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->isPointers(rectOop))) {
		return interpreterProxy->primitiveFail();
	}
	if ((interpreterProxy->slotSizeOf(rectOop)) < 2) {
		return interpreterProxy->primitiveFail();
	}
	interpreterProxy->pushRemappableOop(rectOop);
	pointOop = interpreterProxy->makePointwithxValueyValue(workBuffer[GWClipMinX], workBuffer[GWClipMinY]);
	rectOop = interpreterProxy->popRemappableOop();
	interpreterProxy->storePointerofObjectwithValue(0, rectOop, pointOop);
	interpreterProxy->pushRemappableOop(rectOop);
	pointOop = interpreterProxy->makePointwithxValueyValue(workBuffer[GWClipMaxX], workBuffer[GWClipMaxY]);
	rectOop = interpreterProxy->popRemappableOop();
	interpreterProxy->storePointerofObjectwithValue(1, rectOop, pointOop);
	interpreterProxy->pop(2);
	interpreterProxy->push(rectOop);
}

EXPORT(sqInt) primitiveGetCounts(void) {
    sqInt statOop;
    int *stats;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	statOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->isWords(statOop))) {
		return interpreterProxy->primitiveFail();
	}
	if ((interpreterProxy->slotSizeOf(statOop)) < 9) {
		return interpreterProxy->primitiveFail();
	}
	stats = interpreterProxy->firstIndexableField(statOop);
	stats[0] = ((stats[0]) + (workBuffer[GWCountInitializing]));
	stats[1] = ((stats[1]) + (workBuffer[GWCountFinishTest]));
	stats[2] = ((stats[2]) + (workBuffer[GWCountNextGETEntry]));
	stats[3] = ((stats[3]) + (workBuffer[GWCountAddAETEntry]));
	stats[4] = ((stats[4]) + (workBuffer[GWCountNextFillEntry]));
	stats[5] = ((stats[5]) + (workBuffer[GWCountMergeFill]));
	stats[6] = ((stats[6]) + (workBuffer[GWCountDisplaySpan]));
	stats[7] = ((stats[7]) + (workBuffer[GWCountNextAETEntry]));
	stats[8] = ((stats[8]) + (workBuffer[GWCountChangeAETEntry]));
	interpreterProxy->pop(1);
}

EXPORT(sqInt) primitiveGetDepth(void) {
	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(workBuffer[GWCurrentZ]);
}


/*	Return the reason why the last operation failed. */

EXPORT(sqInt) primitiveGetFailureReason(void) {
	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if ((engine & 1)) {
		return 0;
	}
	if (!(interpreterProxy->isPointers(engine))) {
		return 0;
	}
	if ((interpreterProxy->slotSizeOf(engine)) < BEBalloonEngineSize) {
		return 0;
	}
	if (!(loadWorkBufferFrom(interpreterProxy->fetchPointerofObject(BEWorkBufferIndex, engine)))) {
		return interpreterProxy->primitiveFail();
	}
	interpreterProxy->pop(1);
	interpreterProxy->pushInteger(workBuffer[GWStopReason]);
}

EXPORT(sqInt) primitiveGetOffset(void) {
    sqInt pointOop;

	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	pointOop = interpreterProxy->makePointwithxValueyValue(workBuffer[GWDestOffsetX], workBuffer[GWDestOffsetY]);
	interpreterProxy->pop(1);
	interpreterProxy->push(pointOop);
}

EXPORT(sqInt) primitiveGetTimes(void) {
    sqInt statOop;
    int *stats;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	statOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->isWords(statOop))) {
		return interpreterProxy->primitiveFail();
	}
	if ((interpreterProxy->slotSizeOf(statOop)) < 9) {
		return interpreterProxy->primitiveFail();
	}
	stats = interpreterProxy->firstIndexableField(statOop);
	stats[0] = ((stats[0]) + (workBuffer[GWTimeInitializing]));
	stats[1] = ((stats[1]) + (workBuffer[GWTimeFinishTest]));
	stats[2] = ((stats[2]) + (workBuffer[GWTimeNextGETEntry]));
	stats[3] = ((stats[3]) + (workBuffer[GWTimeAddAETEntry]));
	stats[4] = ((stats[4]) + (workBuffer[GWTimeNextFillEntry]));
	stats[5] = ((stats[5]) + (workBuffer[GWTimeMergeFill]));
	stats[6] = ((stats[6]) + (workBuffer[GWTimeDisplaySpan]));
	stats[7] = ((stats[7]) + (workBuffer[GWTimeNextAETEntry]));
	stats[8] = ((stats[8]) + (workBuffer[GWTimeChangeAETEntry]));
	interpreterProxy->pop(1);
}

EXPORT(sqInt) primitiveInitializeBuffer(void) {
    sqInt size;
    sqInt wbOop;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	wbOop = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(interpreterProxy->isWords(wbOop))) {
		return interpreterProxy->primitiveFail();
	}
	if (((size = interpreterProxy->slotSizeOf(wbOop))) < GWMinimalSize) {
		return interpreterProxy->primitiveFail();
	}
	/* begin workBufferPut: */
	workBuffer = interpreterProxy->firstIndexableField(wbOop);
	objBuffer = workBuffer + GWHeaderSize;
	workBuffer[GWMagicIndex] = GWMagicNumber;
	workBuffer[GWSize] = size;
	workBuffer[GWBufferTop] = size;
	workBuffer[GWState] = GEStateUnlocked;
	workBuffer[GWObjStart] = GWHeaderSize;
	workBuffer[GWObjUsed] = 4;
	objBuffer[0 + GEObjectType] = GEPrimitiveFill;
	objBuffer[0 + GEObjectLength] = 4;
	objBuffer[0 + GEObjectIndex] = 0;
	workBuffer[GWGETStart] = 0;
	workBuffer[GWGETUsed] = 0;
	workBuffer[GWAETStart] = 0;
	workBuffer[GWAETUsed] = 0;
	workBuffer[GWStopReason] = 0;
	workBuffer[GWNeedsFlush] = 0;
	workBuffer[GWClipMinX] = 0;
	workBuffer[GWClipMaxX] = 0;
	workBuffer[GWClipMinY] = 0;
	workBuffer[GWClipMaxY] = 0;
	workBuffer[GWCurrentZ] = 0;
	resetGraphicsEngineStats();
	initEdgeTransform();
	initColorTransform();
	interpreterProxy->pop(2);
	interpreterProxy->push(wbOop);
}


/*	Note: No need to load bitBlt but must load spanBuffer */

EXPORT(sqInt) primitiveInitializeProcessing(void) {
    sqInt value;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(loadSpanBufferFrom(interpreterProxy->fetchPointerofObject(BESpanIndex, engine)))) {
		return interpreterProxy->primitiveFail();
	}
	initializeGETProcessing();
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	workBuffer[GWState] = GEStateAddingFromGET;
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
	}
	if (doProfileStats) {
		workBuffer[GWCountInitializing] = ((workBuffer[GWCountInitializing]) + 1);
		/* begin incrementStat:by: */
		value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
		workBuffer[GWTimeInitializing] = ((workBuffer[GWTimeInitializing]) + value);
	}
}


/*	Note: No need to load bitBlt but must load spanBuffer */

EXPORT(sqInt) primitiveMergeFillFrom(void) {
    sqInt bitsOop;
    sqInt fillOop;
    sqInt value;
    sqInt value1;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 2)) {
		return interpreterProxy->primitiveFail();
	}
	fillOop = interpreterProxy->stackObjectValue(0);
	bitsOop = interpreterProxy->stackObjectValue(1);
	engine = interpreterProxy->stackObjectValue(2);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateWaitingForFill))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(loadSpanBufferFrom(interpreterProxy->fetchPointerofObject(BESpanIndex, engine)))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((interpreterProxy->fetchClassOf(bitsOop)) == (interpreterProxy->classBitmap()))) {
		return interpreterProxy->primitiveFail();
	}
	if ((interpreterProxy->slotSizeOf(fillOop)) < FTBalloonFillDataSize) {
		return interpreterProxy->primitiveFail();
	}
	value = interpreterProxy->fetchIntegerofObject(FTIndexIndex, fillOop);
	if (!((objBuffer[(workBuffer[GWLastExportedFill]) + GEObjectIndex]) == value)) {
		return interpreterProxy->primitiveFail();
	}
	value = interpreterProxy->fetchIntegerofObject(FTMinXIndex, fillOop);
	if (!((workBuffer[GWLastExportedLeftX]) == value)) {
		return interpreterProxy->primitiveFail();
	}
	value = interpreterProxy->fetchIntegerofObject(FTMaxXIndex, fillOop);
	if (!((workBuffer[GWLastExportedRightX]) == value)) {
		return interpreterProxy->primitiveFail();
	}
	if ((interpreterProxy->slotSizeOf(bitsOop)) < ((workBuffer[GWLastExportedRightX]) - (workBuffer[GWLastExportedLeftX]))) {
		return interpreterProxy->primitiveFail();
	}
	if (interpreterProxy->failed()) {
		return null;
	}
	fillBitmapSpanfromto(interpreterProxy->firstIndexableField(bitsOop), workBuffer[GWLastExportedLeftX], workBuffer[GWLastExportedRightX]);
	workBuffer[GWState] = GEStateScanningAET;
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(2);
	if (doProfileStats) {
		workBuffer[GWCountMergeFill] = ((workBuffer[GWCountMergeFill]) + 1);
		/* begin incrementStat:by: */
		value1 = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
		workBuffer[GWTimeMergeFill] = ((workBuffer[GWTimeMergeFill]) + value1);
	}
}

EXPORT(sqInt) primitiveNeedsFlush(void) {
    sqInt needFlush;

	if (!((interpreterProxy->methodArgumentCount()) == 0)) {
		return interpreterProxy->primitiveFail();
	}
	engine = interpreterProxy->stackObjectValue(0);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	needFlush = (workBuffer[GWNeedsFlush]) != 0;
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(1);
	interpreterProxy->pushBool(needFlush);
}

EXPORT(sqInt) primitiveNeedsFlushPut(void) {
    sqInt needFlush;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	needFlush = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	needFlush = interpreterProxy->booleanValueOf(needFlush);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFrom(engine))) {
		return interpreterProxy->primitiveFail();
	}
	if (needFlush == 1) {
		workBuffer[GWNeedsFlush] = 1;
	} else {
		workBuffer[GWNeedsFlush] = 0;
	}
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(1);
}


/*	Note: No need to load either bitBlt or spanBuffer */

EXPORT(sqInt) primitiveNextActiveEdgeEntry(void) {
    sqInt edge;
    sqInt edgeOop;
    sqInt hasEdge;
    sqInt value;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	edgeOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredStateor(engine, GEStateUpdateEdges, GEStateCompleted))) {
		return interpreterProxy->primitiveFail();
	}
	hasEdge = 0;
	if (!((workBuffer[GWState]) == GEStateCompleted)) {
		hasEdge = findNextExternalUpdateFromAET();
		if (hasEdge) {
			edge = aetBuffer[workBuffer[GWAETStart]];
			storeEdgeStateFrominto(edge, edgeOop);
			workBuffer[GWState] = GEStateWaitingChange;
		} else {
			workBuffer[GWState] = GEStateAddingFromGET;
		}
	}
	if (interpreterProxy->failed()) {
		return null;
	}
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(2);
	interpreterProxy->pushBool(!hasEdge);
	if (doProfileStats) {
		workBuffer[GWCountNextAETEntry] = ((workBuffer[GWCountNextAETEntry]) + 1);
		/* begin incrementStat:by: */
		value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
		workBuffer[GWTimeNextAETEntry] = ((workBuffer[GWTimeNextAETEntry]) + value);
	}
}


/*	Note: No need to load bitBlt but must load spanBuffer */

EXPORT(sqInt) primitiveNextFillEntry(void) {
    sqInt fillOop;
    sqInt hasFill;
    sqInt value;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	fillOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateScanningAET))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(loadSpanBufferFrom(interpreterProxy->fetchPointerofObject(BESpanIndex, engine)))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(loadFormsFrom(interpreterProxy->fetchPointerofObject(BEFormsIndex, engine)))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((workBuffer[GWClearSpanBuffer]) == 0)) {
		if (((workBuffer[GWCurrentY]) & (workBuffer[GWAAScanMask])) == 0) {
			clearSpanBuffer();
		}
		workBuffer[GWClearSpanBuffer] = 0;
	}
	hasFill = findNextExternalFillFromAET();
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (hasFill) {
		storeFillStateInto(fillOop);
	}
	if (!(interpreterProxy->failed())) {
		if (hasFill) {
			workBuffer[GWState] = GEStateWaitingForFill;
		} else {
			/* begin wbStackClear */
			workBuffer[GWBufferTop] = (workBuffer[GWSize]);
			workBuffer[GWSpanEndAA] = 0;
			workBuffer[GWState] = GEStateBlitBuffer;
		}
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(2);
		interpreterProxy->pushBool(!hasFill);
		if (doProfileStats) {
			workBuffer[GWCountNextFillEntry] = ((workBuffer[GWCountNextFillEntry]) + 1);
			/* begin incrementStat:by: */
			value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeNextFillEntry] = ((workBuffer[GWTimeNextFillEntry]) + value);
		}
	}
}


/*	Note: No need to load either bitBlt or spanBuffer */

EXPORT(sqInt) primitiveNextGlobalEdgeEntry(void) {
    sqInt edge;
    sqInt edgeOop;
    sqInt hasEdge;
    sqInt value;

	if (doProfileStats) {
		geProfileTime = interpreterProxy->ioMicroMSecs();
	}
	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	edgeOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateAddingFromGET))) {
		return interpreterProxy->primitiveFail();
	}
	hasEdge = findNextExternalEntryFromGET();
	if (hasEdge) {
		edge = getBuffer[workBuffer[GWGETStart]];
		storeEdgeStateFrominto(edge, edgeOop);
		workBuffer[GWGETStart] = ((workBuffer[GWGETStart]) + 1);
	}
	if (interpreterProxy->failed()) {
		return null;
	}
	if (hasEdge) {
		workBuffer[GWState] = GEStateWaitingForEdge;
	} else {
		workBuffer[GWState] = GEStateScanningAET;
		workBuffer[GWClearSpanBuffer] = 1;
		workBuffer[GWAETStart] = 0;
		/* begin wbStackClear */
		workBuffer[GWBufferTop] = (workBuffer[GWSize]);
	}
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(2);
	interpreterProxy->pushBool(!hasEdge);
	if (doProfileStats) {
		workBuffer[GWCountNextGETEntry] = ((workBuffer[GWCountNextGETEntry]) + 1);
		/* begin incrementStat:by: */
		value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
		workBuffer[GWTimeNextGETEntry] = ((workBuffer[GWTimeNextGETEntry]) + value);
	}
}

EXPORT(sqInt) primitiveRegisterExternalEdge(void) {
    sqInt edge;
    sqInt index;
    sqInt initialX;
    sqInt initialY;
    sqInt initialZ;
    sqInt leftFillIndex;
    sqInt rightFillIndex;
    sqInt value;
    sqInt value1;

	if (!((interpreterProxy->methodArgumentCount()) == 6)) {
		return interpreterProxy->primitiveFail();
	}
	rightFillIndex = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(0));
	leftFillIndex = interpreterProxy->positive32BitValueOf(interpreterProxy->stackValue(1));
	initialZ = interpreterProxy->stackIntegerValue(2);
	initialY = interpreterProxy->stackIntegerValue(3);
	initialX = interpreterProxy->stackIntegerValue(4);
	index = interpreterProxy->stackIntegerValue(5);
	engine = interpreterProxy->stackObjectValue(6);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(allocateObjEntry(GEBaseEdgeSize))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(isFillOkay(leftFillIndex))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(isFillOkay(rightFillIndex))) {
		return interpreterProxy->primitiveFail();
	}
	edge = objUsed;

	/* Install type and length */

	objUsed = edge + GEBaseEdgeSize;
	objBuffer[edge + GEObjectType] = GEPrimitiveEdge;
	objBuffer[edge + GEObjectLength] = GEBaseEdgeSize;
	objBuffer[edge + GEObjectIndex] = index;
	objBuffer[edge + GEXValue] = initialX;
	objBuffer[edge + GEYValue] = initialY;
	objBuffer[edge + GEZValue] = initialZ;
	/* begin edgeLeftFillOf:put: */
	value = transformColor(leftFillIndex);
	objBuffer[edge + GEFillIndexLeft] = value;
	/* begin edgeRightFillOf:put: */
	value1 = transformColor(rightFillIndex);
	objBuffer[edge + GEFillIndexRight] = value1;
	if (engineStopped) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(6);
	}
}

EXPORT(sqInt) primitiveRegisterExternalFill(void) {
    sqInt fill;
    sqInt index;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	index = interpreterProxy->stackIntegerValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	fill = 0;
	while (fill == 0) {
		if (!(allocateObjEntry(GEBaseEdgeSize))) {
			return interpreterProxy->primitiveFail();
		}
		fill = objUsed;

		/* Install type and length */

		objUsed = fill + GEBaseFillSize;
		objBuffer[fill + GEObjectType] = GEPrimitiveFill;
		objBuffer[fill + GEObjectLength] = GEBaseFillSize;
		objBuffer[fill + GEObjectIndex] = index;
	}
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(2);
		interpreterProxy->pushInteger(fill);
	}
}


/*	Start/Proceed rendering the entire image */

EXPORT(sqInt) primitiveRenderImage(void) {
	if (!(loadRenderingState())) {
		return interpreterProxy->primitiveFail();
	}
	proceedRenderingScanline();
	if (engineStopped) {
		return storeRenderingState();
	}
	proceedRenderingImage();
	storeRenderingState();
}


/*	Start rendering the entire image */

EXPORT(sqInt) primitiveRenderScanline(void) {
	if (!(loadRenderingState())) {
		return interpreterProxy->primitiveFail();
	}
	proceedRenderingScanline();
	storeRenderingState();
}

EXPORT(sqInt) primitiveSetAALevel(void) {
    sqInt level;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	level = interpreterProxy->stackIntegerValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	setAALevel(level);
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(1);
}


/*	Primitive. Set the BitBlt plugin to use. */

EXPORT(sqInt) primitiveSetBitBltPlugin(void) {
    sqInt i;
    sqInt length;
    sqInt needReload;
    sqInt pluginName;
    char *ptr;


	/* Must be string to work */

	pluginName = interpreterProxy->stackValue(0);
	if (!(interpreterProxy->isBytes(pluginName))) {
		return interpreterProxy->primitiveFail();
	}
	length = interpreterProxy->byteSizeOf(pluginName);
	if (length >= 256) {
		return interpreterProxy->primitiveFail();
	}
	ptr = interpreterProxy->firstIndexableField(pluginName);
	needReload = 0;
	for (i = 0; i <= (length - 1); i += 1) {
		if (!((bbPluginName[i]) == (ptr[i]))) {
			bbPluginName[i] = (ptr[i]);
			needReload = 1;
		}
	}
	if (!((bbPluginName[length]) == 0)) {
		bbPluginName[length] = 0;
		needReload = 1;
	}
	if (needReload) {
		if (!(initialiseModule())) {
			return interpreterProxy->primitiveFail();
		}
	}
	interpreterProxy->pop(1);
}

EXPORT(sqInt) primitiveSetClipRect(void) {
    sqInt rectOop;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	rectOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!(interpreterProxy->isPointers(rectOop))) {
		return interpreterProxy->primitiveFail();
	}
	if ((interpreterProxy->slotSizeOf(rectOop)) < 2) {
		return interpreterProxy->primitiveFail();
	}
	loadPointfrom(((int *) (workBuffer + GWPoint1)), interpreterProxy->fetchPointerofObject(0, rectOop));
	loadPointfrom(((int *) (workBuffer + GWPoint2)), interpreterProxy->fetchPointerofObject(1, rectOop));
	if (!(interpreterProxy->failed())) {
		workBuffer[GWClipMinX] = ((((int *) (workBuffer + GWPoint1)))[0]);
		workBuffer[GWClipMinY] = ((((int *) (workBuffer + GWPoint1)))[1]);
		workBuffer[GWClipMaxX] = ((((int *) (workBuffer + GWPoint2)))[0]);
		workBuffer[GWClipMaxY] = ((((int *) (workBuffer + GWPoint2)))[1]);
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(1);
	}
}

EXPORT(sqInt) primitiveSetColorTransform(void) {
    sqInt transformOop;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	transformOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	loadColorTransformFrom(transformOop);
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(1);
	}
}

EXPORT(sqInt) primitiveSetDepth(void) {
    sqInt depth;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	depth = interpreterProxy->stackIntegerValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	workBuffer[GWCurrentZ] = depth;
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(1);
	}
}

EXPORT(sqInt) primitiveSetEdgeTransform(void) {
    sqInt transformOop;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	transformOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	loadEdgeTransformFrom(transformOop);
	if (!(interpreterProxy->failed())) {
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(1);
	}
}

EXPORT(sqInt) primitiveSetOffset(void) {
    sqInt pointOop;

	if (!((interpreterProxy->methodArgumentCount()) == 1)) {
		return interpreterProxy->primitiveFail();
	}
	pointOop = interpreterProxy->stackObjectValue(0);
	engine = interpreterProxy->stackObjectValue(1);
	if (interpreterProxy->failed()) {
		return null;
	}
	if (!(quickLoadEngineFromrequiredState(engine, GEStateUnlocked))) {
		return interpreterProxy->primitiveFail();
	}
	if (!((interpreterProxy->fetchClassOf(pointOop)) == (interpreterProxy->classPoint()))) {
		return interpreterProxy->primitiveFail();
	}
	loadPointfrom(((int *) (workBuffer + GWPoint1)), pointOop);
	if (!(interpreterProxy->failed())) {
		workBuffer[GWDestOffsetX] = ((((int *) (workBuffer + GWPoint1)))[0]);
		workBuffer[GWDestOffsetY] = ((((int *) (workBuffer + GWPoint1)))[1]);
		/* begin storeEngineStateInto: */
		workBuffer[GWObjUsed] = objUsed;
		interpreterProxy->pop(1);
	}
}


/*	This is the main rendering entry */

static sqInt proceedRenderingImage(void) {
    sqInt external;
    sqInt value;
    sqInt value1;
    sqInt value2;
    sqInt value3;

	while (!((workBuffer[GWState]) == GEStateCompleted)) {
		if (doProfileStats) {
			geProfileTime = interpreterProxy->ioMicroMSecs();
		}
		external = findNextExternalEntryFromGET();
		if (doProfileStats) {
			workBuffer[GWCountNextGETEntry] = ((workBuffer[GWCountNextGETEntry]) + 1);
			/* begin incrementStat:by: */
			value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeNextGETEntry] = ((workBuffer[GWTimeNextGETEntry]) + value);
		}
		if (engineStopped) {
			return workBuffer[GWState] = GEStateAddingFromGET;
		}
		if (external) {
			workBuffer[GWState] = GEStateWaitingForEdge;
			/* begin stopBecauseOf: */
			workBuffer[GWStopReason] = GErrorGETEntry;
			engineStopped = 1;
			return null;
		}
		workBuffer[GWAETStart] = 0;
		/* begin wbStackClear */
		workBuffer[GWBufferTop] = (workBuffer[GWSize]);
		workBuffer[GWClearSpanBuffer] = 1;
		if (doProfileStats) {
			geProfileTime = interpreterProxy->ioMicroMSecs();
		}
		if (((workBuffer[GWClearSpanBuffer]) != 0) && (((workBuffer[GWCurrentY]) & (workBuffer[GWAAScanMask])) == 0)) {
			clearSpanBuffer();
		}
		workBuffer[GWClearSpanBuffer] = 0;
		external = findNextExternalFillFromAET();
		if (doProfileStats) {
			workBuffer[GWCountNextFillEntry] = ((workBuffer[GWCountNextFillEntry]) + 1);
			/* begin incrementStat:by: */
			value1 = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeNextFillEntry] = ((workBuffer[GWTimeNextFillEntry]) + value1);
		}
		if (engineStopped) {
			return workBuffer[GWState] = GEStateScanningAET;
		}
		if (external) {
			workBuffer[GWState] = GEStateWaitingForFill;
			/* begin stopBecauseOf: */
			workBuffer[GWStopReason] = GErrorFillEntry;
			engineStopped = 1;
			return null;
		}
		/* begin wbStackClear */
		workBuffer[GWBufferTop] = (workBuffer[GWSize]);
		workBuffer[GWSpanEndAA] = 0;
		if (doProfileStats) {
			geProfileTime = interpreterProxy->ioMicroMSecs();
		}
		if (((workBuffer[GWCurrentY]) & (workBuffer[GWAAScanMask])) == (workBuffer[GWAAScanMask])) {
			displaySpanBufferAt(workBuffer[GWCurrentY]);
			postDisplayAction();
		}
		if (doProfileStats) {
			workBuffer[GWCountDisplaySpan] = ((workBuffer[GWCountDisplaySpan]) + 1);
			/* begin incrementStat:by: */
			value2 = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeDisplaySpan] = ((workBuffer[GWTimeDisplaySpan]) + value2);
		}
		if (engineStopped) {
			return workBuffer[GWState] = GEStateBlitBuffer;
		}
		if ((workBuffer[GWState]) == GEStateCompleted) {
			return 0;
		}
		workBuffer[GWAETStart] = 0;
		workBuffer[GWCurrentY] = ((workBuffer[GWCurrentY]) + 1);
		if (doProfileStats) {
			geProfileTime = interpreterProxy->ioMicroMSecs();
		}
		external = findNextExternalUpdateFromAET();
		if (doProfileStats) {
			workBuffer[GWCountNextAETEntry] = ((workBuffer[GWCountNextAETEntry]) + 1);
			/* begin incrementStat:by: */
			value3 = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeNextAETEntry] = ((workBuffer[GWTimeNextAETEntry]) + value3);
		}
		if (engineStopped) {
			return workBuffer[GWState] = GEStateUpdateEdges;
		}
		if (external) {
			workBuffer[GWState] = GEStateWaitingChange;
			/* begin stopBecauseOf: */
			workBuffer[GWStopReason] = GErrorAETEntry;
			engineStopped = 1;
			return null;
		}
	}
}


/*	Proceed rendering the current scan line.
	This method may be called after some Smalltalk code has been executed inbetween. */
/*	This is the main rendering entry */

static sqInt proceedRenderingScanline(void) {
    sqInt external;
    sqInt state;
    sqInt value;
    sqInt value1;
    sqInt value2;
    sqInt value3;

	state = workBuffer[GWState];
	if (state == GEStateUnlocked) {
		initializeGETProcessing();
		if (engineStopped) {
			return 0;
		}
		state = GEStateAddingFromGET;
	}
	if (state == GEStateAddingFromGET) {
		if (doProfileStats) {
			geProfileTime = interpreterProxy->ioMicroMSecs();
		}
		external = findNextExternalEntryFromGET();
		if (doProfileStats) {
			workBuffer[GWCountNextGETEntry] = ((workBuffer[GWCountNextGETEntry]) + 1);
			/* begin incrementStat:by: */
			value = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeNextGETEntry] = ((workBuffer[GWTimeNextGETEntry]) + value);
		}
		if (engineStopped) {
			return workBuffer[GWState] = GEStateAddingFromGET;
		}
		if (external) {
			workBuffer[GWState] = GEStateWaitingForEdge;
			/* begin stopBecauseOf: */
			workBuffer[GWStopReason] = GErrorGETEntry;
			engineStopped = 1;
			return null;
		}
		workBuffer[GWAETStart] = 0;
		/* begin wbStackClear */
		workBuffer[GWBufferTop] = (workBuffer[GWSize]);
		workBuffer[GWClearSpanBuffer] = 1;
		state = GEStateScanningAET;
	}
	if (state == GEStateScanningAET) {
		if (doProfileStats) {
			geProfileTime = interpreterProxy->ioMicroMSecs();
		}
		if (((workBuffer[GWClearSpanBuffer]) != 0) && (((workBuffer[GWCurrentY]) & (workBuffer[GWAAScanMask])) == 0)) {
			clearSpanBuffer();
		}
		workBuffer[GWClearSpanBuffer] = 0;
		external = findNextExternalFillFromAET();
		if (doProfileStats) {
			workBuffer[GWCountNextFillEntry] = ((workBuffer[GWCountNextFillEntry]) + 1);
			/* begin incrementStat:by: */
			value1 = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeNextFillEntry] = ((workBuffer[GWTimeNextFillEntry]) + value1);
		}
		if (engineStopped) {
			return workBuffer[GWState] = GEStateScanningAET;
		}
		if (external) {
			workBuffer[GWState] = GEStateWaitingForFill;
			/* begin stopBecauseOf: */
			workBuffer[GWStopReason] = GErrorFillEntry;
			engineStopped = 1;
			return null;
		}
		state = GEStateBlitBuffer;
		/* begin wbStackClear */
		workBuffer[GWBufferTop] = (workBuffer[GWSize]);
		workBuffer[GWSpanEndAA] = 0;
	}
	if (state == GEStateBlitBuffer) {
		if (doProfileStats) {
			geProfileTime = interpreterProxy->ioMicroMSecs();
		}
		if (((workBuffer[GWCurrentY]) & (workBuffer[GWAAScanMask])) == (workBuffer[GWAAScanMask])) {
			displaySpanBufferAt(workBuffer[GWCurrentY]);
			postDisplayAction();
		}
		if (doProfileStats) {
			workBuffer[GWCountDisplaySpan] = ((workBuffer[GWCountDisplaySpan]) + 1);
			/* begin incrementStat:by: */
			value2 = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeDisplaySpan] = ((workBuffer[GWTimeDisplaySpan]) + value2);
		}
		if (engineStopped) {
			return workBuffer[GWState] = GEStateBlitBuffer;
		}
		if ((workBuffer[GWState]) == GEStateCompleted) {
			return 0;
		}
		state = GEStateUpdateEdges;
		workBuffer[GWAETStart] = 0;
		workBuffer[GWCurrentY] = ((workBuffer[GWCurrentY]) + 1);
	}
	if (state == GEStateUpdateEdges) {
		if (doProfileStats) {
			geProfileTime = interpreterProxy->ioMicroMSecs();
		}
		external = findNextExternalUpdateFromAET();
		if (doProfileStats) {
			workBuffer[GWCountNextAETEntry] = ((workBuffer[GWCountNextAETEntry]) + 1);
			/* begin incrementStat:by: */
			value3 = (interpreterProxy->ioMicroMSecs()) - geProfileTime;
			workBuffer[GWTimeNextAETEntry] = ((workBuffer[GWTimeNextAETEntry]) + value3);
		}
		if (engineStopped) {
			return workBuffer[GWState] = GEStateUpdateEdges;
		}
		if (external) {
			workBuffer[GWState] = GEStateWaitingChange;
			/* begin stopBecauseOf: */
			workBuffer[GWStopReason] = GErrorAETEntry;
			engineStopped = 1;
			return null;
		}
		workBuffer[GWState] = GEStateAddingFromGET;
	}
}


/*	Load the minimal required state from the engineOop, e.g., just the work buffer. */

static sqInt quickLoadEngineFrom(sqInt engineOop) {
	if (interpreterProxy->failed()) {
		return 0;
	}
	if ((engineOop & 1)) {
		return 0;
	}
	if (!(interpreterProxy->isPointers(engineOop))) {
		return 0;
	}
	if ((interpreterProxy->slotSizeOf(engineOop)) < BEBalloonEngineSize) {
		return 0;
	}
	engine = engineOop;
	if (!(loadWorkBufferFrom(interpreterProxy->fetchPointerofObject(BEWorkBufferIndex, engineOop)))) {
		return 0;
	}
	workBuffer[GWStopReason] = 0;
	objUsed = workBuffer[GWObjUsed];
	engineStopped = 0;
	return 1;
}

static sqInt quickLoadEngineFromrequiredState(sqInt oop, sqInt requiredState) {
	if (!(quickLoadEngineFrom(oop))) {
		return 0;
	}
	if ((workBuffer[GWState]) == requiredState) {
		return 1;
	}
	workBuffer[GWStopReason] = GErrorBadState;
	return 0;
}

static sqInt quickLoadEngineFromrequiredStateor(sqInt oop, sqInt requiredState, sqInt alternativeState) {
	if (!(quickLoadEngineFrom(oop))) {
		return 0;
	}
	if ((workBuffer[GWState]) == requiredState) {
		return 1;
	}
	if ((workBuffer[GWState]) == alternativeState) {
		return 1;
	}
	workBuffer[GWStopReason] = GErrorBadState;
	return 0;
}


/*	Sort elements i through j of self to be nondescending according to
	sortBlock. */
/*	Note: The original loop has been heavily re-written for C translation */

static sqInt quickSortGlobalEdgeTablefromto(int *array, sqInt i, sqInt j) {
    sqInt again;
    sqInt before;
    sqInt di;
    sqInt dij;
    sqInt dj;
    sqInt ij;
    sqInt k;
    sqInt l;
    sqInt n;
    sqInt tmp;
    sqInt tt;

	if (((n = (j + 1) - i)) <= 1) {
		return 0;
	}
	di = array[i];
	dj = array[j];

	/* i.e., should di precede dj? */

	before = getSortsbefore(di, dj);
	if (!(before)) {
		tmp = array[i];
		array[i] = (array[j]);
		array[j] = tmp;
		tt = di;
		di = dj;
		dj = tt;
	}
	if (n <= 2) {
		return 0;
	}

	/* ij is the midpoint of i and j. */

	ij = ((sqInt) (i + j) >> 1);

	/* Sort di,dij,dj.  Make dij be their median. */

	dij = array[ij];

	/* i.e. should di precede dij? */

	before = getSortsbefore(di, dij);
	if (before) {

		/* i.e., should dij precede dj? */

		before = getSortsbefore(dij, dj);
		if (!(before)) {

			/* i.e., should dij precede dj? */

			tmp = array[j];
			array[j] = (array[ij]);
			array[ij] = tmp;
			dij = dj;
		}
	} else {

		/* i.e. di should come after dij */

		tmp = array[i];
		array[i] = (array[ij]);
		array[ij] = tmp;
		dij = di;
	}
	if (n <= 3) {
		return 0;
	}
	k = i;
	l = j;
	again = 1;
	while (again) {
		before = 1;
		while (before) {
			if (k <= ((l -= 1))) {
				tmp = array[l];
				before = getSortsbefore(dij, tmp);
			} else {
				before = 0;
			}
		}
		before = 1;
		while (before) {
			if (((k += 1)) <= l) {
				tmp = array[k];
				before = getSortsbefore(tmp, dij);
			} else {
				before = 0;
			}
		}
		again = k <= l;
		if (again) {
			tmp = array[k];
			array[k] = (array[l]);
			array[l] = tmp;
		}
	}
	quickSortGlobalEdgeTablefromto(array, i, l);
	quickSortGlobalEdgeTablefromto(array, k, j);
}

static int * rShiftTable(void) {
    static int theTable[17] =
		{0, 5, 4, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1};

	return theTable;
}

static sqInt removeFirstAETEntry(void) {
    sqInt index;

	index = workBuffer[GWAETStart];
	workBuffer[GWAETUsed] = ((workBuffer[GWAETUsed]) - 1);
	while (index < (workBuffer[GWAETUsed])) {
		aetBuffer[index] = (aetBuffer[index + 1]);
		index += 1;
	}
}

static sqInt resetGraphicsEngineStats(void) {
	workBuffer[GWTimeInitializing] = 0;
	workBuffer[GWTimeFinishTest] = 0;
	workBuffer[GWTimeNextGETEntry] = 0;
	workBuffer[GWTimeAddAETEntry] = 0;
	workBuffer[GWTimeNextFillEntry] = 0;
	workBuffer[GWTimeMergeFill] = 0;
	workBuffer[GWTimeDisplaySpan] = 0;
	workBuffer[GWTimeNextAETEntry] = 0;
	workBuffer[GWTimeChangeAETEntry] = 0;
	workBuffer[GWCountInitializing] = 0;
	workBuffer[GWCountFinishTest] = 0;
	workBuffer[GWCountNextGETEntry] = 0;
	workBuffer[GWCountAddAETEntry] = 0;
	workBuffer[GWCountNextFillEntry] = 0;
	workBuffer[GWCountMergeFill] = 0;
	workBuffer[GWCountDisplaySpan] = 0;
	workBuffer[GWCountNextAETEntry] = 0;
	workBuffer[GWCountChangeAETEntry] = 0;
	workBuffer[GWBezierMonotonSubdivisions] = 0;
	workBuffer[GWBezierHeightSubdivisions] = 0;
	workBuffer[GWBezierOverflowSubdivisions] = 0;
	workBuffer[GWBezierLineConversions] = 0;
}

static sqInt resortFirstAETEntry(void) {
    sqInt edge;
    sqInt leftEdge;
    sqInt xValue;

	if ((workBuffer[GWAETStart]) == 0) {
		return null;
	}
	edge = aetBuffer[workBuffer[GWAETStart]];
	xValue = objBuffer[edge + GEXValue];
	leftEdge = aetBuffer[(workBuffer[GWAETStart]) - 1];
	if ((objBuffer[leftEdge + GEXValue]) <= xValue) {
		return null;
	}
	moveAETEntryFromedgex(workBuffer[GWAETStart], edge, xValue);
}


/*	Set the anti-aliasing level. Three levels are supported:
		1 - No antialiasing
		2 - 2x2 unweighted anti-aliasing
		4 - 4x4 unweighted anti-aliasing.
	 */

static sqInt setAALevel(sqInt level) {
    sqInt aaLevel;

	if (level >= 4) {
		aaLevel = 4;
	}
	if ((level >= 2) && (level < 4)) {
		aaLevel = 2;
	}
	if (level < 2) {
		aaLevel = 1;
	}
	workBuffer[GWAALevel] = aaLevel;
	if (aaLevel == 1) {
		workBuffer[GWAAShift] = 0;
		workBuffer[GWAAColorMask] = 4294967295U;
		workBuffer[GWAAScanMask] = 0;
	}
	if (aaLevel == 2) {
		workBuffer[GWAAShift] = 1;
		workBuffer[GWAAColorMask] = 4244438268U;
		workBuffer[GWAAScanMask] = 1;
	}
	if (aaLevel == 4) {
		workBuffer[GWAAShift] = 2;
		workBuffer[GWAAColorMask] = 4042322160U;
		workBuffer[GWAAScanMask] = 3;
	}
	workBuffer[GWAAColorShift] = ((workBuffer[GWAAShift]) * 2);
	workBuffer[GWAAHalfPixel] = (workBuffer[GWAAShift]);
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

static sqInt showFilldepthrightX(sqInt fillIndex, sqInt depth, sqInt rightX) {
	if (!(wbStackPush(3))) {
		return null;
	}
	workBuffer[(workBuffer[GWBufferTop]) + 0] = fillIndex;
	workBuffer[(workBuffer[GWBufferTop]) + (0 + 1)] = depth;
	workBuffer[(workBuffer[GWBufferTop]) + (0 + 2)] = rightX;
	if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 3) {
		return null;
	}
	if (fillSortsbefore(0, ((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)) {
		workBuffer[(workBuffer[GWBufferTop]) + 0] = (workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)]);
		workBuffer[(workBuffer[GWBufferTop]) + (0 + 1)] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 1)]);
		workBuffer[(workBuffer[GWBufferTop]) + (0 + 2)] = (workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)]);
		workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)] = fillIndex;
		workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 1)] = depth;
		workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)] = rightX;
	}
}

static int * smallSqrtTable(void) {
    static int theTable[32] = 
	{0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6};

	return theTable;
}


/*	Initialize the bezier at yValue.
	TODO: Check if reducing maxSteps from 2*deltaY to deltaY 
		brings a *significant* performance improvement.
		In theory this should make for double step performance
		but will cost in quality. Might be that the AA stuff will
		compensate for this - but I'm not really sure. */

static sqInt stepToFirstBezierInat(sqInt bezier, sqInt yValue) {
    sqInt deltaY;
    sqInt endX;
    sqInt endY;
    sqInt fwDDx;
    sqInt fwDDy;
    sqInt fwDx;
    sqInt fwDy;
    sqInt fwX1;
    sqInt fwX2;
    sqInt fwY1;
    sqInt fwY2;
    sqInt maxSteps;
    sqInt scaledStepSize;
    sqInt squaredStepSize;
    sqInt startX;
    sqInt startY;
    int *updateData;
    sqInt viaX;
    sqInt viaY;
    sqInt xValue;
    sqInt fwDx1;
    sqInt fwDy1;
    sqInt lastX;
    sqInt lastY;
    sqInt minY;
    sqInt word1;
    sqInt word2;

	if ((!((((objBuffer[bezier + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveWide) != 0)) && (yValue >= (objBuffer[bezier + GBEndY]))) {
		return objBuffer[bezier + GENumLines] = 0;
	}
	startX = objBuffer[bezier + GEXValue];
	startY = objBuffer[bezier + GEYValue];
	viaX = objBuffer[bezier + GBViaX];
	viaY = objBuffer[bezier + GBViaY];
	endX = objBuffer[bezier + GBEndX];
	endY = objBuffer[bezier + GBEndY];

	/* Initialize integer forward differencing */

	deltaY = endY - startY;
	fwX1 = (viaX - startX) * 2;
	fwX2 = (startX + endX) - (viaX * 2);
	fwY1 = (viaY - startY) * 2;
	fwY2 = (startY + endY) - (viaY * 2);
	maxSteps = deltaY * 2;
	if (maxSteps < 2) {
		maxSteps = 2;
	}
	scaledStepSize = 16777216 / maxSteps;
	/* begin absoluteSquared8Dot24: */
	word1 = scaledStepSize & 65535;
	word2 = (((usqInt) scaledStepSize >> 16)) & 255;
	squaredStepSize = ((usqInt) (((((usqInt) (((unsigned) (word1 * word1))) >> 16)) + ((word1 * word2) * 2)) + (((usqInt) (word2 * word2) << 16))) >> 8);
	fwDx = fwX1 * scaledStepSize;
	fwDDx = (fwX2 * squaredStepSize) * 2;
	fwDx += ((sqInt) fwDDx >> 1);
	fwDy = fwY1 * scaledStepSize;
	fwDDy = (fwY2 * squaredStepSize) * 2;

	/* Store the values */

	fwDy += ((sqInt) fwDDy >> 1);
	objBuffer[bezier + GENumLines] = deltaY;
	updateData = (objBuffer + bezier) + GBUpdateData;
	updateData[GBUpdateX] = (startX * 256);
	updateData[GBUpdateY] = (startY * 256);
	updateData[GBUpdateDX] = fwDx;
	updateData[GBUpdateDY] = fwDy;
	updateData[GBUpdateDDX] = fwDDx;
	updateData[GBUpdateDDY] = fwDDy;
	if (!(((startY = objBuffer[bezier + GEYValue])) == yValue)) {
		/* begin stepToNextBezierIn:at: */
		/* begin stepToNextBezierForward:at: */
		lastX = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateX];
		lastY = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateY];
		fwDx1 = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDX];
		fwDy1 = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDY];
		minY = yValue * 256;
		while ((minY > lastY) && (fwDy1 >= 0)) {
			lastX += ((sqInt) (fwDx1 + 32768) >> 16);
			lastY += ((sqInt) (fwDy1 + 32768) >> 16);
			fwDx1 += (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDDX];
			fwDy1 += (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDDY];
		}
		(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateX] = lastX;
		(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateY] = lastY;
		(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDX] = fwDx1;
		(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDY] = fwDy1;
		xValue = ((sqInt) lastX >> 8);
		objBuffer[bezier + GEXValue] = xValue;
		objBuffer[bezier + GENumLines] = (deltaY - (yValue - startY));
	}
}


/*	Initialize the line at yValue */

static sqInt stepToFirstLineInat(sqInt line, sqInt yValue) {
    sqInt deltaX;
    sqInt deltaY;
    sqInt error;
    sqInt errorAdjUp;
    sqInt i;
    sqInt startY;
    sqInt widthX;
    sqInt xDir;
    sqInt xInc;
    sqInt err;
    sqInt x;

	if ((!((((objBuffer[line + GEObjectType]) & GEPrimitiveTypeMask) & GEPrimitiveWide) != 0)) && (yValue >= (objBuffer[line + GLEndY]))) {
		return objBuffer[line + GENumLines] = 0;
	}
	deltaX = (objBuffer[line + GLEndX]) - (objBuffer[line + GEXValue]);

	/* Check if edge goes left to right */

	deltaY = (objBuffer[line + GLEndY]) - (objBuffer[line + GEYValue]);
	if (deltaX >= 0) {
		xDir = 1;
		widthX = deltaX;
		error = 0;
	} else {
		xDir = -1;
		widthX = 0 - deltaX;
		error = 1 - deltaY;
	}
	if (deltaY == 0) {

		/* No error for horizontal edges */

		error = 0;

		/* Encodes width and direction */

		xInc = deltaX;
		errorAdjUp = 0;
	} else {
		if (deltaY > widthX) {

			/* Check if edge is y-major */
			/* Note: The '>' instead of '>=' could be important here... */

			xInc = 0;
			errorAdjUp = widthX;
		} else {
			xInc = (widthX / deltaY) * xDir;
			errorAdjUp = widthX % deltaY;
		}
	}
	objBuffer[line + GENumLines] = deltaY;
	objBuffer[line + GLXDirection] = xDir;
	objBuffer[line + GLXIncrement] = xInc;
	objBuffer[line + GLError] = error;
	objBuffer[line + GLErrorAdjUp] = errorAdjUp;
	objBuffer[line + GLErrorAdjDown] = deltaY;
	if (!(((startY = objBuffer[line + GEYValue])) == yValue)) {
		for (i = startY; i <= (yValue - 1); i += 1) {
			/* begin stepToNextLineIn:at: */
			x = (objBuffer[line + GEXValue]) + (objBuffer[line + GLXIncrement]);
			err = (objBuffer[line + GLError]) + (objBuffer[line + GLErrorAdjUp]);
			if (err > 0) {
				x += objBuffer[line + GLXDirection];
				err -= objBuffer[line + GLErrorAdjDown];
			}
			objBuffer[line + GLError] = err;
			objBuffer[line + GEXValue] = x;
		}
		objBuffer[line + GENumLines] = (deltaY - (yValue - startY));
	}
}


/*	Initialize the bezier at yValue */

static sqInt stepToFirstWideBezierInat(sqInt bezier, sqInt yValue) {
    sqInt endX;
    sqInt i;
    sqInt lineOffset;
    sqInt lineWidth;
    sqInt nLines;
    sqInt startY;
    sqInt xDir;
    sqInt yEntry;
    sqInt yExit;


	/* Get some values */

	lineWidth = objBuffer[bezier + GBWideExtent];

	/* Compute the incremental values of the bezier */

	lineOffset = ((sqInt) lineWidth >> 1);
	endX = objBuffer[bezier + GBEndX];
	startY = objBuffer[bezier + GEYValue];
	stepToFirstBezierInat(bezier, startY);

	/* Copy the incremental update data */

	nLines = objBuffer[bezier + GENumLines];
	for (i = 0; i <= 5; i += 1) {
		((objBuffer + bezier) + GBWideUpdateData)[i] = (((objBuffer + bezier) + GBUpdateData)[i]);
	}
	xDir = ((objBuffer + bezier) + GBUpdateData)[GBUpdateDX];
	if (xDir == 0) {
		((objBuffer + bezier) + GBUpdateData)[GBUpdateDDX];
	}
	if (xDir >= 0) {
		xDir = 1;
	} else {
		xDir = -1;
	}
	if (xDir < 0) {
		adjustWideBezierLeftwidthoffsetendX(bezier, lineWidth, lineOffset, endX);
	} else {
		adjustWideBezierRightwidthoffsetendX(bezier, lineWidth, lineOffset, endX);
	}
	if (nLines == 0) {
		((objBuffer + bezier) + GBUpdateData)[GBUpdateX] = ((objBuffer[bezier + GBFinalX]) * 256);
	}
	objBuffer[bezier + GENumLines] = (nLines + lineWidth);

	/* turned on at lineOffset */

	yEntry = 0;

	/* turned off at zero */

	yExit = (0 - nLines) - lineOffset;
	objBuffer[bezier + GBWideEntry] = yEntry;
	objBuffer[bezier + GBWideExit] = yExit;
	if ((yEntry >= lineOffset) && (yExit < 0)) {
		objBuffer[bezier + GEObjectType] = (((objBuffer[bezier + GEObjectType]) & GEPrimitiveTypeMask) & (~GEEdgeFillsInvalid));
	} else {
		objBuffer[bezier + GEObjectType] = (((objBuffer[bezier + GEObjectType]) & GEPrimitiveTypeMask) | GEEdgeFillsInvalid);
	}
	computeFinalWideBezierValueswidth(bezier, lineWidth);
	if (!(startY == yValue)) {
		for (i = startY; i <= (yValue - 1); i += 1) {
			stepToNextWideBezierInat(bezier, i);
		}
		objBuffer[bezier + GENumLines] = ((objBuffer[bezier + GENumLines]) - (yValue - startY));
	}
}


/*	Initialize the wide line at yValue. */

static sqInt stepToFirstWideLineInat(sqInt line, sqInt yValue) {
    sqInt i;
    sqInt lineOffset;
    sqInt lineWidth;
    sqInt nLines;
    sqInt startX;
    sqInt startY;
    sqInt xDir;
    sqInt yEntry;
    sqInt yExit;
    sqInt lastX;
    sqInt lineOffset1;
    sqInt lineWidth1;
    sqInt nextX;
    sqInt yEntry1;
    sqInt yExit1;
    sqInt err;
    sqInt x;


	/* Get some values */

	lineWidth = objBuffer[line + GLWideExtent];

	/* Compute the incremental values of the line */

	lineOffset = ((sqInt) lineWidth >> 1);
	startX = objBuffer[line + GEXValue];
	startY = objBuffer[line + GEYValue];
	stepToFirstLineInat(line, startY);
	nLines = objBuffer[line + GENumLines];

	/* Adjust the line to start at the correct X position */

	xDir = objBuffer[line + GLXDirection];
	objBuffer[line + GEXValue] = (startX - lineOffset);
	objBuffer[line + GENumLines] = (nLines + lineWidth);
	if (xDir > 0) {
		objBuffer[line + GLWideWidth] = ((objBuffer[line + GLXIncrement]) + lineWidth);
	} else {
		objBuffer[line + GLWideWidth] = (lineWidth - (objBuffer[line + GLXIncrement]));
		objBuffer[line + GEXValue] = ((objBuffer[line + GEXValue]) + (objBuffer[line + GLXIncrement]));
	}

	/* turned on at lineOffset */

	yEntry = 0;

	/* turned off at zero */

	yExit = (0 - nLines) - lineOffset;
	objBuffer[line + GLWideEntry] = yEntry;
	objBuffer[line + GLWideExit] = yExit;
	if ((yEntry >= lineOffset) && (yExit < 0)) {
		objBuffer[line + GEObjectType] = (((objBuffer[line + GEObjectType]) & GEPrimitiveTypeMask) & (~GEEdgeFillsInvalid));
	} else {
		objBuffer[line + GEObjectType] = (((objBuffer[line + GEObjectType]) & GEPrimitiveTypeMask) | GEEdgeFillsInvalid);
	}
	if (!(startY == yValue)) {
		for (i = startY; i <= (yValue - 1); i += 1) {
			/* begin stepToNextWideLineIn:at: */
			yEntry1 = (objBuffer[line + GLWideEntry]) + 1;
			yExit1 = (objBuffer[line + GLWideExit]) + 1;
			objBuffer[line + GLWideEntry] = yEntry1;
			objBuffer[line + GLWideExit] = yExit1;
			lineWidth1 = objBuffer[line + GLWideExtent];
			lineOffset1 = ((sqInt) lineWidth1 >> 1);
			if (yEntry1 >= lineOffset1) {
				objBuffer[line + GEObjectType] = (((objBuffer[line + GEObjectType]) & GEPrimitiveTypeMask) & (~GEEdgeFillsInvalid));
			}
			if (yExit1 >= 0) {
				objBuffer[line + GEObjectType] = (((objBuffer[line + GEObjectType]) & GEPrimitiveTypeMask) | GEEdgeFillsInvalid);
			}
			lastX = objBuffer[line + GEXValue];
			/* begin stepToNextLineIn:at: */
			x = (objBuffer[line + GEXValue]) + (objBuffer[line + GLXIncrement]);
			err = (objBuffer[line + GLError]) + (objBuffer[line + GLErrorAdjUp]);
			if (err > 0) {
				x += objBuffer[line + GLXDirection];
				err -= objBuffer[line + GLErrorAdjDown];
			}
			objBuffer[line + GLError] = err;
			objBuffer[line + GEXValue] = x;
			nextX = objBuffer[line + GEXValue];
			if ((yEntry1 <= lineWidth1) || ((yExit1 + lineOffset1) >= 0)) {
				adjustWideLineafterSteppingFromto(line, lastX, nextX);
			}
		}
		objBuffer[line + GENumLines] = ((objBuffer[line + GENumLines]) - (yValue - startY));
	}
}


/*	Incrementally step to the next scan line in the given bezier */

static sqInt stepToNextBezierInat(sqInt bezier, sqInt yValue) {
    sqInt xValue;
    sqInt fwDx;
    sqInt fwDy;
    sqInt lastX;
    sqInt lastY;
    sqInt minY;

	/* begin stepToNextBezierForward:at: */
	lastX = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateX];
	lastY = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateY];
	fwDx = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDX];
	fwDy = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDY];
	minY = yValue * 256;
	while ((minY > lastY) && (fwDy >= 0)) {
		lastX += ((sqInt) (fwDx + 32768) >> 16);
		lastY += ((sqInt) (fwDy + 32768) >> 16);
		fwDx += (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDDX];
		fwDy += (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDDY];
	}
	(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateX] = lastX;
	(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateY] = lastY;
	(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDX] = fwDx;
	(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDY] = fwDy;
	xValue = ((sqInt) lastX >> 8);
	objBuffer[bezier + GEXValue] = xValue;
}


/*	Incrementally step to the next scan line in the given line */

static sqInt stepToNextLineInat(sqInt line, sqInt yValue) {
    sqInt err;
    sqInt x;

	x = (objBuffer[line + GEXValue]) + (objBuffer[line + GLXIncrement]);
	err = (objBuffer[line + GLError]) + (objBuffer[line + GLErrorAdjUp]);
	if (err > 0) {
		x += objBuffer[line + GLXDirection];
		err -= objBuffer[line + GLErrorAdjDown];
	}
	objBuffer[line + GLError] = err;
	objBuffer[line + GEXValue] = x;
}


/*	Initialize the current entry in the GET by stepping to the current scan line */

static sqInt stepToNextWideBezier(void) {
	stepToNextWideBezierInat(aetBuffer[workBuffer[GWAETStart]], workBuffer[GWCurrentY]);
}


/*	Incrementally step to the next scan line in the given wide bezier */

static sqInt stepToNextWideBezierInat(sqInt bezier, sqInt yValue) {
    sqInt lineOffset;
    sqInt lineWidth;
    sqInt yEntry;
    sqInt yExit;
    sqInt fwDx;
    sqInt fwDy;
    sqInt lastX;
    sqInt lastY;
    sqInt minY;
    sqInt fwDx1;
    sqInt fwDy1;
    sqInt lastX1;
    sqInt lastY1;
    sqInt minY1;


	/* Don't inline this */

	lineWidth = objBuffer[bezier + GBWideExtent];
	lineOffset = ((sqInt) lineWidth >> 1);
	yEntry = (objBuffer[bezier + GBWideEntry]) + 1;
	yExit = (objBuffer[bezier + GBWideExit]) + 1;
	objBuffer[bezier + GBWideEntry] = yEntry;
	objBuffer[bezier + GBWideExit] = yExit;
	if (yEntry >= lineOffset) {
		objBuffer[bezier + GEObjectType] = (((objBuffer[bezier + GEObjectType]) & GEPrimitiveTypeMask) & (~GEEdgeFillsInvalid));
	}
	if (yExit >= 0) {
		objBuffer[bezier + GEObjectType] = (((objBuffer[bezier + GEObjectType]) & GEPrimitiveTypeMask) | GEEdgeFillsInvalid);
	}
	if ((yExit + lineOffset) < 0) {
		/* begin stepToNextBezierForward:at: */
		lastX = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateX];
		lastY = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateY];
		fwDx = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDX];
		fwDy = (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDY];
		minY = yValue * 256;
		while ((minY > lastY) && (fwDy >= 0)) {
			lastX += ((sqInt) (fwDx + 32768) >> 16);
			lastY += ((sqInt) (fwDy + 32768) >> 16);
			fwDx += (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDDX];
			fwDy += (((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDDY];
		}
		(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateX] = lastX;
		(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateY] = lastY;
		(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDX] = fwDx;
		(((int*) ((objBuffer + bezier) + GBUpdateData)))[GBUpdateDY] = fwDy;
		((sqInt) lastX >> 8);
	} else {
		((objBuffer + bezier) + GBUpdateData)[GBUpdateX] = ((objBuffer[bezier + GBFinalX]) * 256);
	}
	/* begin stepToNextBezierForward:at: */
	lastX1 = (((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateX];
	lastY1 = (((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateY];
	fwDx1 = (((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateDX];
	fwDy1 = (((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateDY];
	minY1 = yValue * 256;
	while ((minY1 > lastY1) && (fwDy1 >= 0)) {
		lastX1 += ((sqInt) (fwDx1 + 32768) >> 16);
		lastY1 += ((sqInt) (fwDy1 + 32768) >> 16);
		fwDx1 += (((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateDDX];
		fwDy1 += (((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateDDY];
	}
	(((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateX] = lastX1;
	(((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateY] = lastY1;
	(((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateDX] = fwDx1;
	(((int*) ((objBuffer + bezier) + GBWideUpdateData)))[GBUpdateDY] = fwDy1;
	((sqInt) lastX1 >> 8);
	computeFinalWideBezierValueswidth(bezier, lineWidth);
}


/*	Incrementally step to the next scan line in the given wide line */

static sqInt stepToNextWideLineInat(sqInt line, sqInt yValue) {
    sqInt lastX;
    sqInt lineOffset;
    sqInt lineWidth;
    sqInt nextX;
    sqInt yEntry;
    sqInt yExit;
    sqInt err;
    sqInt x;


	/* Adjust entry/exit values */

	yEntry = (objBuffer[line + GLWideEntry]) + 1;
	yExit = (objBuffer[line + GLWideExit]) + 1;
	objBuffer[line + GLWideEntry] = yEntry;
	objBuffer[line + GLWideExit] = yExit;
	lineWidth = objBuffer[line + GLWideExtent];
	lineOffset = ((sqInt) lineWidth >> 1);
	if (yEntry >= lineOffset) {
		objBuffer[line + GEObjectType] = (((objBuffer[line + GEObjectType]) & GEPrimitiveTypeMask) & (~GEEdgeFillsInvalid));
	}
	if (yExit >= 0) {
		objBuffer[line + GEObjectType] = (((objBuffer[line + GEObjectType]) & GEPrimitiveTypeMask) | GEEdgeFillsInvalid);
	}
	lastX = objBuffer[line + GEXValue];
	/* begin stepToNextLineIn:at: */
	x = (objBuffer[line + GEXValue]) + (objBuffer[line + GLXIncrement]);
	err = (objBuffer[line + GLError]) + (objBuffer[line + GLErrorAdjUp]);
	if (err > 0) {
		x += objBuffer[line + GLXDirection];
		err -= objBuffer[line + GLErrorAdjDown];
	}
	objBuffer[line + GLError] = err;
	objBuffer[line + GEXValue] = x;

	/* Check for special start/end adjustments */

	nextX = objBuffer[line + GEXValue];
	if ((yEntry <= lineWidth) || ((yExit + lineOffset) >= 0)) {
		adjustWideLineafterSteppingFromto(line, lastX, nextX);
	}
}

static sqInt storeEdgeStateFrominto(sqInt edge, sqInt edgeOop) {
	if ((interpreterProxy->slotSizeOf(edgeOop)) < ETBalloonEdgeDataSize) {
		return interpreterProxy->primitiveFail();
	}
	interpreterProxy->storeIntegerofObjectwithValue(ETIndexIndex, edgeOop, objBuffer[edge + GEObjectIndex]);
	interpreterProxy->storeIntegerofObjectwithValue(ETXValueIndex, edgeOop, objBuffer[edge + GEXValue]);
	interpreterProxy->storeIntegerofObjectwithValue(ETYValueIndex, edgeOop, workBuffer[GWCurrentY]);
	interpreterProxy->storeIntegerofObjectwithValue(ETZValueIndex, edgeOop, objBuffer[edge + GEZValue]);
	interpreterProxy->storeIntegerofObjectwithValue(ETLinesIndex, edgeOop, objBuffer[edge + GENumLines]);
	workBuffer[GWLastExportedEdge] = edge;
}

static sqInt storeFillStateInto(sqInt fillOop) {
    sqInt fillIndex;
    sqInt leftX;
    sqInt rightX;

	fillIndex = workBuffer[GWLastExportedFill];
	leftX = workBuffer[GWLastExportedLeftX];
	rightX = workBuffer[GWLastExportedRightX];
	if ((interpreterProxy->slotSizeOf(fillOop)) < FTBalloonFillDataSize) {
		return interpreterProxy->primitiveFail();
	}
	interpreterProxy->storeIntegerofObjectwithValue(FTIndexIndex, fillOop, objBuffer[fillIndex + GEObjectIndex]);
	interpreterProxy->storeIntegerofObjectwithValue(FTMinXIndex, fillOop, leftX);
	interpreterProxy->storeIntegerofObjectwithValue(FTMaxXIndex, fillOop, rightX);
	interpreterProxy->storeIntegerofObjectwithValue(FTYValueIndex, fillOop, workBuffer[GWCurrentY]);
}

static sqInt storeRenderingState(void) {
    sqInt edgeOop;
    sqInt fillOop;
    sqInt edge;
    sqInt reason;

	if (interpreterProxy->failed()) {
		return null;
	}
	if (engineStopped) {
		/* begin storeStopStateIntoEdge:fill: */
		edgeOop = interpreterProxy->stackObjectValue(1);
		fillOop = interpreterProxy->stackObjectValue(0);
		reason = workBuffer[GWStopReason];
		if (reason == GErrorGETEntry) {
			edge = getBuffer[workBuffer[GWGETStart]];
			storeEdgeStateFrominto(edge, edgeOop);
			workBuffer[GWGETStart] = ((workBuffer[GWGETStart]) + 1);
		}
		if (reason == GErrorFillEntry) {
			storeFillStateInto(fillOop);
		}
		if (reason == GErrorAETEntry) {
			edge = aetBuffer[workBuffer[GWAETStart]];
			storeEdgeStateFrominto(edge, edgeOop);
		}
	}
	/* begin storeEngineStateInto: */
	workBuffer[GWObjUsed] = objUsed;
	interpreterProxy->pop(3);
	interpreterProxy->pushInteger(workBuffer[GWStopReason]);
}


/*	Subdivide the given bezier curve if necessary */

static sqInt subdivideBezier(sqInt index) {
    sqInt deltaX;
    sqInt deltaY;
    sqInt endX;
    sqInt endY;
    sqInt startX;
    sqInt startY;

	startY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 1)];

	/* If the receiver is horizontal, don't do anything */

	endY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)];
	if (endY == startY) {
		return index;
	}
	deltaY = endY - startY;
	if (deltaY < 0) {
		deltaY = 0 - deltaY;
	}
	if (deltaY > 255) {
		workBuffer[GWBezierHeightSubdivisions] = ((workBuffer[GWBezierHeightSubdivisions]) + 1);
		return computeBezierSplitAtHalf(index);
	}
	startX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 0)];
	endX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 4)];
	deltaX = endX - startX;
	if (deltaX < 0) {
		deltaX = 0 - deltaX;
	}
	if ((deltaY * 32) < deltaX) {
		workBuffer[GWBezierOverflowSubdivisions] = ((workBuffer[GWBezierOverflowSubdivisions]) + 1);
		return computeBezierSplitAtHalf(index);
	}
	return index;
}


/*	Recursively subdivide the curve on the bezier stack. */

static sqInt subdivideBezierFrom(sqInt index) {
    sqInt index1;
    sqInt index2;
    sqInt otherIndex;

	otherIndex = subdivideBezier(index);
	if (!(otherIndex == index)) {
		index1 = subdivideBezierFrom(index);
		if (engineStopped) {
			return 0;
		}
		index2 = subdivideBezierFrom(otherIndex);
		if (engineStopped) {
			return 0;
		}
		if (index1 >= index2) {
			return index1;
		} else {
			return index2;
		}
	}
	return index;
}


/*	Check if the given bezier curve is monoton in Y, and, if desired in X. 
	If not, subdivide it */

static sqInt subdivideToBeMonotoninX(sqInt base, sqInt doTestX) {
    sqInt base2;
    sqInt index1;
    sqInt index2;

	base2 = (index1 = (index2 = subdivideToBeMonotonInY(base)));
	if (doTestX) {
		index1 = subdivideToBeMonotonInX(base);
	}
	if (index1 > index2) {
		index2 = index1;
	}
	if ((base != base2) && (doTestX)) {
		index1 = subdivideToBeMonotonInX(base2);
	}
	if (index1 > index2) {
		index2 = index1;
	}
	return index2;
}


/*	Check if the given bezier curve is monoton in X. If not, subdivide it */

static sqInt subdivideToBeMonotonInX(sqInt index) {
    sqInt denom;
    sqInt dx1;
    sqInt dx2;
    sqInt endX;
    sqInt num;
    sqInt startX;
    sqInt viaX;

	startX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 0)];
	viaX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 2)];
	endX = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 4)];
	dx1 = viaX - startX;
	dx2 = endX - viaX;
	if ((dx1 * dx2) >= 0) {
		return index;
	}
	workBuffer[GWBezierMonotonSubdivisions] = ((workBuffer[GWBezierMonotonSubdivisions]) + 1);
	denom = dx2 - dx1;
	num = dx1;
	if (num < 0) {
		num = 0 - num;
	}
	if (denom < 0) {
		denom = 0 - denom;
	}
	return computeBeziersplitAt(index, (((double) num )) / (((double) denom )));
}


/*	Check if the given bezier curve is monoton in Y. If not, subdivide it */

static sqInt subdivideToBeMonotonInY(sqInt index) {
    sqInt denom;
    sqInt dy1;
    sqInt dy2;
    sqInt endY;
    sqInt num;
    sqInt startY;
    sqInt viaY;

	startY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 1)];
	viaY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 3)];
	endY = workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - index) + 5)];
	dy1 = viaY - startY;
	dy2 = endY - viaY;
	if ((dy1 * dy2) >= 0) {
		return index;
	}
	workBuffer[GWBezierMonotonSubdivisions] = ((workBuffer[GWBezierMonotonSubdivisions]) + 1);
	denom = dy2 - dy1;
	num = dy1;
	if (num < 0) {
		num = 0 - num;
	}
	if (denom < 0) {
		denom = 0 - denom;
	}
	return computeBeziersplitAt(index, (((double) num )) / (((double) denom )));
}


/*	Make the fill style with the given index either visible or invisible */

static sqInt toggleFilldepthrightX(sqInt fillIndex, sqInt depth, sqInt rightX) {
    sqInt hidden;

	if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
		if (wbStackPush(3)) {
			workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)] = fillIndex;
			workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 1)] = depth;
			workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)] = rightX;
		}
	} else {
		hidden = hideFilldepth(fillIndex, depth);
		if (!(hidden)) {
			showFilldepthrightX(fillIndex, depth, rightX);
		}
	}
}

static sqInt toggleFillsOf(sqInt edge) {
    sqInt depth;
    sqInt fillIndex;
    sqInt leftX;

	if (!(needAvailableSpace(3 * 2))) {
		return null;
	}
	depth = (objBuffer[edge + GEZValue]) << 1;
	fillIndex = objBuffer[edge + GEFillIndexLeft];
	if (!(fillIndex == 0)) {
		toggleFilldepthrightX(fillIndex, depth, 999999999);
	}
	fillIndex = objBuffer[edge + GEFillIndexRight];
	if (!(fillIndex == 0)) {
		toggleFilldepthrightX(fillIndex, depth, 999999999);
	}
	/* begin quickRemoveInvalidFillsAt: */
	leftX = objBuffer[edge + GEXValue];
	if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
		goto l1;
	}
	while ((topRightX()) <= leftX) {
		hideFilldepth(topFill(), topDepth());
		if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
			goto l1;
		}
	}
l1:	/* end quickRemoveInvalidFillsAt: */;
}

static sqInt toggleWideFillOf(sqInt edge) {
    sqInt depth;
    sqInt fill;
    sqInt index;
    sqInt lineWidth;
    sqInt rightX;
    sqInt type;
    sqInt leftX;

	type = ((usqInt) ((objBuffer[edge + GEObjectType]) & GEPrimitiveTypeMask)) >> 1;
	dispatchedValue = edge;
	switch (type) {
	case 0:
	case 1:
		errorWrongIndex();
		break;
	case 2:
		dispatchReturnValue = objBuffer[dispatchedValue + GLWideWidth];
		break;
	case 3:
		dispatchReturnValue = objBuffer[dispatchedValue + GBWideWidth];
		break;
	}
	lineWidth = dispatchReturnValue;
	switch (type) {
	case 0:
	case 1:
		errorWrongIndex();
		break;
	case 2:
		dispatchReturnValue = objBuffer[dispatchedValue + GLWideFill];
		break;
	case 3:
		dispatchReturnValue = objBuffer[dispatchedValue + GBWideFill];
		break;
	}
	fill = dispatchReturnValue;
	if (fill == 0) {
		return null;
	}
	if (!(needAvailableSpace(3))) {
		return null;
	}

	/* So lines sort before interior fills */

	depth = ((objBuffer[edge + GEZValue]) << 1) + 1;
	rightX = (objBuffer[edge + GEXValue]) + lineWidth;
	index = findStackFilldepth(fill, depth);
	if (index == -1) {
		showFilldepthrightX(fill, depth, rightX);
	} else {
		if ((workBuffer[(workBuffer[GWBufferTop]) + (index + 2)]) < rightX) {
			workBuffer[(workBuffer[GWBufferTop]) + (index + 2)] = rightX;
		}
	}
	/* begin quickRemoveInvalidFillsAt: */
	leftX = objBuffer[edge + GEXValue];
	if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
		goto l1;
	}
	while ((topRightX()) <= leftX) {
		hideFilldepth(topFill(), topDepth());
		if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
			goto l1;
		}
	}
l1:	/* end quickRemoveInvalidFillsAt: */;
}

static sqInt topDepth(void) {
	if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
		return -1;
	} else {
		return workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 1)];
	}
}

static sqInt topFill(void) {
	if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
		return 0;
	} else {
		return workBuffer[(workBuffer[GWBufferTop]) + (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3)];
	}
}

static sqInt topRightX(void) {
	if (((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) == 0) {
		return 999999999;
	} else {
		return workBuffer[(workBuffer[GWBufferTop]) + ((((workBuffer[GWSize]) - (workBuffer[GWBufferTop])) - 3) + 2)];
	}
}

static sqInt transformColor(sqInt fillIndex) {
    sqInt a;
    double  alphaScale;
    sqInt b;
    sqInt g;
    sqInt r;
    float *transform;

	if (!((fillIndex == 0) || ((fillIndex & 4278190080U) != 0))) {
		return fillIndex;
	}
	b = fillIndex & 255;
	g = (((usqInt) fillIndex) >> 8) & 255;
	r = (((usqInt) fillIndex) >> 16) & 255;
	a = (((usqInt) fillIndex) >> 24) & 255;
	if ((workBuffer[GWHasColorTransform]) != 0) {
		transform = ((float *) (workBuffer + GWColorTransform));
		alphaScale = ((a * (transform[6])) + (transform[7])) / a;
		r = ((sqInt)(((r * (transform[0])) + (transform[1])) * alphaScale));
		g = ((sqInt)(((g * (transform[2])) + (transform[3])) * alphaScale));
		b = ((sqInt)(((b * (transform[4])) + (transform[5])) * alphaScale));
		a = a * alphaScale;
		r = ((r < 0) ? 0 : r);
		r = ((r < 255) ? r : 255);
		g = ((g < 0) ? 0 : g);
		g = ((g < 255) ? g : 255);
		b = ((b < 0) ? 0 : b);
		b = ((b < 255) ? b : 255);
		a = ((a < 0) ? 0 : a);
		a = ((a < 255) ? a : 255);
	}
	if (a < 1) {
		return 0;
	}
	if ((a < 255) && ((workBuffer[GWNeedsFlush]) != 0)) {
		/* begin stopBecauseOf: */
		workBuffer[GWStopReason] = GErrorNeedFlush;
		engineStopped = 1;
	}
	return ((b + (g << 8)) + (r << 16)) + (a << 24);
}


/*	Transform the given point. If haveMatrix is true then use the current transformation. */

static sqInt transformPoint(int *point) {
    float *transform;
    sqInt x;
    sqInt y;

	if ((workBuffer[GWHasEdgeTransform]) != 0) {
		/* begin transformPoint:into: */
		/* begin transformPointX:y:into: */
		transform = ((float *) (workBuffer + GWEdgeTransform));
		x = ((sqInt)(((((transform[0]) * (((double) ((((int *) point))[0]) ))) + ((transform[1]) * (((double) ((((int *) point))[1]) )))) + (transform[2])) * (((double) (workBuffer[GWAALevel]) ))));
		y = ((sqInt)(((((transform[3]) * (((double) ((((int *) point))[0]) ))) + ((transform[4]) * (((double) ((((int *) point))[1]) )))) + (transform[5])) * (((double) (workBuffer[GWAALevel]) ))));
		(((int *) point))[0] = x;
		(((int *) point))[1] = y;
	} else {
		point[0] = (((point[0]) + (workBuffer[GWDestOffsetX])) * (workBuffer[GWAALevel]));
		point[1] = (((point[1]) + (workBuffer[GWDestOffsetY])) * (workBuffer[GWAALevel]));
	}
}


/*	Transform the given width */

static sqInt transformWidth(sqInt w) {
    double  deltaX;
    double  deltaY;
    sqInt dstWidth;
    sqInt dstWidth2;

	if (w == 0) {
		return 0;
	}
	(((int *) (workBuffer + GWPoint1)))[0] = 0;
	(((int *) (workBuffer + GWPoint1)))[1] = 0;
	(((int *) (workBuffer + GWPoint2)))[0] = (w * 256);
	(((int *) (workBuffer + GWPoint2)))[1] = 0;
	(((int *) (workBuffer + GWPoint3)))[0] = 0;
	(((int *) (workBuffer + GWPoint3)))[1] = (w * 256);
	/* begin transformPoints: */
	if (3 > 0) {
		transformPoint(((int *) (workBuffer + GWPoint1)));
	}
	if (3 > 1) {
		transformPoint(((int *) (workBuffer + GWPoint2)));
	}
	if (3 > 2) {
		transformPoint(((int *) (workBuffer + GWPoint3)));
	}
	if (3 > 3) {
		transformPoint(((int *) (workBuffer + GWPoint4)));
	}
	deltaX = ((double) (((((int *) (workBuffer + GWPoint2)))[0]) - ((((int *) (workBuffer + GWPoint1)))[0])) );
	deltaY = ((double) (((((int *) (workBuffer + GWPoint2)))[1]) - ((((int *) (workBuffer + GWPoint1)))[1])) );
	dstWidth = ((sqInt) ((((sqInt)(sqrt((deltaX * deltaX) + (deltaY * deltaY))))) + 128) >> 8);
	deltaX = ((double) (((((int *) (workBuffer + GWPoint3)))[0]) - ((((int *) (workBuffer + GWPoint1)))[0])) );
	deltaY = ((double) (((((int *) (workBuffer + GWPoint3)))[1]) - ((((int *) (workBuffer + GWPoint1)))[1])) );
	dstWidth2 = ((sqInt) ((((sqInt)(sqrt((deltaX * deltaX) + (deltaY * deltaY))))) + 128) >> 8);
	if (dstWidth2 < dstWidth) {
		dstWidth = dstWidth2;
	}
	if (dstWidth == 0) {
		return 1;
	} else {
		return dstWidth;
	}
}

static sqInt uncheckedTransformColor(sqInt fillIndex) {
    sqInt a;
    sqInt b;
    sqInt g;
    sqInt r;
    float *transform;

	if (!((workBuffer[GWHasColorTransform]) != 0)) {
		return fillIndex;
	}
	b = fillIndex & 255;
	g = (((usqInt) fillIndex) >> 8) & 255;
	r = (((usqInt) fillIndex) >> 16) & 255;
	a = (((usqInt) fillIndex) >> 24) & 255;
	transform = ((float *) (workBuffer + GWColorTransform));
	r = ((sqInt)((r * (transform[0])) + (transform[1])));
	g = ((sqInt)((g * (transform[2])) + (transform[3])));
	b = ((sqInt)((b * (transform[4])) + (transform[5])));
	a = ((sqInt)((a * (transform[6])) + (transform[7])));
	r = ((r < 0) ? 0 : r);
	r = ((r < 255) ? r : 255);
	g = ((g < 0) ? 0 : g);
	g = ((g < 255) ? g : 255);
	b = ((b < 0) ? 0 : b);
	b = ((b < 255) ? b : 255);
	a = ((a < 0) ? 0 : a);
	a = ((a < 255) ? a : 255);
	if (a < 16) {
		return 0;
	}
	return ((b + (g << 8)) + (r << 16)) + (a << 24);
}

static sqInt wbStackPush(sqInt nItems) {
	if (!(needAvailableSpace(nItems))) {
		return 0;
	}
	workBuffer[GWBufferTop] = ((workBuffer[GWBufferTop]) - nItems);
	return 1;
}


#ifdef SQUEAK_BUILTIN_PLUGIN


void* B2DPlugin_exports[][3] = {
	{"B2DPlugin", "primitiveAddPolygon", (void*)primitiveAddPolygon},
	{"B2DPlugin", "primitiveCopyBuffer", (void*)primitiveCopyBuffer},
	{"B2DPlugin", "primitiveSetClipRect", (void*)primitiveSetClipRect},
	{"B2DPlugin", "primitiveAddRect", (void*)primitiveAddRect},
	{"B2DPlugin", "initialiseModule", (void*)initialiseModule},
	{"B2DPlugin", "primitiveAddGradientFill", (void*)primitiveAddGradientFill},
	{"B2DPlugin", "primitiveSetBitBltPlugin", (void*)primitiveSetBitBltPlugin},
	{"B2DPlugin", "primitiveRegisterExternalEdge", (void*)primitiveRegisterExternalEdge},
	{"B2DPlugin", "primitiveGetClipRect", (void*)primitiveGetClipRect},
	{"B2DPlugin", "primitiveGetOffset", (void*)primitiveGetOffset},
	{"B2DPlugin", "primitiveAddBezier", (void*)primitiveAddBezier},
	{"B2DPlugin", "primitiveRenderImage", (void*)primitiveRenderImage},
	{"B2DPlugin", "primitiveInitializeProcessing", (void*)primitiveInitializeProcessing},
	{"B2DPlugin", "primitiveSetDepth", (void*)primitiveSetDepth},
	{"B2DPlugin", "primitiveAddBezierShape", (void*)primitiveAddBezierShape},
	{"B2DPlugin", "getModuleName", (void*)getModuleName},
	{"B2DPlugin", "primitiveAddBitmapFill", (void*)primitiveAddBitmapFill},
	{"B2DPlugin", "primitiveSetEdgeTransform", (void*)primitiveSetEdgeTransform},
	{"B2DPlugin", "primitiveGetTimes", (void*)primitiveGetTimes},
	{"B2DPlugin", "primitiveNextActiveEdgeEntry", (void*)primitiveNextActiveEdgeEntry},
	{"B2DPlugin", "primitiveGetDepth", (void*)primitiveGetDepth},
	{"B2DPlugin", "primitiveAbortProcessing", (void*)primitiveAbortProcessing},
	{"B2DPlugin", "primitiveNextGlobalEdgeEntry", (void*)primitiveNextGlobalEdgeEntry},
	{"B2DPlugin", "primitiveGetFailureReason", (void*)primitiveGetFailureReason},
	{"B2DPlugin", "primitiveDisplaySpanBuffer", (void*)primitiveDisplaySpanBuffer},
	{"B2DPlugin", "moduleUnloaded", (void*)moduleUnloaded},
	{"B2DPlugin", "primitiveChangedActiveEdgeEntry", (void*)primitiveChangedActiveEdgeEntry},
	{"B2DPlugin", "primitiveGetCounts", (void*)primitiveGetCounts},
	{"B2DPlugin", "primitiveRenderScanline", (void*)primitiveRenderScanline},
	{"B2DPlugin", "primitiveNeedsFlush", (void*)primitiveNeedsFlush},
	{"B2DPlugin", "primitiveFinishedProcessing", (void*)primitiveFinishedProcessing},
	{"B2DPlugin", "primitiveGetBezierStats", (void*)primitiveGetBezierStats},
	{"B2DPlugin", "setInterpreter", (void*)setInterpreter},
	{"B2DPlugin", "primitiveAddLine", (void*)primitiveAddLine},
	{"B2DPlugin", "primitiveSetOffset", (void*)primitiveSetOffset},
	{"B2DPlugin", "primitiveInitializeBuffer", (void*)primitiveInitializeBuffer},
	{"B2DPlugin", "primitiveNextFillEntry", (void*)primitiveNextFillEntry},
	{"B2DPlugin", "primitiveDoProfileStats", (void*)primitiveDoProfileStats},
	{"B2DPlugin", "primitiveAddActiveEdgeEntry", (void*)primitiveAddActiveEdgeEntry},
	{"B2DPlugin", "primitiveSetColorTransform", (void*)primitiveSetColorTransform},
	{"B2DPlugin", "primitiveAddCompressedShape", (void*)primitiveAddCompressedShape},
	{"B2DPlugin", "primitiveNeedsFlushPut", (void*)primitiveNeedsFlushPut},
	{"B2DPlugin", "primitiveSetAALevel", (void*)primitiveSetAALevel},
	{"B2DPlugin", "primitiveAddOval", (void*)primitiveAddOval},
	{"B2DPlugin", "primitiveMergeFillFrom", (void*)primitiveMergeFillFrom},
	{"B2DPlugin", "primitiveRegisterExternalFill", (void*)primitiveRegisterExternalFill},
	{"B2DPlugin", "primitiveGetAALevel", (void*)primitiveGetAALevel},
	{NULL, NULL, NULL}
};


#endif /* ifdef SQ_BUILTIN_PLUGIN */

