//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface BCKeyEventTargetAction : NSObject
{
    id <NSObject> _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id <NSObject> target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

