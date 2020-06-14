//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPath, NSMutableArray;

@interface MSBooleanOperationChain : NSObject
{
    unsigned long long _maximumElementCount;
    MSPath *_subjectPath;
    MSPath *_resultPath;
    NSMutableArray *_steps;
    unsigned long long _elementCount;
}

+ (id)booleanOperationChainWithSubjectPath:(id)arg1;
@property(nonatomic) unsigned long long elementCount; // @synthesize elementCount=_elementCount;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) MSPath *resultPath; // @synthesize resultPath=_resultPath;
@property(retain, nonatomic) MSPath *subjectPath; // @synthesize subjectPath=_subjectPath;
@property(readonly, nonatomic) unsigned long long maximumElementCount; // @synthesize maximumElementCount=_maximumElementCount;
- (void).cxx_destruct;
- (id)calculateResultPath;
- (long long)addClippingPath:(id)arg1 forBooleanOperation:(long long)arg2;
- (id)initWithSubjectPath:(id)arg1 maximumElementCount:(unsigned long long)arg2;

@end
