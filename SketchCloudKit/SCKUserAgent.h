//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SCKUserAgent : NSObject
{
    MISSING_TYPE *bundle;
}

+ (id)SCKUserAgentHTTPKey;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *bundleVariant;
@property(nonatomic, readonly) NSString *bundleVersionShort;
@property(nonatomic, readonly) NSString *bundleVersion;
@property(nonatomic, readonly) NSString *bundleName;
@property(nonatomic, readonly) NSString *systemVersion;
@property(nonatomic, readonly) NSString *systemName;
@property(nonatomic, readonly) NSString *description;
- (id)initWithBundle:(id)arg1;

@end

