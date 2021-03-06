//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchControllers/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol NSUserInterfaceItemSearching <NSObject>
- (NSArray *)localizedTitlesForItem:(id)arg1;
- (void)searchForItemsWithSearchString:(NSString *)arg1 resultLimit:(long long)arg2 matchedItemHandler:(void (^)(NSArray *))arg3;

@optional
- (void)showAllHelpTopicsForSearchString:(NSString *)arg1;
- (void)performActionForItem:(id)arg1;
@end

