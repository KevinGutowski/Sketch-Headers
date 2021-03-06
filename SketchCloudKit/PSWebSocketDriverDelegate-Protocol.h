//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchCloudKit/NSObject-Protocol.h>

@class NSData, NSError, NSString, PSWebSocketDriver;

@protocol PSWebSocketDriverDelegate <NSObject>
- (void)driver:(PSWebSocketDriver *)arg1 write:(NSData *)arg2;
- (void)driver:(PSWebSocketDriver *)arg1 didCloseWithCode:(long long)arg2 reason:(NSString *)arg3;
- (void)driver:(PSWebSocketDriver *)arg1 didFailWithError:(NSError *)arg2;
- (void)driver:(PSWebSocketDriver *)arg1 didReceivePong:(NSData *)arg2;
- (void)driver:(PSWebSocketDriver *)arg1 didReceivePing:(NSData *)arg2;
- (void)driver:(PSWebSocketDriver *)arg1 didReceiveMessage:(id)arg2;
- (void)driverDidOpen:(PSWebSocketDriver *)arg1;
@end

