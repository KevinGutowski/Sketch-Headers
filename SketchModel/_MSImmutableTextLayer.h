//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableStyledLayer.h>

@class MSAttributedString, MSImageData;

@interface _MSImmutableTextLayer : MSImmutableStyledLayer
{
    MSAttributedString *_attributedString;
    BOOL _automaticallyDrawOnUnderlyingPath;
    BOOL _dontSynchroniseWithSymbol;
    struct CGRect _glyphBounds;
    BOOL _isBeingEdited;
    long long _lineSpacingBehaviour;
    MSImageData *_preview;
    long long _textBehaviour;
}

+ (Class)mutableClass;
@property(nonatomic) long long textBehaviour; // @synthesize textBehaviour=_textBehaviour;
@property(retain, nonatomic) MSImageData *preview; // @synthesize preview=_preview;
@property(nonatomic) long long lineSpacingBehaviour; // @synthesize lineSpacingBehaviour=_lineSpacingBehaviour;
@property(nonatomic) BOOL isBeingEdited; // @synthesize isBeingEdited=_isBeingEdited;
@property(nonatomic) struct CGRect glyphBounds; // @synthesize glyphBounds=_glyphBounds;
@property(nonatomic) BOOL dontSynchroniseWithSymbol; // @synthesize dontSynchroniseWithSymbol=_dontSynchroniseWithSymbol;
@property(nonatomic) BOOL automaticallyDrawOnUnderlyingPath; // @synthesize automaticallyDrawOnUnderlyingPath=_automaticallyDrawOnUnderlyingPath;
@property(retain, nonatomic) MSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
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

