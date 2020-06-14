//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SUHost, SUSignatures;

__attribute__((visibility("hidden")))
@interface SUUpdateValidator : NSObject
{
    BOOL _prevalidatedSignature;
    BOOL _downloadPrevalidationFailed;
    SUHost *_host;
    SUSignatures *_signatures;
    NSString *_downloadPath;
}

@property(readonly, nonatomic) NSString *downloadPath; // @synthesize downloadPath=_downloadPath;
@property(nonatomic) BOOL downloadPrevalidationFailed; // @synthesize downloadPrevalidationFailed=_downloadPrevalidationFailed;
@property(readonly, nonatomic) SUSignatures *signatures; // @synthesize signatures=_signatures;
@property(nonatomic) BOOL prevalidatedSignature; // @synthesize prevalidatedSignature=_prevalidatedSignature;
@property(readonly, nonatomic) SUHost *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (BOOL)validateUpdateForHost:(id)arg1 downloadedToPath:(id)arg2 newBundleURL:(id)arg3 signatures:(id)arg4;
- (BOOL)validateWithUpdateDirectory:(id)arg1;
- (BOOL)validateDownloadPath;
- (id)initWithDownloadPath:(id)arg1 signatures:(id)arg2 host:(id)arg3;

@end
