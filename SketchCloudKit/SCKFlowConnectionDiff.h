//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/SCKDiff-Protocol.h>

@class NSString, SCKFlowConnection;

@interface SCKFlowConnectionDiff : NSObject <SCKDiff>
{
    SCKFlowConnection *_object;
    SCKFlowConnection *_comparedObject;
    unsigned long long _attributes;
}

@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) SCKFlowConnection *comparedObject; // @synthesize comparedObject=_comparedObject;
@property(readonly, copy, nonatomic) SCKFlowConnection *object; // @synthesize object=_object;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL objectsAreEqual;
- (id)initWithObject:(id)arg1 comparedTo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

