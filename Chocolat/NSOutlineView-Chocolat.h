//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@interface NSOutlineView (Chocolat)
- (void)collapseAllItems;
- (void)expandAllItems;
- (void)restoreSimpleExpandedState;
- (void)saveSimpleExpandedState;
- (id)ms_titleForRow:(unsigned long long)arg1;
- (unsigned long long)ms_rowForTitle:(id)arg1;
- (void)setSimpleExpandedState:(id)arg1;
- (id)simpleExpandedState;
@end
