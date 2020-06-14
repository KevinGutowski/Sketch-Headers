//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSTilingSystemProvider-Protocol.h>

@class CALayer, MSArtboardTitleRenderer, MSCGContextPool, MSFlowItemCollector, MSFlowRenderer, MSGPUArtboardShadow, MSImmutableDocumentData, MSMemoryBuffer, MSMetalRenderer, MSMetalTexture, MSRenderInstruction, MSRenderPassState, MSRenderingCache, MSRenderingDriver, MSTileMipLevel, NSArray, NSDictionary, NSOperationQueue, NSString, NSView;
@protocol MSTiledRendererHostView;

@interface MSTiledRenderer : NSObject <MSTilingSystemProvider>
{
    MSRenderingDriver *_driver;
    double _compositingDuration[10];
    unsigned long long _compositingDurationIndex;
    BOOL _rasterisationInProgress;
    BOOL _clearOtherLevels;
    BOOL _forceSyncFirstFrame;
    NSView<MSTiledRendererHostView> *hostView;
    MSMetalRenderer *_renderer;
    NSArray *_tileLevels;
    MSTileMipLevel *_previousLevel;
    MSMemoryBuffer *_contextMemory;
    MSMemoryBuffer *_overlayMemory;
    MSMetalTexture *_quartzOverlayTexture;
    MSMetalTexture *_ekranoplanOverlayTexture;
    MSRenderingCache *_renderingCache;
    MSRenderPassState *_lastPassState;
    MSFlowRenderer *_flowRenderer;
    MSCGContextPool *_contextPool;
    NSString *_previousPageObjectID;
    MSGPUArtboardShadow *_artboardShadow;
    MSArtboardTitleRenderer *_artboardTitleRenderer;
    NSOperationQueue *_rasterisationQueue;
    MSRenderInstruction *_renderedInstruction;
    MSImmutableDocumentData *_rasterisedDocument;
    NSString *_renderedPageID;
    MSFlowItemCollector *_flowCollector;
    NSDictionary *_cachedFlows;
}

