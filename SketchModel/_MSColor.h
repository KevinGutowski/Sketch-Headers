//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@class NSString;

@interface _MSColor : MSModelObject
{
    double _alpha;
    double _blue;
    double _green;
    double _red;
    NSString *_swatchID;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_swatchID:(id)arg1;
- (void)setRaw_red:(double)arg1;
- (void)setRaw_green:(double)arg1;
- (void)setRaw_blue:(double)arg1;
- (void)setRaw_alpha:(double)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(retain, nonatomic) NSString *swatchID; // @synthesize swatchID=_swatchID;
@property(nonatomic) double red; // @synthesize red=_red;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end
