//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GCDWebServers/GCDWebServerResponse.h>

@interface GCDWebServerStreamedResponse : GCDWebServerResponse
{
    CDUnknownBlockType _block;
}

+ (id)responseWithContentType:(id)arg1 asyncStreamBlock:(CDUnknownBlockType)arg2;
+ (id)responseWithContentType:(id)arg1 streamBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)asyncReadDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContentType:(id)arg1 asyncStreamBlock:(CDUnknownBlockType)arg2;
- (id)initWithContentType:(id)arg1 streamBlock:(CDUnknownBlockType)arg2;

@end

