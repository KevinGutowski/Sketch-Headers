//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchRendering/MSRenderer-Protocol.h>

@class MSImmutableLayer, MSRenderingContext;

@protocol MSLayerRenderer <MSRenderer>
- (void)renderLayerUncached:(MSImmutableLayer *)arg1 ignoreDrawingArea:(BOOL)arg2 context:(MSRenderingContext *)arg3;
- (void)renderLayer:(MSImmutableLayer *)arg1 ignoreDrawingArea:(BOOL)arg2 context:(MSRenderingContext *)arg3;
@end
