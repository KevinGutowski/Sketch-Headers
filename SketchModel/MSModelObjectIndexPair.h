//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableModelObject;

@interface MSModelObjectIndexPair : NSObject
{
    MSImmutableModelObject *_modelObject;
    unsigned long long _indexInParent;
}

@property(readonly, nonatomic) unsigned long long indexInParent; // @synthesize indexInParent=_indexInParent;
@property(readonly, nonatomic) MSImmutableModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 indexInParent:(unsigned long long)arg2;

@end

