//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSImmutableTextLayer.h>

#import <SketchModel/MSFirstLineTypesetterDelegate-Protocol.h>
#import <SketchModel/NSLayoutManagerDelegate-Protocol.h>

@class MSTextLayout, NSAttributedString, NSObject, NSString;

@interface MSImmutableTextLayer : _MSImmutableTextLayer <NSLayoutManagerDelegate, MSFirstLineTypesetterDelegate>
{
    MSTextLayout *_textLayout;
    _Atomic void *_textLayoutAtomicPointer;
    NSObject *_calculateTextLayoutAtomicity;
    BOOL _isEditingText;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
- (void).cxx_destruct;
- (id)calculatePathInBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (double)baselineAdjustmentForLayoutManager:(id)arg1;
- (id)createTextStorage;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (BOOL)hasDefaultValues;
@property(readonly, nonatomic) MSTextLayout *textLayout;
- (double)lineHeight;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSAttributedString *attributedStringValue;
- (double)defaultLineHeight:(id)arg1;
- (id)font;
@property(readonly, nonatomic) double fontSize;
@property(readonly, nonatomic) long long textAlignment;
- (BOOL)containsUnsafeFonts;
- (double)startingPositionOnPath:(id)arg1;
- (id)pathsWithColorsFromGlyphsInBoundsWithParentGroupSplitByColorAttribute:(id)arg1 layoutManager:(id)arg2;
- (id)pathFromGlyphsInBoundsWithParentGroup:(id)arg1 layoutManager:(id)arg2;
- (void)generateBezierPathFromGlyphsInBoundsWithParentGroup:(id)arg1 layoutManager:(id)arg2 appendContentBlock:(CDUnknownBlockType)arg3 appendDecorationBlock:(CDUnknownBlockType)arg4;
- (id)firstUnderlyingShapePathWithParentGroup:(id)arg1;
- (id)shapeToUseForTextOnPathWithParentGroup:(id)arg1;
@property(readonly, nonatomic) BOOL shouldUseBezierRepresentationForRendering;
@property(readonly, nonatomic) struct CGRect capHeightBounds;
- (BOOL)allowsShadowSpread;
@property(readonly, nonatomic) struct CGPoint drawingPointForText;
- (struct CGSize)textContainerSize;
- (double)totalHeightOfFont:(id)arg1;
- (struct CGRect)calculateInfluenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (BOOL)shouldBeIncludedInParentPath;
- (void)performInitWithUnarchiver:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)overridePointAttributeNamesForOverridePropertyMigration;
- (void)migratePropertiesFromV119OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV97OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV80OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV77OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV76OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV44OrEarlierWithUnarchiver:(id)arg1;
- (id)directlyApplyOverrides:(id)arg1 inDocument:(id)arg2 withCache_Detach:(id)arg3;
- (id)defaultValueForOverridePoint:(id)arg1 relatedOverrides:(id)arg2 document:(id)arg3;
- (id)overridePointsWithParent:(id)arg1 overrides:(id)arg2 document:(id)arg3;
- (BOOL)canOverridePoint:(id)arg1 withAncestors:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

