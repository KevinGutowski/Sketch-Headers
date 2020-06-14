//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sparkle/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL, NSURLRequest;

__attribute__((visibility("hidden")))
@interface SPUURLRequest : NSObject <NSSecureCoding>
{
    NSURL *_url;
    unsigned long long _cachePolicy;
    double _timeoutInterval;
    NSDictionary *_httpHeaderFields;
    unsigned long long _networkServiceType;
}

+ (BOOL)supportsSecureCoding;
+ (id)URLRequestWithRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long networkServiceType; // @synthesize networkServiceType=_networkServiceType;
@property(readonly, nonatomic) NSDictionary *httpHeaderFields; // @synthesize httpHeaderFields=_httpHeaderFields;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLRequest *request;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 httpHeaderFields:(id)arg4 networkServiceType:(unsigned long long)arg5;

@end

