//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class NSArray, NSMutableArray;

@interface _MSExportOptions : MSModelObject
{
    NSArray *_includedLayerIds;
    unsigned long long _layerOptions;
    BOOL _shouldTrim;
    NSMutableArray *_exportFormats;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_exportFormats:(id)arg1;
- (void)setRaw_shouldTrim:(BOOL)arg1;
- (void)setRaw_layerOptions:(unsigned long long)arg1;
- (void)setRaw_includedLayerIds:(id)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)moveExportFormatFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllExportFormats;
- (void)removeExportFormatsAtIndexes:(id)arg1;
- (void)removeExportFormatAtIndex:(unsigned long long)arg1;
- (void)removeExportFormat:(id)arg1;
- (void)insertExportFormats:(id)arg1 afterExportFormat:(id)arg2;
- (void)insertExportFormat:(id)arg1 afterExportFormat:(id)arg2;
- (void)insertExportFormats:(id)arg1 beforeExportFormat:(id)arg2;
- (void)insertExportFormat:(id)arg1 beforeExportFormat:(id)arg2;
- (void)insertExportFormat:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addExportFormats:(id)arg1;
- (void)addExportFormat:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) NSArray *exportFormats; // @synthesize exportFormats=_exportFormats;
@property(nonatomic) BOOL shouldTrim; // @synthesize shouldTrim=_shouldTrim;
@property(nonatomic) unsigned long long layerOptions; // @synthesize layerOptions=_layerOptions;
@property(retain, nonatomic) NSArray *includedLayerIds; // @synthesize includedLayerIds=_includedLayerIds;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end
