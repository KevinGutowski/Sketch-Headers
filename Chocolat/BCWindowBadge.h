//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor;

@interface BCWindowBadge : NSButton
{
    NSColor *_tintColor;
}

+ (Class)cellClass;
@property(retain, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (struct CGSize)fittingSize;
- (void)windowDidChangeKeyState:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
