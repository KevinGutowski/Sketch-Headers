//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayer, MSOverrideRepresentation;

@interface MSHitTestResult : NSObject
{
    MSLayer *_layer;
    MSOverrideRepresentation *_overrideRepresentation;
}

@property(retain, nonatomic) MSOverrideRepresentation *overrideRepresentation; // @synthesize overrideRepresentation=_overrideRepresentation;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;

@end

