//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

#import <SketchControllers/NSMenuDelegate-Protocol.h>

@class MSAssetLibraryController, MSAvailableOverride, MSDocumentData, MSForeignObjectMenuBuilder, NSString;

@interface MSStyleOverridePopupButton : NSPopUpButton <NSMenuDelegate>
{
    MSForeignObjectMenuBuilder *_menuBuilder;
    MSAvailableOverride *_primaryOverride;
    MSDocumentData *_documentData;
}

@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) MSAvailableOverride *primaryOverride; // @synthesize primaryOverride=_primaryOverride;
@property(retain, nonatomic) MSForeignObjectMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)buildMenuForOverride:(id)arg1 withMenuBuilder:(id)arg2 document:(id)arg3 imageCallback:(CDUnknownBlockType)arg4;
- (void)applyPreviewImage:(id)arg1;
- (void)setupButtonTitleWithPrimaryOverride:(id)arg1 document:(id)arg2 imageCallback:(CDUnknownBlockType)arg3;
- (void)addMenuItemForStyle:(id)arg1 withName:(id)arg2 document:(id)arg3 imageCallback:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) MSAssetLibraryController *libraryController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
