//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableColor, MSImmutableLayerGroup, MSRenderingDriver, MSRenderingRequest, NSMutableArray, NSString;

@interface MSRenderingContext : NSObject
{
    BOOL _cancelled;
    int _internalBlendMode;
    MSRenderingRequest *_renderingRequest;
    MSRenderingDriver *_driver;
    NSString *_name;
    MSImmutableColor *_tintColor;
    double _alphaValue;
    NSMutableArray *_parentGroupStack;
    NSMutableArray *_symbolMasterStack;
    NSMutableArray *_symbolInstanceStack;
    struct CGRect _drawingArea;
    struct CGAffineTransform _rotateFlipTransform;
    struct CGAffineTransform _totalTransform;
}

@property(nonatomic) struct CGAffineTransform totalTransform; // @synthesize totalTransform=_totalTransform;
@property(retain, nonatomic) NSMutableArray *symbolInstanceStack; // @synthesize symbolInstanceStack=_symbolInstanceStack;
@property(retain, nonatomic) NSMutableArray *symbolMasterStack; // @synthesize symbolMasterStack=_symbolMasterStack;
@property(retain, nonatomic) NSMutableArray *parentGroupStack; // @synthesize parentGroupStack=_parentGroupStack;
@property(nonatomic) int internalBlendMode; // @synthesize internalBlendMode=_internalBlendMode;
@property(nonatomic) double alphaValue; // @synthesize alphaValue=_alphaValue;
@property(retain, nonatomic) MSImmutableColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) struct CGAffineTransform rotateFlipTransform; // @synthesize rotateFlipTransform=_rotateFlipTransform;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MSRenderingDriver *driver; // @synthesize driver=_driver;
@property(nonatomic) struct CGRect drawingArea; // @synthesize drawingArea=_drawingArea;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) MSRenderingRequest *renderingRequest; // @synthesize renderingRequest=_renderingRequest;
- (void).cxx_destruct;
- (BOOL)shouldLog;
- (void)applyShadow:(id)arg1;
- (id)colorByTintingIfNecessary:(id)arg1;
- (void)applyStrokeColor:(id)arg1;
- (void)applyFillColor:(id)arg1;
- (BOOL)shouldSkipDrawingShadow:(id)arg1;
- (BOOL)isDrawingSymbol;
- (BOOL)isDrawingSymbolInstance;
- (void)drawSymbolInstance:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)drawSymbolMaster:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (BOOL)canDrawSymbolMasterWithoutRiskingRecursion:(id)arg1;
- (BOOL)drawingAreaIntersectsLayer:(id)arg1;
- (BOOL)shouldDrawLayer:(id)arg1 withMaskingShapeGroup:(id)arg2 ignoreDrawingArea:(BOOL)arg3;
- (void)clipToRect:(struct CGRect)arg1;
- (void)applyLayerTransform:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)applySettings:(id)arg1 withOptions:(long long)arg2 inBlock:(CDUnknownBlockType)arg3;
- (void)prepareLayerDrawing:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (int)setBlendMode:(int)arg1;
- (double)setAlpha:(double)arg1;
- (double)multiplyAlphaBy:(double)arg1;
- (double)beginTransparencyLayerInRect:(struct CGRect)arg1 inheritClip:(BOOL)arg2;
- (double)beginTransparencyLayerInRect:(struct CGRect)arg1;
- (void)endTransparencyLayer:(double)arg1;
- (double)beginTransparencyLayer;
@property(readonly, nonatomic) double zoomLevelForShadows;
- (void)transparencyLayerInRect:(struct CGRect)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)transparencyLayerInBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (long long)depthOfLayer:(id)arg1;
- (BOOL)layer:(id)arg1 isSiblingOfLayer:(id)arg2;
- (id)popParentGroup;
- (void)pushParentGroup:(id)arg1;
- (id)parentGroupForLayer:(id)arg1;
@property(readonly, nonatomic) MSImmutableLayerGroup *rootLayer;
- (void)popGraphicsState;
- (void)pushGraphicsState;
- (struct CGAffineTransform)accumulatedRotateFlipTransform;
- (struct CGAffineTransform)accumulatedTransform;
- (void)concatTransform:(struct CGAffineTransform)arg1;
- (void)setCachedValue:(id)arg1 forModelObject:(id)arg2 key:(id)arg3 zoomIndependent:(BOOL)arg4;
- (id)cachedValueForModelObject:(id)arg1 key:(id)arg2 zoomIndependent:(BOOL)arg3 orCreateWithBlock:(CDUnknownBlockType)arg4;
- (void)tearDown;
- (void)setUp;
- (void)renderInBlock:(CDUnknownBlockType)arg1;
- (void)renderRect:(struct CGRect)arg1 withStyle:(id)arg2;
- (void)renderLayer:(id)arg1 ignoreCacheAndDrawingArea:(BOOL)arg2;
- (id)initWithName:(id)arg1 driver:(id)arg2 renderingRequest:(id)arg3;
- (id)init;

@end
