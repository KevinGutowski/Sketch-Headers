//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableLayer, MSImmutableLayerGroup, MSLayer;

@interface MSInferredLayoutLayerPair : NSObject
{
    double _cachedChangeInSize;
    MSImmutableLayer *_oldLayerState;
    MSLayer *_updatedLayerState;
    MSImmutableLayerGroup *_oldLayerGroup;
    unsigned long long _axis;
    unsigned long long _layoutAnchor;
}

@property(readonly, nonatomic) unsigned long long layoutAnchor; // @synthesize layoutAnchor=_layoutAnchor;
@property(readonly, nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(readonly, nonatomic) MSImmutableLayerGroup *oldLayerGroup; // @synthesize oldLayerGroup=_oldLayerGroup;
@property(readonly, nonatomic) MSLayer *updatedLayerState; // @synthesize updatedLayerState=_updatedLayerState;
@property(readonly, nonatomic) MSImmutableLayer *oldLayerState; // @synthesize oldLayerState=_oldLayerState;
- (void).cxx_destruct;
- (id)description;
- (double)trailingMarginForLayer:(id)arg1 detectedStack:(char *)arg2;
- (double)calculateChangeInSize;
- (double)changeInSize;
- (BOOL)isInstanceThatWasHidden;
- (struct _NSRange)rangeOfOldLayerFrame;
- (id)initWithOldLayer:(id)arg1 updatedToNewLayer:(id)arg2 inGroup:(id)arg3 layoutAxis:(unsigned long long)arg4 anchor:(unsigned long long)arg5;

@end

