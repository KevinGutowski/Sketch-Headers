//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Chocolat/NSObject-Protocol.h>

@class NSString, NSTouchBar, NSTouchBarItem;

@protocol NSTouchBarDelegate <NSObject>

@optional
- (NSTouchBarItem *)touchBar:(NSTouchBar *)arg1 makeItemForIdentifier:(NSString *)arg2;
@end

