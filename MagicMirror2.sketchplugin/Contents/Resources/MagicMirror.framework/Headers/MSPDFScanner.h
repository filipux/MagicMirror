//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDFScanner.h"

@class MSLayerGroup, MSPDFState, NSMutableArray, NSString;

@interface MSPDFScanner : PDFScanner
{
    MSLayerGroup *_rootLayer;
    NSString *_substituteFontName;
    unsigned long long _nextID;
    NSMutableArray *_stack;
    MSPDFState *_state;
}


- (void)appendRectangle:(struct CGRect)arg1;
- (void)appendText:(id)arg1;
- (void)beginText;
- (void)clipWithWinding:(unsigned long long)arg1;
- (void)closePath;
- (id)colorWithRGBBytes:(CDStruct_f4b747e6 *)arg1;
- (void)concatMatrix:(id)arg1;
- (id)currentFillColorSpace;
- (id)currentFillColorSpaceMapping;
- (id)currentFont;
- (double)currentLeading;
- (struct CGPoint)currentPoint;
- (int)currentRenderingIntent;
- (id)currentStrokeColorSpace;
- (id)currentStrokeColorSpaceMapping;
- (void)curveTo:(struct CGPoint)arg1 control1:(struct CGPoint)arg2 control2:(struct CGPoint)arg3;
- (void)doClipping;
- (void)doClose;
- (void)doNewPath;
- (void)doRestoreState;
- (void)doSaveState;
- (void)doText;
- (void)endPath;
- (void)endText;
- (void)fillWithShadingPattern:(id)arg1;
- (void)fillWithWinding:(unsigned long long)arg1;
- (id)gradientForLayer:(id)arg1 pattern:(id)arg2;
- (id)gradientForPattern:(id)arg1;
- (id)init;
- (void)lineTo:(struct CGPoint)arg1;
- (void)moveTo:(struct CGPoint)arg1;
- (id)nameForType:(id)arg1;
@property(nonatomic) unsigned long long nextID; // @synthesize nextID=_nextID;
- (void)nextLineWithOffset:(struct CGPoint)arg1;
- (void)offset:(double)arg1;
- (void)processImage:(id)arg1 info:(id)arg2;
- (void)restoreGraphicState;
@property(retain, nonatomic) MSLayerGroup *rootLayer; // @synthesize rootLayer=_rootLayer;
- (void)saveGraphicState;
- (void)scanPage:(struct CGPDFPage *)arg1 parser:(id)arg2;
- (void)scanStream:(struct CGPDFContentStream *)arg1 dictionary:(id)arg2;
- (void)setColourRenderingIntent:(int)arg1;
- (void)setFillAlphaConstant:(double)arg1;
- (void)setFillColour:(id)arg1;
- (void)setFillColourSpace:(id)arg1 mapping:(id)arg2;
- (void)setFontName:(id)arg1 size:(double)arg2 info:(id)arg3;
- (void)setLineCap:(unsigned long long)arg1;
- (void)setLineDash:(id)arg1 phase:(long long)arg2;
- (void)setLineJoin:(unsigned long long)arg1;
- (void)setLineWidth:(double)arg1;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) MSPDFState *state; // @synthesize state=_state;
- (void)setStrokeAlphaConstant:(double)arg1;
- (void)setStrokeColour:(id)arg1;
- (void)setStrokeColourSpace:(id)arg1 mapping:(id)arg2;
@property(retain, nonatomic) NSString *substituteFontName; // @synthesize substituteFontName=_substituteFontName;
- (void)setTextCharacterSpacing:(double)arg1;
- (void)setTextLeading:(double)arg1;
- (void)setTextMatrix:(id)arg1;
- (void)setTextMode:(unsigned long long)arg1;
- (void)setTextRise:(double)arg1;
- (void)setTextScale:(double)arg1;
- (void)setTextTransform:(id)arg1 resettingLineTransform:(BOOL)arg2;
- (void)setTextWordSpacing:(double)arg1;
- (BOOL)slope:(CDStruct_d2b197d1)arg1 nearEnoughTo:(CDStruct_d2b197d1)arg2 epsilon:(double)arg3;
- (CDStruct_d2b197d1)slopeBetweenStop1:(id)arg1 stop2:(id)arg2;
- (void)strokeWithWinding:(unsigned long long)arg1;
- (id)transformedPath;

@end

