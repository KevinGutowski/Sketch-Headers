//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/NSCopying-Protocol.h>

@interface MSAlignmentEngineConstraint : NSObject <NSCopying>
{
    struct CGPoint _sourcePoint;
    struct CGVector _direction;
}

+ (id)constraintWithSourcePoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)axisAlignedOrDiagonalConstraintFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct CGVector direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) struct CGPoint sourcePoint; // @synthesize sourcePoint=_sourcePoint;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct BCLine line;
- (id)constraintByApplyingTransform:(struct CGAffineTransform)arg1;
- (id)initWithPoint:(struct CGPoint)arg1 direction:(struct CGVector)arg2;

@end

