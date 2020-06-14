//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GCDWebServers/GCDWebServerDataResponse.h>

@interface GCDWebServerErrorResponse : GCDWebServerDataResponse
{
}

+ (id)responseWithServerError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
+ (id)responseWithClientError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
+ (id)responseWithServerError:(long long)arg1 message:(id)arg2;
+ (id)responseWithClientError:(long long)arg1 message:(id)arg2;
- (id)initWithServerError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
- (id)initWithClientError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
- (id)initWithServerError:(long long)arg1 message:(id)arg2;
- (id)initWithClientError:(long long)arg1 message:(id)arg2;
- (id)initWithStatusCode:(long long)arg1 underlyingError:(id)arg2 messageFormat:(id)arg3 arguments:(struct __va_list_tag [1])arg4;

@end

