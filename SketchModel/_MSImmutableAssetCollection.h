//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class MSImmutableImageCollection, NSArray;

@interface _MSImmutableAssetCollection : MSImmutableModelObject
{
    NSArray *_images;
    NSArray *_colorAssets;
    NSArray *_exportPresets;
    NSArray *_gradientAssets;
    MSImmutableImageCollection *_imageCollection;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableImageCollection *imageCollection; // @synthesize imageCollection=_imageCollection;
@property(retain, nonatomic) NSArray *gradientAssets; // @synthesize gradientAssets=_gradientAssets;
@property(retain, nonatomic) NSArray *exportPresets; // @synthesize exportPresets=_exportPresets;
@property(retain, nonatomic) NSArray *colorAssets; // @synthesize colorAssets=_colorAssets;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (void)collaborationDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (id)collaborationDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)pluginDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (void)copyPropertiesFromObject:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

