//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GCDWebServers/GCDWebServerRequest.h>

@class NSData, NSMutableData, NSString;

@interface GCDWebServerDataRequest : GCDWebServerRequest
{
    NSMutableData *_data;
    NSString *_text;
    id _jsonObject;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)description;
- (BOOL)close:(id *)arg1;
- (BOOL)writeData:(id)arg1 error:(id *)arg2;
- (BOOL)open:(id *)arg1;
@property(readonly, nonatomic) id jsonObject;
@property(readonly, nonatomic) NSString *text;

@end

