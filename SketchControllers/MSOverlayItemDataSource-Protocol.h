//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class MSOverlayItemContainer, NSDictionary;

@protocol MSOverlayItemDataSource <NSObject>
- (MSOverlayItemContainer *)overlayItems:(unsigned long long)arg1 parameters:(struct MSRenderingParameters)arg2;
- (NSDictionary *)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
@end

