//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableStyledLayer.h>

@class NSArray;

@interface _MSImmutableShapePathLayer : MSImmutableStyledLayer
{
    BOOL _edited;
    BOOL _isClosed;
    long long _pointRadiusBehaviour;
    NSArray *_points;
}

+ (Class)mutableClass;
+ (BOOL)isEditedByDefault;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(nonatomic) long long pointRadiusBehaviour; // @synthesize pointRadiusBehaviour=_pointRadiusBehaviour;
@property(nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
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
@property(nonatomic, readonly) NSArray *defaultCurvePoints;
@property(nonatomic, readonly) BOOL hasDefaultCurvePoints;

@end

