//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class MSTintedImages, NSImage, NSString;
@protocol BCOutlineViewPopupConfigurator;

@protocol BCOutlineViewNode <NSObject>
@property(readonly, nonatomic) BOOL isExpanded;
@property(readonly, nonatomic) id layerListImmutable;
@property(readonly, nonatomic) MSTintedImages *badgeImages;
@property(readonly, nonatomic) BOOL hasBadgedIcon;
@property(readonly, nonatomic) BOOL isEditableInLayerList;
@property(readonly, nonatomic) BOOL isActive;
@property(retain, nonatomic) NSString *nodeName;
@property(readonly, nonatomic) unsigned long long filterTypeMask;
@property(readonly, nonatomic) unsigned long long displayType;
@property(readonly, nonatomic) NSString *outlineViewNodeIdentifier;
- (id <BCOutlineViewPopupConfigurator>)badgeMenuConfigurator;
- (NSImage *)maskIconWithState:(unsigned long long)arg1;
- (long long)previewIconTraitsForState:(unsigned long long)arg1;
- (void)layerListPreviewForState:(unsigned long long)arg1 withCompletionHandler:(void (^)(NSImage *))arg2;
- (NSImage *)previewIconWithState:(unsigned long long)arg1;
@end

