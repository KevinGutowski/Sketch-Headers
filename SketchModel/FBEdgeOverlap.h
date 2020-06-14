//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierCurve, FBBezierIntersectRange;

@interface FBEdgeOverlap : NSObject
{
    FBBezierIntersectRange *_range;
    FBBezierCurve *_edge1;
    FBBezierCurve *_edge2;
}

+ (id)overlapWithRange:(id)arg1 edge1:(id)arg2 edge2:(id)arg3;
@property(readonly, nonatomic) FBBezierCurve *edge2; // @synthesize edge2=_edge2;
@property(readonly, nonatomic) FBBezierCurve *edge1; // @synthesize edge1=_edge1;
@property(readonly, nonatomic) FBBezierIntersectRange *range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (BOOL)doesContainParameter:(double)arg1 onEdge:(id)arg2 startExtends:(BOOL)arg3 endExtends:(BOOL)arg4;
- (id)middleIntersection;
- (void)addStopCrossing:(id)arg1;
- (void)addMiddleCrossing:(id)arg1;
- (void)addStartCrossing:(id)arg1;
- (void)addIntersection:(id)arg1 overlapRun:(id)arg2;
- (BOOL)fitsAfter:(id)arg1;
- (BOOL)fitsBefore:(id)arg1;
- (id)initWithRange:(id)arg1 edge1:(id)arg2 edge2:(id)arg3;

@end

