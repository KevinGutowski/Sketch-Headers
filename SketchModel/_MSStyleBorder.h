//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSStyleBasicFill.h>

@interface _MSStyleBorder : MSStyleBasicFill
{
    long long _position;
    double _thickness;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
+ (id)defaultFillColor;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_thickness:(double)arg1;
- (void)setRaw_position:(long long)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

