//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableGroupLayout.h>

@interface _MSImmutableInferredGroupLayout : MSImmutableGroupLayout
{
    unsigned long long _axis;
    unsigned long long _layoutAnchor;
    double _maxSize;
    double _minSize;
}

+ (Class)mutableClass;
@property(nonatomic) double minSize; // @synthesize minSize=_minSize;
@property(nonatomic) double maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) unsigned long long layoutAnchor; // @synthesize layoutAnchor=_layoutAnchor;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
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

