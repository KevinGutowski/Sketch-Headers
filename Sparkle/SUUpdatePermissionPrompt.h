//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Sparkle/NSTouchBarDelegate-Protocol.h>

@class NSArray, NSButton, NSString, NSTableView, NSTextField, NSView, SUHost;

__attribute__((visibility("hidden")))
@interface SUUpdatePermissionPrompt : NSWindowController <NSTouchBarDelegate>
{
    BOOL _isShowingMoreInfo;
    BOOL _shouldSendProfile;
    CDUnknownBlockType _reply;
    SUHost *host;
    NSArray *systemProfileInformationArray;
    NSTextField *descriptionTextField;
    NSView *moreInfoView;
    NSButton *moreInfoButton;
    NSTableView *profileTableView;
    NSButton *cancelButton;
    NSButton *checkButton;
}

+ (void)promptWithHost:(id)arg1 systemProfile:(id)arg2 reply:(CDUnknownBlockType)arg3;
@property __weak NSButton *checkButton; // @synthesize checkButton;
@property __weak NSButton *cancelButton; // @synthesize cancelButton;
@property __weak NSTableView *profileTableView; // @synthesize profileTableView;
@property __weak NSButton *moreInfoButton; // @synthesize moreInfoButton;
@property __weak NSView *moreInfoView; // @synthesize moreInfoView;
@property __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField;
@property(retain) NSArray *systemProfileInformationArray; // @synthesize systemProfileInformationArray;
@property(retain) SUHost *host; // @synthesize host;
@property BOOL shouldSendProfile; // @synthesize shouldSendProfile=_shouldSendProfile;
@property BOOL isShowingMoreInfo; // @synthesize isShowingMoreInfo=_isShowingMoreInfo;
@property(readonly, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
- (void).cxx_destruct;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)finishPrompt:(id)arg1;
- (void)toggleMoreInfo:(id)arg1;
- (id)promptDescription;
- (id)icon;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)windowDidLoad;
@property(readonly, copy) NSString *description;
- (id)initWithHost:(id)arg1 systemProfile:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)shouldAskAboutProfile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

