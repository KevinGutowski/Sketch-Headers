//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchRendering/MSLayerRendererCG.h>

@interface MSBitmapRendererCG : MSLayerRendererCG
{
}

- (void)drawImageWithStyle:(id)arg1 layer:(id)arg2 rect:(struct CGRect)arg3 context:(id)arg4;
- (id)imageForLayerWithStyle:(id)arg1 layer:(id)arg2 context:(id)arg3;
- (void)drawImageAndFillsForPath:(id)arg1 style:(id)arg2 layer:(id)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)drawBitmapLayer:(id)arg1 context:(id)arg2 inRect:(struct CGRect)arg3;
- (void)renderLayerUncached:(id)arg1 ignoreDrawingArea:(BOOL)arg2 context:(id)arg3;

@end
