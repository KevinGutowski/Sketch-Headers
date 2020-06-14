//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Chocolat/CHWindowController.h>

#import <Chocolat/NSTouchBarDelegate-Protocol.h>

@class NSCountedSet, NSString, NSWindow;

@interface CHSheetController : CHWindowController <NSTouchBarDelegate>
{
    id _object;
    NSWindow *_parentWindow;
    NSCountedSet *_selfReferences;
}

+ (id)findSuitableWindowForSheet;
+ (id)runForWindow:(id)arg1 withObject:(id)arg2;
+ (id)runForWindow:(id)arg1;
@property(retain, nonatomic) NSCountedSet *selfReferences; // @synthesize selfReferences=_selfReferences;
@property(nonatomic) __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)sheetWillClose;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (SEL)selectorForTouchbarItemIdentifier:(id)arg1;
- (id)touchBarItemIdentifiers;
- (id)windowNibName;
- (void)closeSheet;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
- (id)run;
- (id)runForWindow:(id)arg1;
- (void)releaseSelf;
- (void)retainSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
