//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierContour, NSArray, NSMutableArray;

@interface FBEdgeOverlapRun : NSObject
{
    NSMutableArray *_overlaps;
    unsigned long long _crossingType;
    struct FBEdgeOverlapRunStartStopInsides _contour1StartStopInsides;
    struct FBEdgeOverlapRunStartStopInsides _contour2StartStopInsides;
}

+ (id)overlapRun;
@property(readonly, nonatomic) NSArray *overlaps; // @synthesize overlaps=_overlaps;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (void)edgeOverlapsWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
@property(readonly, nonatomic) FBBezierContour *contour2;
@property(readonly, nonatomic) FBBezierContour *contour1;
- (id)middleIntersection;
- (void)addStopCrossing;
- (void)addStartCrossing;
- (void)addMiddleCrossing;
- (void)removeCrossings;
- (BOOL)isCrossing;
- (BOOL)isCrossingWithTangentsOnly:(id *)arg1 iterator2Out:(id *)arg2;
- (id)edge2TangentIterator;
- (id)edge1TangentIterator;
- (BOOL)doesContainParameter:(double)arg1 onEdge:(id)arg2;
@property(readonly, nonatomic) unsigned long long crossingType;
- (BOOL)doesContainCrossing:(id)arg1;
- (BOOL)isComplete;
- (BOOL)insertOverlap:(id)arg1;
- (struct FBEdgeOverlapRunStartStopInsides)calculateContour2StartStopInsides:(id)arg1;
- (struct FBEdgeOverlapRunStartStopInsides)calculateContour1StartStopInsides:(id)arg1;
- (struct FBEdgeOverlapRunStartStopInsides)calculateStartStopInsidesForContour:(id)arg1 iterator:(id)arg2;
@property(readonly, nonatomic) BOOL stopIsInsideContour2;
@property(readonly, nonatomic) BOOL stopIsInsideContour1;
@property(readonly, nonatomic) BOOL startIsInsideContour2;
@property(readonly, nonatomic) BOOL startIsInsideContour1;
- (id)init;

@end

