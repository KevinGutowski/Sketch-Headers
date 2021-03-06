//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchRendering/MSRenderInstruction.h>

@class MSImmutableDocumentData, MSOverlayItemContainer, MSOverlaySettings, NSDictionary;
@protocol MSRenderingContextCacheProvider;

@interface MSMutableRenderInstruction : MSRenderInstruction
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *overlayItemImages; // @dynamic overlayItemImages;
@property(retain, nonatomic) MSOverlayItemContainer *overlayItemContainer; // @dynamic overlayItemContainer;
@property(retain, nonatomic) MSOverlaySettings *overlaySettings; // @dynamic overlaySettings;
@property(nonatomic) struct CGColorSpace *colorSpace; // @dynamic colorSpace;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> cacheProvider; // @dynamic cacheProvider;
@property(nonatomic) struct MSRenderingParameters renderingParameters; // @dynamic renderingParameters;
@property(retain, nonatomic) MSImmutableDocumentData *documentData; // @dynamic documentData;

@end

