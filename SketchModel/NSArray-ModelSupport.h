//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <SketchModel/MSCoding-Protocol.h>

@class NSString;

@interface NSArray (ModelSupport) <MSCoding>
- (void)enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1 withAncestors:(id)arg2;
- (BOOL)hasDefaultValues;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (id)treeAsDictionary;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
@end

