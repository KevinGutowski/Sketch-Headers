//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BCFoundation/BCRect.h>

@class MSLayer;

@interface MSAbsoluteRect : BCRect
{
    void *rectObservationInfo;
    MSLayer *_layer;
}

@property(nonatomic) __weak MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint rulerOrigin;
- (void)setNilValueForKey:(id)arg1;
@property(nonatomic) double rulerY;
@property(nonatomic) double rulerX;
- (void)setRect:(struct CGRect)arg1;
- (struct CGRect)rect;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)setWidth:(double)arg1;
- (double)width;
- (double)y;
- (void)moveInAbsoluteCoordinatesBy:(struct CGPoint)arg1;
- (void)setY:(double)arg1;
- (void)setX:(double)arg1;
- (double)x;
- (BOOL)boundsContainsPoint:(struct CGPoint)arg1;
- (id)bezierBoundsInAbsoluteCoordinates;
- (struct CGRect)absoluteRect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void *)observationInfo;
- (void)setObservationInfo:(void *)arg1;
- (id)initWithLayer:(id)arg1;

@end

