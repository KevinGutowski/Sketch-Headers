//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC17SketchControllers22MSAlignmentEngineCycle : NSObject
{
    MISSING_TYPE *snapper;
}

- (void).cxx_destruct;
- (id)init;
- (id)finishCycle;
- (void)addTargetWithLineSegment:(struct BCLineSegment)arg1 guideInfo:(id)arg2;
- (void)addTargetAtPoint:(struct CGPoint)arg1 guideInfo:(id)arg2;
- (void)addAxisAlignedTargetsWithThrough:(struct CGPoint)arg1;
- (void)addTargetWithLine:(struct BCLine)arg1 guideInfo:(id)arg2;
- (void)addTargetWithLine:(struct BCLine)arg1 infoProvider:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) double snapDistance;
@property(nonatomic, readonly) struct CGPoint defaultPoint;
- (id)initWithPoint:(struct CGPoint)arg1 snapDistance:(double)arg2 constraint:(struct BCLine)arg3;
- (id)initWithPoint:(struct CGPoint)arg1 snapDistance:(double)arg2;

@end
