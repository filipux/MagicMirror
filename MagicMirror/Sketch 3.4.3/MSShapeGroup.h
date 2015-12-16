//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSShapeGroup.h"
#import "MSLayer.h"

@class NSBezierPath;

@protocol MSShapeGroup <MSLayer, NSObject>

@property(retain, nonatomic) MSStyle *style; // @synthesize style=_style;

@property(nonatomic) BOOL isFlippedHorizontal; // @synthesize isFlippedHorizontal=_isFlippedHorizontal;
@property(nonatomic) BOOL isFlippedVertical; // @synthesize isFlippedVertical=_isFlippedVertical;

- (void)mm_setSource:(NSString *)source;
- (MSArray *)layers;
+ (void)cacheDecorations;
+ (id)closedArrowDecoration;
+ (struct CGRect)groupBoundsForLayers:(id)arg1;
+ (BOOL)groupBoundsShouldBeIntegral;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)lineDecoration;
+ (id)openArrowDecoration;
+ (id)pathForDecorationType:(unsigned long long)arg1;
+ (id)shapeWithBezierPath:(id)arg1;
+ (id)shapeWithPath:(id)arg1;
+ (unsigned long long)traits;

- (id)CSSAttributeString;
- (id)CSSAttributes;
- (id)_bezierPathInSize:(struct CGSize)arg1;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)addMaskWithElement:(id)arg1 parentElement:(id)arg2 attributes:(id)arg3 exporter:(id)arg4;
- (void)addSlice:(id)arg1;
- (void)adjustStyleToFitSubPaths;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (void)applyPropertiesToBezier:(id)arg1;
- (id)bezierLinePreviewInRect:(struct CGRect)arg1;
- (id)bezierOperationChain;
@property(retain, nonatomic) NSBezierPath *bezierPath;
- (id)bezierPathForEndDecorationOnPath:(id)arg1;
- (id)bezierPathForStartDecorationOnPath:(id)arg1;
- (id)bezierPathInBounds;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (id)bezierPathOfSubPath:(id)arg1 inRect:(struct CGRect)arg2;
- (id)bezierPathWithTransforms;
- (BOOL)booleanOperationCanBeReset;
@property(readonly, nonatomic) NSBezierPath *cachedBezierPath;
@property(readonly, nonatomic) NSBezierPath *cachedBezierPathPreview;
- (struct CGRect)calculateInfluenceRectForBounds;
- (BOOL)canContainLayer:(id)arg1;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canCutSegments;
- (BOOL)canFlatten;
- (BOOL)canRotate;
- (BOOL)canSmartRotate;
- (BOOL)canSplitPaths;
- (void)changeInnerOuterBordersIfHasOpenPaths;
- (Class)classToUseForNameCounter;
- (void)copyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)cutBezierSegmentAtIndex:(unsigned long long)arg1;
- (void)dataArray:(id)arg1 didRemoveObject:(id)arg2;
- (void)debugWritePaths:(long long)arg1;
- (id)decoratedBezierPathInBounds;
- (id)defaultName;
- (void)drawHoverWithZoom:(double)arg1;
- (void)drawLinePreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (id)elementNameWithAttributes:(id)arg1 path:(id *)arg2 pathAttributes:(id *)arg3 elementAttributes:(id *)arg4 exportAsPath:(char *)arg5 exporter:(id)arg6;
- (BOOL)expandableInLayerList;
- (id)fillFromBorder:(id)arg1;
- (id)firstPoint;
- (void)flatten;
- (BOOL)flattenIfNecessary;
- (BOOL)handleDoubleClick;
- (id)handlerName;
- (BOOL)hasDecorations;
- (BOOL)hasLines;
- (BOOL)hitTest:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)hitTestAsLine:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)hitTestPoint:(struct CGPoint)arg1 inBezier:(id)arg2;
- (id)hitTestablePathInBounds;
- (BOOL)includeChildrenInCalculatingStyleSize;
- (void)initEmptyObject;
- (id)inspectorViewControllers;
- (void)invalidateCache;
- (void)invalidateLightweightCopy:(id)arg1;
@property(nonatomic) BOOL isClosed;
@property(nonatomic) BOOL isEditingChild; // @synthesize isEditingChild=_isEditingChild;
- (BOOL)isHorizontalLine;
- (BOOL)isLine;
- (BOOL)isOpenForFindingAllLayers:(BOOL)arg1;
- (BOOL)isPartOfClippingMask;
- (BOOL)isStraightTriangle;
- (BOOL)isVerticalLine;
- (id)lastPoint;
- (void)layerDidResizeFromRect:(struct CGRect)arg1;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (Class)layerSnapperObjectClass;
- (void)layerStyleDidChange;
@property(nonatomic) double length; // @dynamic length;
@property(retain, nonatomic) NSBezierPath *lightweightBezierInBounds; // @synthesize lightweightBezierInBounds=_lightweightBezierInBounds;
@property(retain, nonatomic) NSBezierPath *lightweightBezierPathWithTransformsForMasking; // @synthesize lightweightBezierPathWithTransformsForMasking=_lightweightBezierPathWithTransformsForMasking;
- (double)lineWidthForOutliningWithBorder:(id)arg1;
- (void)makeLinePixelAligned;
- (void)migratePropertiesFromV51OrEarlierWithCoder:(id)arg1;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)moveTransformsToChildren;
- (id)outlinePathForPath:(id)arg1 withBorder:(id)arg2;
- (id)outlinePathForSubPath:(id)arg1 withBorder:(id)arg2;
- (id)outlineShapeWithBorder:(id)arg1;
- (struct CGPoint)p1;
- (struct CGPoint)p2;
- (void)possiblyFixRectangleBorderBeforeCut;
- (void)prepareAsMask;
- (void)prepareObjectCopy:(id)arg1;
- (id)previewImages;
- (void)removeFromParent;
- (Class)rendererClass;
- (BOOL)resizeRoot:(BOOL)arg1;
- (void)reversePath;
- (struct CGPoint)rulerBase;
- (struct CGRect)safeFrameForBezierPath:(id)arg1;
- (long long)selectedCorner:(struct CGPoint)arg1 zoom:(double)arg2;
- (BOOL)selectedInLayerList;
- (void)setEdited:(BOOL)arg1;
- (void)setHasClippingMask:(BOOL)arg1;
- (void)setIsOpen:(BOOL)arg1;
- (void)setP1:(struct CGPoint)arg1;
- (void)setP2:(struct CGPoint)arg1;
@property(nonatomic) double x1; // @dynamic x1;
@property(nonatomic) double x2; // @dynamic x2;
@property(nonatomic) double y1; // @dynamic y1;
@property(nonatomic) double y2; // @dynamic y2;
- (id)shapesFromOutlineBorders;
- (BOOL)shouldCachePreview;
- (BOOL)shouldClickThroughMouse:(struct CGPoint)arg1 force:(BOOL)arg2 zoomValue:(double)arg3;
- (unsigned long long)shouldDraw;
- (BOOL)shouldFlattenAfterRotate;
- (BOOL)shouldStripShadowsAndInnerShadow;
- (void)simplify;
- (id)splitPathIntoShape:(id)arg1;
- (id)splitPathsIntoShapes;
- (BOOL)supportsInnerOuterBorders;
- (id)svgStyle;
- (void)toggleClosePath;

@end

