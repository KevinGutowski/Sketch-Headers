//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchMirrorServerKit/NSObject-Protocol.h>

@class NSData, NSString, SMKDiskCache;

@protocol SMKDiskCacheDelegate <NSObject>
- (NSData *)diskCache:(SMKDiskCache *)arg1 dataForKey:(NSString *)arg2;
@end
