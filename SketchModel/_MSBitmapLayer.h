//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSStyledLayer.h>

@class MSImageData;

@interface _MSBitmapLayer : MSStyledLayer
{
    struct CGRect _clippingMask;
    BOOL _fillReplacesImage;
    MSImageData *_image;
    long long _intendedDPI;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_intendedDPI:(long long)arg1;
- (void)setRaw_image:(id)arg1;
- (void)setRaw_fillReplacesImage:(BOOL)arg1;
- (void)setRaw_clippingMask:(struct CGRect)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) long long intendedDPI; // @synthesize intendedDPI=_intendedDPI;
@property(retain, nonatomic) MSImageData *image; // @synthesize image=_image;
@property(nonatomic) BOOL fillReplacesImage; // @synthesize fillReplacesImage=_fillReplacesImage;
@property(nonatomic) struct CGRect clippingMask; // @synthesize clippingMask=_clippingMask;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

