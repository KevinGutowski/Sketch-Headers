//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSStyleFill.h>

#import <SketchModel/MSImageOwner-Protocol.h>

@class MSImageData;

@interface MSStyleFill : _MSStyleFill <MSImageOwner>
{
}

+ (id)defaultStylePartForStyle:(id)arg1;
- (unsigned long long)styleType;
@property(readonly, nonatomic) BOOL canReduceImageSize;
- (void)setReducedImage:(id)arg1;
@property(readonly, nonatomic) struct CGSize targetSizeForReduction;
- (id)NSImage;
- (void)setOpacity:(double)arg1;
- (BOOL)hasOpacity;
- (void)setPatternTileScale:(double)arg1;
- (void)correctInvalidGamma;
- (id)CSSAttributeString;

// Remaining properties
@property(retain, nonatomic) MSImageData *image;

@end

