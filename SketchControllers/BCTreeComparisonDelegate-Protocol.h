//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BCTreeComparison, NSSet;
@protocol BCMutableTreeComparison;

@protocol BCTreeComparisonDelegate
- (void)treeComparison:(BCTreeComparison<BCMutableTreeComparison> *)arg1 compareChildrenOf:(id)arg2 against:(id)arg3;
- (BOOL)treeComparison:(BCTreeComparison *)arg1 isObject:(id)arg2 theSameObjectAs:(id)arg3;
- (NSSet *)treeComparison:(BCTreeComparison *)arg1 propertiesOfObject:(id)arg2 notMatching:(id)arg3;
@end
