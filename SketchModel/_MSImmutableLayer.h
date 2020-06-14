//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class MSImmutableExportOptions, MSImmutableFlowConnection, MSImmutableRect, NSDictionary, NSString;

@interface _MSImmutableLayer : MSImmutableModelObject
{
    long long _booleanOperation;
    BOOL _isFixedToViewport;
    BOOL _isFlippedHorizontal;
    BOOL _isFlippedVertical;
    BOOL _isLocked;
    BOOL _isVisible;
    long long _layerListExpandedType;
    NSString *_name;
    BOOL _nameIsFixed;
    NSString *_originalObjectID;
    unsigned long long _resizingConstraint;
    unsigned long long _resizingType;
    double _rotation;
    BOOL _shouldBreakMaskChain;
    NSDictionary *_userInfo;
    MSImmutableExportOptions *_exportOptions;
    MSImmutableFlowConnection *_flow;
    MSImmutableRect *_frame;
}

+ (Class)mutableClass;
+ (id)defaultFrame;
+ (BOOL)shouldBreakMaskChainDefault;
+ (id)defaultFlow;
+ (long long)defaultLayerListExpandedType;
@property(retain, nonatomic) MSImmutableRect *frame; // @synthesize frame=_frame;
@property(retain, nonatomic) MSImmutableFlowConnection *flow; // @synthesize flow=_flow;
@property(retain, nonatomic) MSImmutableExportOptions *exportOptions; // @synthesize exportOptions=_exportOptions;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) BOOL shouldBreakMaskChain; // @synthesize shouldBreakMaskChain=_shouldBreakMaskChain;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long resizingType; // @synthesize resizingType=_resizingType;
@property(nonatomic) unsigned long long resizingConstraint; // @synthesize resizingConstraint=_resizingConstraint;
@property(retain, nonatomic) NSString *originalObjectID; // @synthesize originalObjectID=_originalObjectID;
@property(nonatomic) BOOL nameIsFixed; // @synthesize nameIsFixed=_nameIsFixed;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long layerListExpandedType; // @synthesize layerListExpandedType=_layerListExpandedType;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) BOOL isFlippedVertical; // @synthesize isFlippedVertical=_isFlippedVertical;
@property(nonatomic) BOOL isFlippedHorizontal; // @synthesize isFlippedHorizontal=_isFlippedHorizontal;
@property(nonatomic) BOOL isFixedToViewport; // @synthesize isFixedToViewport=_isFixedToViewport;
@property(nonatomic) long long booleanOperation; // @synthesize booleanOperation=_booleanOperation;
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
- (id)initWithMinimalSetup;
- (BOOL)hasDefaultFrame;
@property(nonatomic, readonly) BOOL hasDefaultFlow;

@end
