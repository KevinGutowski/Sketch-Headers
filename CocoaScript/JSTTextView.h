//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <CocoaScript/NSTextStorageDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSSet, NSString;

@interface JSTTextView : NSTextView <NSTextStorageDelegate>
{
    NSDictionary *_keywords;
    NSString *_lastAutoInsert;
    NSSet *_ignoredSymbols;
    BOOL _parsingInResponseToEdit;
    CDUnknownBlockType _numberDragHandler;
    unsigned long long __theme;
    NSNumber *_initialNumber;
    NSMutableDictionary *_numberRanges;
    NSDictionary *_codeHighlightingColors;
    struct _NSRange _currentlyHighlightedRange;
    struct _NSRange _initialNumberRange;
    struct _NSRange _initialDragCommandRange;
    struct CGPoint _initialDragPoint;
}

@property(retain) NSDictionary *codeHighlightingColors; // @synthesize codeHighlightingColors=_codeHighlightingColors;
@property BOOL parsingInResponseToEdit; // @synthesize parsingInResponseToEdit=_parsingInResponseToEdit;
@property(retain) NSMutableDictionary *numberRanges; // @synthesize numberRanges=_numberRanges;
@property(retain) NSNumber *initialNumber; // @synthesize initialNumber=_initialNumber;
@property struct CGPoint initialDragPoint; // @synthesize initialDragPoint=_initialDragPoint;
@property struct _NSRange initialDragCommandRange; // @synthesize initialDragCommandRange=_initialDragCommandRange;
@property struct _NSRange initialNumberRange; // @synthesize initialNumberRange=_initialNumberRange;
@property struct _NSRange currentlyHighlightedRange; // @synthesize currentlyHighlightedRange=_currentlyHighlightedRange;
@property unsigned long long _theme; // @synthesize _theme=__theme;
@property(copy) CDUnknownBlockType numberDragHandler; // @synthesize numberDragHandler=_numberDragHandler;
@property(retain) NSSet *ignoredSymbols; // @synthesize ignoredSymbols=_ignoredSymbols;
@property(retain) NSString *lastAutoInsert; // @synthesize lastAutoInsert=_lastAutoInsert;
@property(retain) NSDictionary *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;
- (id)currentLineForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeForNumberNearestToIndex:(unsigned long long)arg1;
- (id)numberFromString:(id)arg1;
- (struct _NSRange)numberStringRangeForCharacterIndex:(unsigned long long)arg1;
- (void)setNumberString:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)setInsertionPointFromDragOpertion:(id)arg1;
- (struct _NSRange)selectionRangeForProposedRange:(struct _NSRange)arg1 granularity:(unsigned long long)arg2;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)shiftRight:(id)arg1;
- (void)shiftLeft:(id)arg1;
- (void)TE_doUserIndentByNumberOfLevels:(int)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)changeSelectedNumberByDelta:(long long)arg1;
- (BOOL)xrespondsToSelector:(SEL)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)autoInsertText:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (id)writablePasteboardTypes;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)parseCode:(id)arg1;
- (void)setupLineViewAndStuff;
- (void)setTheme:(unsigned long long)arg1;
- (unsigned long long)theme;
- (void)dealloc;
- (void)initThemes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

