//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface MSBatchedSymbolMasters : NSObject
{
    MISSING_TYPE *masters;
    MISSING_TYPE *immutableMasters;
    MISSING_TYPE *allMastersHaveVisibleOverrides;
    MISSING_TYPE *_allowOverrides;
    MISSING_TYPE *$__lazy_storage_$_haveMatchingOverrideCounts;
    MISSING_TYPE *$__lazy_storage_$_flattenedConfigurableOverrides;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)immutableObjectsMatch:(id)arg1;
@property(nonatomic, copy) NSArray *flattenedConfigurableOverrides;
@property(nonatomic) BOOL haveMatchingOverrideCounts;
- (BOOL)enumerateComplimentaryOverridesWith:(CDUnknownBlockType)arg1;
- (id)initWithMasters:(id)arg1;
@property(nonatomic) long long allowOverrides;
@property(nonatomic, readonly) BOOL allMastersHaveVisibleOverrides; // @synthesize allMastersHaveVisibleOverrides;
@property(nonatomic, readonly) NSArray *masters;

@end

