//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchRendering/MSOverlayItem.h>

@class NSString;

@interface MSOverlayBitmapItem : MSOverlayItem
{
    NSString *_imageID;
    struct CGPoint _position;
}

@property(readonly, nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
- (void).cxx_destruct;
- (id)initWithImageID:(id)arg1 position:(struct CGPoint)arg2;

@end
