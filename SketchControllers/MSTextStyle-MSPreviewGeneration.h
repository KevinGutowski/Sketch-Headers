//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSTextStyle.h>

@interface MSTextStyle (MSPreviewGeneration)
+ (id)previewBackgroundColor;
+ (BOOL)previewNeedsBackgroundForColor:(id)arg1 theme:(id)arg2;
- (id)debugQuickLookObject;
- (void)generatePreviewWithText:(id)arg1 imageSize:(struct CGSize)arg2 previewSize:(struct CGSize)arg3 colorSpace:(id)arg4 backingScale:(double)arg5 fittingBackground:(BOOL)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)generateLargeComponentPreviewWithText:(id)arg1 imageSize:(struct CGSize)arg2 previewSize:(struct CGSize)arg3 colorSpace:(id)arg4 backingScale:(double)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)generatePreviewWithText:(id)arg1 imageSize:(struct CGSize)arg2 previewSize:(struct CGSize)arg3 colorSpace:(id)arg4 backingScale:(double)arg5 completionBlock:(CDUnknownBlockType)arg6;
@end

