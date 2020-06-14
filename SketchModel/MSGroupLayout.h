//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSGroupLayout.h>

@class MSLayerGroup;

@interface MSGroupLayout : _MSGroupLayout
{
    BOOL _changingLayout;
}

- (id)inferredLayoutParentOrNil;
- (BOOL)isInferredLayoutOrInherits;
@property(readonly, nonatomic) BOOL isInferredLayout;
- (unsigned long long)layoutAnchorByResolvingPossibleConflictWithParent:(unsigned long long)arg1;
- (unsigned long long)layoutAnchor;
- (unsigned long long)usedLayoutAnchor;
- (unsigned long long)axis;
- (BOOL)isChangingLayout;
- (void)postLayoutChangeCleanup;
- (unsigned long long)adjustConstraintForResizingSubLayer:(unsigned long long)arg1;
- (id)layersToConsiderForGroupBounds;
- (id)desiredGroupLayerOrder;
- (void)setOriginsOfContainedLayers:(id)arg1;
- (id)originsOfContainedLayers;
- (BOOL)shouldResizeToFitBounds:(struct CGRect)arg1;
- (BOOL)fixGeometryWithOptions:(long long)arg1 allowedAxes:(unsigned long long)arg2;
- (BOOL)fixGeometryWithOptions:(long long)arg1;
- (void)didChangeLayout:(long long)arg1 info:(id)arg2;
- (id)willChangeLayout:(long long)arg1;
- (void)changeLayout:(long long)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)groupDidResizeFromSize:(struct CGSize)arg1;
@property(readonly, nonatomic) MSLayerGroup *group;

@end

