//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SharedEditing/MSPatchOperation.h>

@class MSImmutableModelObject, MSPatchArrayAddPosition;

@interface MSAddItemPatchOperation : MSPatchOperation
{
    MSImmutableModelObject *_insertedObject;
    MSPatchArrayAddPosition *_position;
}

@property(readonly, nonatomic) MSPatchArrayAddPosition *position; // @synthesize position=_position;
@property(readonly, nonatomic) MSImmutableModelObject *insertedObject; // @synthesize insertedObject=_insertedObject;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)traits;
- (id)insertionPosition;
- (unsigned long long)applyInsertionToDocument:(id)arg1;
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (id)initWithComparisonItem:(id)arg1;

@end

