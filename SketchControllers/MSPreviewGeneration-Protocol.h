//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class NSColorSpace;

@protocol MSPreviewGeneration <NSObject>
- (void)generatePreviewWithImageSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 colorSpace:(NSColorSpace *)arg3 backingScale:(double)arg4 concurrentCancelBlock:(BOOL (^)(void))arg5 completionBlock:(void (^)(NSImage *))arg6;
- (void)generatePreviewWithImageSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 colorSpace:(NSColorSpace *)arg3 backingScale:(double)arg4 completionBlock:(void (^)(NSImage *))arg5;
@end

