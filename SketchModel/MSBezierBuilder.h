//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface MSBezierBuilder : NSObject
{
    BOOL _pathShouldClose;
    long long _pointRadiusBehaviour;
    NSArray *_points;
    NSMutableDictionary *_filletCache;
    struct CGRect _rect;
}

+ (id)pathForSegmentAtIndex:(unsigned long long)arg1 inPath:(id)arg2 inRect:(struct CGRect)arg3;
+ (id)pathWithPoints:(id)arg1 inRect:(struct CGRect)arg2 shouldClose:(BOOL)arg3 pointRadiusBehaviour:(long long)arg4;
@property(retain, nonatomic) NSMutableDictionary *filletCache; // @synthesize filletCache=_filletCache;
@property(nonatomic) BOOL pathShouldClose; // @synthesize pathShouldClose=_pathShouldClose;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) long long pointRadiusBehaviour; // @synthesize pointRadiusBehaviour=_pointRadiusBehaviour;
- (void).cxx_destruct;
- (void)addCurveFromPointAtIndex:(unsigned long long)arg1 toPointAtIndex:(unsigned long long)arg2 inArray:(id)arg3 inRect:(struct CGRect)arg4 includingTrailingArc:(BOOL)arg5 toCGPath:(struct CGPath *)arg6;
- (void)addLineToPoint:(struct CGPoint)arg1 toCGPath:(struct CGPath *)arg2;
- (id)filletAtIndex:(unsigned long long)arg1 inPointArray:(id)arg2 rect:(struct CGRect)arg3;
- (void)buildV1CGPath:(struct CGPath *)arg1;
- (void)extendCGPath:(struct CGPath *)arg1 toPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
- (void)appendCurveFromPoint:(id)arg1 toPoint:(id)arg2 toCGPath:(struct CGPath *)arg3;
- (id)pathFromCurvePoint:(id)arg1 toPoint:(id)arg2;
- (void)buildV0CGPath:(struct CGPath *)arg1;
- (void)buildCGPath:(struct CGPath *)arg1;
- (id)_path;
- (id)path;
- (BOOL)treatCurvePointAsRounded:(id)arg1;
- (BOOL)isStraightLine;
- (id)init;
- (id)initWithPointRadiusBehavior:(long long)arg1;

@end
