//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBezierPath;

@interface FBBezierOperationChainOperand : NSObject
{
    int _operation;
    NSBezierPath *_path;
}

+ (id)operandWithMomento:(id)arg1;
+ (id)operandWithOperation:(int)arg1 path:(id)arg2;
@property(readonly, nonatomic) NSBezierPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) int operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)momento;
- (id)initWithMomento:(id)arg1;
- (id)initWithOperation:(int)arg1 path:(id)arg2;

@end
