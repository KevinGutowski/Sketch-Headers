//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSViewPort : NSObject
{
    double _zoomValue;
    struct CGPoint _scrollOrigin;
}

+ (double)cappedZoom:(double)arg1;
+ (double)minimumZoomValue;
+ (double)maximumZoomValue;
+ (id)viewPortWithScrollOrigin:(struct CGPoint)arg1 zoom:(double)arg2;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end

