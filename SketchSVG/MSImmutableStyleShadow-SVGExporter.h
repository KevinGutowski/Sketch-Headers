//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableStyleShadow.h>

@interface MSImmutableStyleShadow (SVGExporter)
- (void)addSVGFilterWithParent:(id)arg1 exporter:(id)arg2 index:(unsigned long long)arg3;
- (id)addColorMatrix:(id)arg1 color:(id)arg2 output:(id)arg3 filter:(id)arg4;
- (id)addOffsetTo:(id)arg1 dx:(double)arg2 dy:(double)arg3 output:(id)arg4 filter:(id)arg5;
- (id)addCompositeMask:(id)arg1 mask:(id)arg2 output:(id)arg3 filter:(id)arg4;
- (id)addBlurWithRadius:(double)arg1 input:(id)arg2 output:(id)arg3 filter:(id)arg4;
- (id)addSpread:(double)arg1 withInput:(id)arg2 output:(id)arg3 filter:(id)arg4;
@end

