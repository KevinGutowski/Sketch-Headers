//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSSharedStyle.h>

#import <SketchModel/MSSharedStylePasting-Protocol.h>

@class MSStyle, NSString;

@interface MSSharedStyle : _MSSharedStyle <MSSharedStylePasting>
{
}

- (id)initWithName:(id)arg1 style:(id)arg2;
@property(readonly, nonatomic) MSStyle *style;
- (void)correctInvalidGamma;
@property(readonly, nonatomic) NSString *currentObjectID_MSSharedStylePasting;
- (id)handlePasteIntoDocument:(id)arg1;
- (void)updateToMatch:(struct MSModelObject *)arg1;
- (void)resetReferencingInstances;
- (id)allInstances;
- (id)allLayersInstances;

@end

