//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

#import <SketchCloudKit/SCKAPIRequest-Protocol.h>

@class NSString, NSURLRequest, SCKAPIEnvironment, SCKAPISession;
@protocol SCKAPISignable;

@interface SCKAPIURLRequest : NSMutableURLRequest <SCKAPIRequest>
{
    SCKAPIEnvironment *_environment;
    SCKAPISession *_authentication;
    id <SCKAPISignable> _body;
    Class _resultType;
}

+ (unsigned long long)typeForHTTPMethod:(id)arg1;
+ (id)HTTPMethodForType:(unsigned long long)arg1;
+ (id)requestWithPath:(id)arg1;
+ (id)requestWithPath:(id)arg1 environment:(id)arg2;
+ (id)requestWithPath:(id)arg1 queryItems:(id)arg2 environment:(id)arg3;
+ (id)urlWithPath:(id)arg1 withEnvironment:(id)arg2;
+ (id)baseURLForEnvironment:(id)arg1;
+ (id)baseURLOverrideForKey:(id)arg1 environment:(id)arg2;
@property(nonatomic) Class resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) id <SCKAPISignable> body; // @synthesize body=_body;
@property(retain, nonatomic) SCKAPISession *authentication; // @synthesize authentication=_authentication;
@property(copy, nonatomic) SCKAPIEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLRequest *urlRequest;
- (void)updateSignature;
@property(nonatomic) unsigned long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
