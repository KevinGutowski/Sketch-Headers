//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableShapeGroup.h>

@interface MSImmutableShapeGroup (SVGExport)
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (id)addGroupContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3;
- (void)addSVGAttributes:(id)arg1 exporter:(id)arg2;
- (void)addDecorationToParent:(id)arg1 exporter:(id)arg2;
- (id)addMaskToElement:(id)arg1 exporter:(id)arg2;
- (void)simplifyPathElement:(id)arg1 exporter:(id)arg2 inset:(double)arg3;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (BOOL)requiresPathDefinition:(id)arg1;
- (id)svgStyle:(id)arg1;
@end

