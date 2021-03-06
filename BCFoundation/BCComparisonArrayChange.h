//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BCFoundation/BCComparisonItem.h>

@class NSString;

@interface BCComparisonArrayChange : BCComparisonItem
{
    BOOL _isInsertion;
    unsigned long long _index;
    BCComparisonArrayChange *_associatedChange;
}

+ (id)insertionChangeForItem:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)removalChangeForItem:(id)arg1 atIndex:(unsigned long long)arg2;
@property(nonatomic) __weak BCComparisonArrayChange *associatedChange; // @synthesize associatedChange=_associatedChange;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) BOOL isInsertion; // @synthesize isInsertion=_isInsertion;
- (void).cxx_destruct;
- (id)object;
@property(readonly, nonatomic) NSString *property;
- (long long)type;
- (id)internalFullPath;
@property(readonly, nonatomic) BOOL isMove;
@property(readonly, nonatomic) BOOL isRemoval;
- (id)description;
- (id)initWithNewObject:(id)arg1 oldObject:(id)arg2 atIndex:(unsigned long long)arg3;

@end

