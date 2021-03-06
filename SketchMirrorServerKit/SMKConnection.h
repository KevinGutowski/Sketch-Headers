//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString, NSUUID, SMKConnectionInfo;
@protocol OS_dispatch_queue;

@interface SMKConnection : NSObject
{
    NSUUID *_UUID;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_advertisement;
    unsigned long long _status;
    NSString *_resourceHost;
}

@property(readonly, nonatomic) NSString *resourceHost; // @synthesize resourceHost=_resourceHost;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSDictionary *advertisement; // @synthesize advertisement=_advertisement;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long connectionType;
@property(readonly, nonatomic) SMKConnectionInfo *connectionInfo;
- (void)didReceiveData:(id)arg1;
- (void)sendData:(id)arg1;
- (void)close;
- (void)connect;
- (void)dealloc;
- (id)init;

@end

