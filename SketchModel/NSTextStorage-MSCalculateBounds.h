//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextStorage.h>

@interface NSTextStorage (MSCalculateBounds)
- (struct CGRect)computeFlexibleLayout;
- (struct CGRect)calculateFlexibleBounds:(struct CGRect)arg1 alignment:(long long)arg2;
- (struct CGRect)computeFixedLayout;
- (struct CGRect)calculateFixedBounds:(struct CGRect)arg1;
- (struct CGRect)glyphBounds;
- (struct CGRect)boundsForTextBehaviour:(long long)arg1 alignment:(long long)arg2 original:(struct CGRect)arg3;
@end