+ (BOOL)performRendererAvailabilityChecks;
@property(copy, nonatomic) NSDictionary *cachedFlows; // @synthesize cachedFlows=_cachedFlows;
@property(retain, nonatomic) MSFlowItemCollector *flowCollector; // @synthesize flowCollector=_flowCollector;
@property(nonatomic) BOOL forceSyncFirstFrame; // @synthesize forceSyncFirstFrame=_forceSyncFirstFrame;
@property(retain) NSString *renderedPageID; // @synthesize renderedPageID=_renderedPageID;
@property(retain) MSImmutableDocumentData *rasterisedDocument; // @synthesize rasterisedDocument=_rasterisedDocument;
@property(copy) MSRenderInstruction *renderedInstruction; // @synthesize renderedInstruction=_renderedInstruction;
@property(readonly, nonatomic) NSOperationQueue *rasterisationQueue; // @synthesize rasterisationQueue=_rasterisationQueue;
@property(readonly, nonatomic) MSArtboardTitleRenderer *artboardTitleRenderer; // @synthesize artboardTitleRenderer=_artboardTitleRenderer;
@property(readonly, nonatomic) MSGPUArtboardShadow *artboardShadow; // @synthesize artboardShadow=_artboardShadow;
@property(retain, nonatomic) NSString *previousPageObjectID; // @synthesize previousPageObjectID=_previousPageObjectID;
@property(retain, nonatomic) MSCGContextPool *contextPool; // @synthesize contextPool=_contextPool;
@property BOOL clearOtherLevels; // @synthesize clearOtherLevels=_clearOtherLevels;
@property BOOL rasterisationInProgress; // @synthesize rasterisationInProgress=_rasterisationInProgress;
@property(retain, nonatomic) MSFlowRenderer *flowRenderer; // @synthesize flowRenderer=_flowRenderer;
@property(retain, nonatomic) MSRenderPassState *lastPassState; // @synthesize lastPassState=_lastPassState;
@property(retain, nonatomic) MSRenderingCache *renderingCache; // @synthesize renderingCache=_renderingCache;
@property(retain, nonatomic) MSMetalTexture *ekranoplanOverlayTexture; // @synthesize ekranoplanOverlayTexture=_ekranoplanOverlayTexture;
@property(retain, nonatomic) MSMetalTexture *quartzOverlayTexture; // @synthesize quartzOverlayTexture=_quartzOverlayTexture;
@property(retain, nonatomic) MSMemoryBuffer *overlayMemory; // @synthesize overlayMemory=_overlayMemory;
@property(retain, nonatomic) MSMemoryBuffer *contextMemory; // @synthesize contextMemory=_contextMemory;
@property(nonatomic) __weak MSTileMipLevel *previousLevel; // @synthesize previousLevel=_previousLevel;
@property(readonly, nonatomic) NSArray *tileLevels; // @synthesize tileLevels=_tileLevels;
@property(readonly, nonatomic) MSMetalRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak NSView<MSTiledRendererHostView> *hostView; // @synthesize hostView;
- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *layer;
- (BOOL)isDrawing;
- (void)_scheduleRedraw;
- (void)_drawOverlayForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 canvasColorSpace:(id)arg4 overlayTexture:(id)arg5 flowItems:(id)arg6;
- (void)_drawAcceleratedOverlayElementsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 canvasColorSpace:(struct CGColorSpace *)arg4 flowItems:(id)arg5;
- (id)_prepareOverlayImageBufferForPixelViewSize:(struct CGSize)arg1;
- (void)_renderSlicesForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 overlaySettings:(id)arg3 canvasColorSpace:(struct CGColorSpace *)arg4;
- (void)_drawOverlayTexture:(id)arg1;
- (id)_prepareOverlayTextureForPage:(id)arg1 overlayItems:(id)arg2 renderingParameters:(struct MSRenderingParameters)arg3 flowItems:(id)arg4 overlayItemImages:(id)arg5 overlayOptions:(unsigned long long)arg6;
- (void)_renderPageOverlayElementsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 baseOrigin:(struct CGPoint)arg3 rect:(struct CGRect)arg4 overlaySettings:(id)arg5;
- (void)_drawGridForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5 overlaySettings:(id)arg6;
- (void)_drawGuidesForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5 overlaySettings:(id)arg6;
- (id)_createGuideBufferForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5 overlaySettings:(id)arg6;
- (void)updateContentWithRenderInstruction:(id)arg1 synchronously:(BOOL)arg2 hasUserFocus:(BOOL)arg3;
- (id)flowItems:(unsigned long long)arg1 onPage:(id)arg2;
- (void)_doUpdateWithRenderInstruction:(id)arg1 synchronously:(BOOL)arg2 hasUserFocus:(BOOL)arg3;
- (CDUnknownBlockType)prepareForRenderWithDiff:(id)arg1;
- (BOOL)_requiresCPUOverlayBufferForPage:(id)arg1 overlayOptions:(unsigned long long)arg2 overlayItems:(id)arg3 flowItems:(id)arg4;
- (void)_uniteDirtyRect:(struct CGRect)arg1;
- (id)_createDocumentColorSpaceWithCanvasColorSpace:(id)arg1 document:(id)arg2;
- (id)_findTileLevelForContentWithZoom:(double)arg1;
- (CDStruct_3f22a1f4)_updatePageObjectID:(id)arg1 document:(id)arg2 dirtyRect:(struct CGRect)arg3;
- (void)_removeAllTilesAndClearDirtyRegions;
- (CDStruct_3b01f0aa *)_visibleDirtyRects:(struct CGRect)arg1 totalZoom:(double)arg2 previousContentScale:(double)arg3 level:(id)arg4;
- (BOOL)_flattenTilesInRects:(CDStruct_3b01f0aa *)arg1 forPage:(id)arg2 instruction:(id)arg3 backingScaleFactor:(double)arg4 zoomValue:(double)arg5 cacheProvider:(id)arg6 tiles:(id)arg7 documentColorSpace:(struct CGColorSpace *)arg8 renderContentSynchronously:(BOOL)arg9 didCompleteSemaphore:(id)arg10;
- (void)_rasterisationFinishedForTileLevel:(id)arg1 page:(id)arg2 instruction:(id)arg3;
- (void)_tileFlatteningWorker:(CDStruct_3b01f0aa *)arg1 zoomValue:(double)arg2 backingScaleFactor:(double)arg3 forPage:(id)arg4 document:(id)arg5 cacheProvider:(id)arg6 tiles:(id)arg7 contentsScale:(double)arg8 documentColorSpace:(struct CGColorSpace *)arg9;
- (id)_createArtboardShadowBufferForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2;
- (void)_drawArtboardShadowsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2;
- (id)_createPageBackgroundBufferForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2;
- (void)_drawPageBackgroundElementsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 totalZoom:(double)arg3;
- (BOOL)_drawTilesForPage:(id)arg1 hasArtboards:(BOOL)arg2 renderingParameters:(struct MSRenderingParameters)arg3 displayPixels:(BOOL)arg4 tiles:(id)arg5 overlaySettings:(id)arg6 canvasColorSpace:(id)arg7 overlayTexture:(id)arg8 flowItems:(id)arg9 hasUserFocus:(BOOL)arg10;
- (void)_renderTilesWithTotalZoom:(double)arg1 renderingParameters:(struct MSRenderingParameters)arg2 displayPixels:(BOOL)arg3 tiles:(id)arg4;
- (CDStruct_75f85af1 *)_renderTileLevelWithTotalZoom:(double)arg1 displayPixels:(BOOL)arg2 visibleRect:(struct CGRect)arg3 tiles:(id)arg4 inRegion:(const CDStruct_75f85af1 *)arg5;
@property(readonly, nonatomic) MSRenderingDriver *driver;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 syncFirstFrame:(BOOL)arg2;

@end

