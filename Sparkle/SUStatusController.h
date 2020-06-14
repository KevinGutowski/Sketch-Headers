//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Sparkle/NSTouchBarDelegate-Protocol.h>

@class NSButton, NSProgressIndicator, NSString, NSTextField, SUHost;

__attribute__((visibility("hidden")))
@interface SUStatusController : NSWindowController <NSTouchBarDelegate>
{
    double progressValue;
    double maxProgressValue;
    NSString *statusText;
    NSString *title;
    NSString *buttonTitle;
    SUHost *host;
    NSButton *actionButton;
    NSProgressIndicator *progressBar;
    NSTextField *statusTextField;
    NSButton *touchBarButton;
}

@property(retain) NSButton *touchBarButton; // @synthesize touchBarButton;
@property __weak NSTextField *statusTextField; // @synthesize statusTextField;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar;
@property __weak NSButton *actionButton; // @synthesize actionButton;
@property(retain) SUHost *host; // @synthesize host;
@property(copy) NSString *buttonTitle; // @synthesize buttonTitle;
@property(copy) NSString *title; // @synthesize title;
@property(copy) NSString *statusText; // @synthesize statusText;
@property(nonatomic) double maxProgressValue; // @synthesize maxProgressValue;
@property double progressValue; // @synthesize progressValue;
- (void).cxx_destruct;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
@property(getter=isButtonEnabled) BOOL buttonEnabled;
- (BOOL)progressBarShouldAnimate;
- (void)setButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isDefault:(BOOL)arg4;
- (void)beginActionWithTitle:(id)arg1 maxProgressValue:(double)arg2 statusText:(id)arg3;
- (id)applicationIcon;
- (id)windowTitle;
- (void)windowDidLoad;
@property(readonly, copy) NSString *description;
- (id)initWithHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

