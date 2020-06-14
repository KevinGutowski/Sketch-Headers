//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCell.h>

@interface NSCell (Inspector)
+ (void)drawEnabled:(BOOL)arg1 inBlock:(CDUnknownBlockType)arg2;
+ (void)drawInspectorButtonImage:(id)arg1 centeredInRect:(struct CGRect)arg2 withColor:(id)arg3;
+ (id)inspectorAccentIconColorForCellHighlighted:(BOOL)arg1;
+ (id)inspectorAccentColorForCellHighlighted:(BOOL)arg1;
+ (id)inspectorIconColorForCellHighlighted:(BOOL)arg1;
- (struct CGRect)inspectorFocusRingMaskBoundsForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInspectorFocusRingMaskWithWithPath:(id)arg1;
- (void)drawInspectorTextFieldBackgroundWithPath:(id)arg1;
- (void)drawInspectorButtonPath:(id)arg1 accented:(BOOL)arg2 highlighted:(BOOL)arg3;
- (void)drawInspectorStatelessControlImage:(id)arg1 centeredInRect:(struct CGRect)arg2;
- (void)drawInspectorButtonImage:(id)arg1 centeredInRect:(struct CGRect)arg2 accented:(BOOL)arg3 accentsImage:(BOOL)arg4;
- (void)drawInspectorButtonImage:(id)arg1 centeredInRect:(struct CGRect)arg2 accented:(BOOL)arg3;
- (void)drawInspectorButtonImage:(id)arg1 centeredInRect:(struct CGRect)arg2;
- (id)currentInspectorAccentColor;
- (id)currentInspectorAccentedIconColor;
- (id)currentInspectorIconColor;
@end

