//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableStyleBorder.h>

@interface MSImmutableStyleBorder (SVGExport)
- (BOOL)needsOutlinePath:(id)arg1;
- (BOOL)requiresMask:(id)arg1;
- (id)pathWithExporter:(id)arg1;
- (void)addSVGAttributes:(id)arg1 exporter:(id)arg2;
- (void)addOuterMaskToAttributes:(id)arg1 withExporter:(id)arg2;
- (void)addInnerMaskToAttributes:(id)arg1 withExporter:(id)arg2;
- (id)addMaskElementToAttributes:(id)arg1 withExporter:(id)arg2;
- (double)borderInset;
@end
