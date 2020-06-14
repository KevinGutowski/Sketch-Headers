//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedEditing/MSCoding-Protocol.h>

@class MSPatchArrayAddPosition, NSString;

@interface MSPatchOperation : NSObject <MSCoding>
{
    unsigned long long _traits;
}

+ (id)patchFromComparisonItem:(id)arg1;
@property(readonly, nonatomic) unsigned long long traits; // @synthesize traits=_traits;
- (long long)compare:(id)arg1;
- (BOOL)hasTrait:(unsigned long long)arg1;
- (unsigned long long)applyInsertionToDocument:(id)arg1;
- (unsigned long long)applyRemovalToDocument:(id)arg1;
- (unsigned long long)applyPropertyChangeToDocument:(id)arg1;
@property(readonly, nonatomic) MSPatchArrayAddPosition *insertionPosition;
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (void)encodeAsJSON:(id)arg1;
- (id)initWithComparisonItem:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;

@end
