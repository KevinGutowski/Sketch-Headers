//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SCKUser;

@interface SCKUserController : NSObject
{
    MISSING_TYPE *user;
    MISSING_TYPE *isLoading;
    MISSING_TYPE *requestOperation;
    MISSING_TYPE *requestHandlers;
}

+ (id)userDidChangeNotification;
- (void).cxx_destruct;
- (void)currentEnvironmentDidChangeWithNotification:(id)arg1;
- (void)currentAuthenticationSessionDidChangeWithNotification:(id)arg1;
- (void)requestUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading;
@property(nonatomic, retain) SCKUser *user; // @synthesize user;

@end

