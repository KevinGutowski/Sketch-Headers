//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSLayerRenderer-Protocol.h>

@class NSString;

@interface MSLayerRendererCG : NSObject <MSLayerRenderer>
{
}

- (void)renderLayerUncached:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;
- (void)drawCachedImage:(id)arg1 layer:(id)arg2 context:(id)arg3;
- (id)cachedImageForLayer:(id)arg1 inContext:(id)arg2;
- (void)renderLayer:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

