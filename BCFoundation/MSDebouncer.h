//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface MSDebouncer : NSObject
{
    MISSING_TYPE *actionToPerform;
    MISSING_TYPE *interval;
    MISSING_TYPE *timer;
}

- (void).cxx_destruct;
- (id)init;
- (void)schedulePerformAction;
- (id)initWithInterval:(double)arg1 actionToPerform:(CDUnknownBlockType)arg2;

@end

