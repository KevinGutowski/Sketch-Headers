//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSColor.h>

@interface NSColor (CHColorExtensions)
+ (id)colorWithGray:(double)arg1 alpha:(double)arg2;
+ (id)colorWithGray:(double)arg1;
+ (id)tintColorMildDark;
+ (id)tintColorMild;
+ (id)tintColorNormalDark;
+ (id)tintColorNormal;
+ (id)tintColorIntenseDark;
+ (id)tintColorIntense;
- (double)luminance_ch;
- (BOOL)isWhite;
- (BOOL)fuzzyIsEqual:(id)arg1;
- (struct CGColor *)newCGColor;
- (id)stringValueWithAlpha:(BOOL)arg1;
- (id)hexValue;
- (id)highlightedColor;
- (id)colorByApplyingModifier:(id)arg1;
- (id)colorByApplyingModifiers:(id)arg1;
@end

