//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSArcVertexBuffer, MSFlowRendererSettings, MSMetalRenderer, MSMetalTexture, MSTextureVertexBuffer, NSDictionary, NSSet;

@interface MSFlowRenderer : NSObject
{
    MSMetalRenderer *_lastRenderer;
    MSFlowRendererSettings *_lastSettings;
    MSMetalTexture *_flowAnnotationsTexture;
    MSTextureVertexBuffer *_textureVertexBuffer;
    MSArcVertexBuffer *_arcVertexBuffer;
    NSSet *_flowItems;
    double _flowItemZoomLevel;
    NSSet *_selectedLayerIDs;
    NSDictionary *_cachedItemBuffers;
    NSDictionary *_absoluteRects;
    NSDictionary *_relativeTextureRects;
    struct CGRect _flowHotspotTextureCenterRect;
    struct BCEdgePaddings _flowHotspotTexturePaddings;
}

@property(retain, nonatomic) NSDictionary *relativeTextureRects; // @synthesize relativeTextureRects=_relativeTextureRects;
@property(retain, nonatomic) NSDictionary *absoluteRects; // @synthesize absoluteRects=_absoluteRects;
@property(retain, nonatomic) NSDictionary *cachedItemBuffers; // @synthesize cachedItemBuffers=_cachedItemBuffers;
@property(retain, nonatomic) NSSet *selectedLayerIDs; // @synthesize selectedLayerIDs=_selectedLayerIDs;
@property(nonatomic) double flowItemZoomLevel; // @synthesize flowItemZoomLevel=_flowItemZoomLevel;
@property(retain, nonatomic) NSSet *flowItems; // @synthesize flowItems=_flowItems;
@property(retain, nonatomic) MSArcVertexBuffer *arcVertexBuffer; // @synthesize arcVertexBuffer=_arcVertexBuffer;
@property(retain, nonatomic) MSTextureVertexBuffer *textureVertexBuffer; // @synthesize textureVertexBuffer=_textureVertexBuffer;
@property(nonatomic) struct BCEdgePaddings flowHotspotTexturePaddings; // @synthesize flowHotspotTexturePaddings=_flowHotspotTexturePaddings;
@property(nonatomic) struct CGRect flowHotspotTextureCenterRect; // @synthesize flowHotspotTextureCenterRect=_flowHotspotTextureCenterRect;
@property(retain, nonatomic) MSMetalTexture *flowAnnotationsTexture; // @synthesize flowAnnotationsTexture=_flowAnnotationsTexture;
@property(nonatomic) __weak MSFlowRendererSettings *lastSettings; // @synthesize lastSettings=_lastSettings;
@property(nonatomic) __weak MSMetalRenderer *lastRenderer; // @synthesize lastRenderer=_lastRenderer;
- (void).cxx_destruct;
- (void)renderFlowItems:(id)arg1 selectedLayerIDs:(id)arg2 backingScaleFactor:(double)arg3 translation:(struct CGPoint)arg4 zoomLevel:(double)arg5 renderer:(id)arg6 settings:(id)arg7;
- (id)flowAnnotationsTexture:(double)arg1 renderer:(id)arg2 settings:(id)arg3;
- (id)textureVertexBufferForItems:(id)arg1 zoomLevel:(double)arg2 backingScaleFactor:(double)arg3;
- (struct MSTextureVertexQuad)textureVertexQuadWithName:(id)arg1 scaledToWidth:(double)arg2 size:(struct CGSize *)arg3 backingScaleFactor:(double)arg4;
- (id)arcVertexBufferForItems:(id)arg1 selectedLayerIDs:(id)arg2 zoomLevel:(double)arg3;

@end

