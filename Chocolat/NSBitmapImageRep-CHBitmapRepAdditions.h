//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSBitmapImageRep.h>

@interface NSBitmapImageRep (CHBitmapRepAdditions)
+ (id)bitmapImageRepWithSize:(struct CGSize)arg1 pixelSize:(struct CGSize)arg2 flags:(unsigned long long)arg3 colorSpace:(id)arg4 drawingBlock:(CDUnknownBlockType)arg5;
+ (id)bitmapImageRepWithSize:(struct CGSize)arg1 flags:(unsigned long long)arg2 colorSpace:(id)arg3 drawingBlock:(CDUnknownBlockType)arg4;
- (BOOL)hasTransparentPixels;
- (id)bitSafeBitmapImageRep;
- (id)bitmapImageRepByFlippingVertical;
- (id)bitmapImageRepByCroppingToRect:(struct CGRect)arg1;
- (struct CGRect)bitSafeFastRectForTrimming:(char *)arg1;
- (struct CGRect)bitSafeFastRectForTrimming;
- (struct CGRect)rectForTrimming:(char *)arg1;
- (struct CGRect)rectForTrimming;
- (id)PNGRepresentationWithInterlaced:(BOOL)arg1 includeAlpha:(BOOL)arg2;
- (id)PNGRepresentationWithInterlaced:(BOOL)arg1;
- (id)JPGRepresentationWithCompression:(double)arg1 progressive:(BOOL)arg2;
@end
