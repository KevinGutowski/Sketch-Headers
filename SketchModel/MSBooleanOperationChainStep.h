//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPath;

@interface MSBooleanOperationChainStep : NSObject
{
    MSPath *_path;
    long long _operation;
}

+ (id)booleanOperationChainStepWithPath:(id)arg1 operation:(long long)arg2;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(retain, nonatomic) MSPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long effectiveOperation;

@end
