//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BCLayerList/NSObject-Protocol.h>

@class BCTableRowView, NSArray;

@protocol BCTableRowViewDelegate <NSObject>
- (void)updateVisualStateOfRowView:(BCTableRowView *)arg1;
- (unsigned long long)tableRowView:(BCTableRowView *)arg1 displayTypeOfRowAtIndex:(long long)arg2;
- (long long)indexOfTableRowView:(BCTableRowView *)arg1;
- (BOOL)isNodeExpandedInTableRowView:(BCTableRowView *)arg1;
- (NSArray *)selectedNodes;
- (BOOL)isNodeOfTableRowViewHovered:(BCTableRowView *)arg1;
- (BOOL)isNodeSelectedOnRow:(long long)arg1;
- (BOOL)isNodeOfTableRowViewSelected:(BCTableRowView *)arg1;
@end

