//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSLayerProtocol-Protocol.h>

@class MSImmutableDocumentData, MSImmutableStyle, MSPath;

@protocol MSImmutablePathLayer <MSLayerProtocol>
@property(readonly, nonatomic) MSImmutableStyle *style;
@property(readonly, nonatomic) BOOL hasMarkers;
- (MSPath *)decoratedPathInBoundsInDocument:(MSImmutableDocumentData *)arg1;
@end
