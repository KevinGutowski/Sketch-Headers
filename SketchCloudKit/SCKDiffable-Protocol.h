//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchCloudKit/NSObject-Protocol.h>

@class SCKObject;
@protocol SCKDiff, SCKDiffable;

@protocol SCKDiffable <NSObject>
- (id <SCKDiff>)diffComparedTo:(SCKObject<SCKDiffable> *)arg1;
@end

