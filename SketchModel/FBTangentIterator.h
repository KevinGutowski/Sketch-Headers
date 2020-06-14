//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierContour, FBBezierCurve;

@interface FBTangentIterator : NSObject
{
    double _leftBaseOffset;
    double _rightBaseOffset;
    FBBezierCurve *_leftCurve;
    FBBezierCurve *_rightCurve;
    double _offsetStep;
    double _offsetMaximum;
    double _iterationLeftOffset;
    double _iterationRightOffset;
    FBBezierContour *_reversedContour;
}

+ (id)tangentIteratorWithOverlapRun:(id)arg1 edge1:(BOOL)arg2;
+ (id)tangentIteratorWithIntersection:(id)arg1 onCurve:(id)arg2;
@property(retain, nonatomic) FBBezierContour *reversedContour; // @synthesize reversedContour=_reversedContour;
@property(nonatomic) double iterationRightOffset; // @synthesize iterationRightOffset=_iterationRightOffset;
@property(nonatomic) double iterationLeftOffset; // @synthesize iterationLeftOffset=_iterationLeftOffset;
@property(nonatomic) double offsetMaximum; // @synthesize offsetMaximum=_offsetMaximum;
@property(nonatomic) double offsetStep; // @synthesize offsetStep=_offsetStep;
@property(retain, nonatomic) FBBezierCurve *rightCurve; // @synthesize rightCurve=_rightCurve;
@property(retain, nonatomic) FBBezierCurve *leftCurve; // @synthesize leftCurve=_leftCurve;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (void)updateRightCurve;
- (void)updateLeftCurve;
@property(readonly, nonatomic) double rightOffset;
@property(readonly, nonatomic) double leftOffset;
@property(readonly, nonatomic) struct CGPoint stopTangent;
@property(readonly, nonatomic) struct CGPoint startTangent;
@property(readonly, nonatomic) struct CGPoint stopPoint;
@property(readonly, nonatomic) struct CGPoint startPoint;
- (BOOL)next;
- (BOOL)nextStop;
- (BOOL)nextStart;
- (void)sync:(id)arg1;
- (void)commonInit;
- (id)initWithOverlapRun:(id)arg1 edge1:(BOOL)arg2;
- (id)initWithIntersection:(id)arg1 onCurve:(id)arg2;
- (void)setRightBaseOffsetParameter:(double)arg1;
- (void)setLeftBaseOffsetParameter:(double)arg1;

@end

