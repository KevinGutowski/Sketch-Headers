//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSATSTypesetter.h>

@class BCRangeMap;

@interface MSConstantBaselineTypesetter : NSATSTypesetter
{
    BCRangeMap *_rangeMap;
}

@property(retain, nonatomic) BCRangeMap *rangeMap; // @synthesize rangeMap=_rangeMap;
- (void).cxx_destruct;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;
- (void)willSetLineFragmentRect:(struct CGRect *)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect *)arg3 baselineOffset:(double *)arg4;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (void)invalidateLayoutFromGlyphLocation:(unsigned long long)arg1;
- (id)maxLineHeightFontFromCurrentParagraph:(double *)arg1 maxLineHeight:(double *)arg2 charcterRange:(struct _NSRange *)arg3;
- (struct _NSRange)constantBaselineGlyphRangeForGlyphLocation:(unsigned long long)arg1;
- (BOOL)usesFontLeading;
- (id)init;

@end

