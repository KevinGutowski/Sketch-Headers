//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSLayerProtocol-Protocol.h>

@class MSPath;

@protocol MSPathLayer <MSLayerProtocol>
@property(copy, nonatomic) MSPath *pathInFrame;
@property(nonatomic) BOOL edited;
@property(nonatomic) BOOL isClosed;
- (void)reversePath;
- (void)simplify;
@end

