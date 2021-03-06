//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/MSModelObjectCommon-Protocol.h>

@class MSModelObjectCache, NSArray, NSString;

@interface MSModelObjectCommon : NSObject <MSModelObjectCommon>
{
    NSString *_objectID;
    MSModelObjectCache *_cache;
}

+ (unsigned long long)traits;
+ (BOOL)persistsObjectID;
+ (id)generateObjectID;
+ (id)defaultName;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1 withAncestors:(id)arg2;
- (void)enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)traits;
@property(readonly, nonatomic) NSString *primitiveObjectID;
- (id)regenerateObjectID;
- (id)generateObjectID;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)defaultName;
- (void)objectDidInit;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)performInitEmptyObject;
- (id)initWithMinimalSetup;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *overridePointAttributeNamesForOverridePropertyMigration;
@property(readonly, copy) NSString *description;
- (id)treeAsDictionary;
- (id)simpleTreeStructure;
- (id)treeStructure;
- (void)appendTreeStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;
- (void)appendSimpleStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

