//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchRendering/MSLayerRendererCG.h>

@interface MSGroupRendererCG : MSLayerRendererCG
{
}

- (void)endMaskWithContext:(id)arg1 oldAlpha:(double)arg2;
- (id)maskImageForShape:(id)arg1 context:(id)arg2 scale:(double)arg3;
- (void)beginAlphaMask:(id)arg1 context:(id)arg2;
- (double)beginMask:(id)arg1 context:(id)arg2;
- (void)renderSubLayer:(id)arg1 skipFills:(BOOL)arg2 ignoreDrawingArea:(BOOL)arg3 maskShapeGroup:(id)arg4 context:(id)arg5;
- (void)renderSubLayersOfGroup:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;
- (void)renderLayerUncached:(id)arg1 transformObject:(id)arg2 ignoreDrawingArea:(BOOL)arg3 context:(id)arg4;
- (void)renderLayerUncached:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;

@end

