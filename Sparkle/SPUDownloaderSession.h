//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sparkle/SPUDownloader.h>

#import <Sparkle/NSURLSessionDelegate-Protocol.h>
#import <Sparkle/SPUDownloaderProtocol-Protocol.h>

@class NSString, NSURLSession, NSURLSessionDownloadTask;

@interface SPUDownloaderSession : SPUDownloader <NSURLSessionDelegate, SPUDownloaderProtocol>
{
    NSURLSession *_downloadSession;
    NSURLSessionDownloadTask *_download;
}

@property(retain, nonatomic) NSURLSessionDownloadTask *download; // @synthesize download=_download;
@property(retain, nonatomic) NSURLSession *downloadSession; // @synthesize downloadSession=_downloadSession;
- (void).cxx_destruct;
- (void)cancel;
- (void)cleanup;
- (void)downloadDidFinish;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)startTemporaryDownloadWithRequest:(id)arg1;
- (void)startPersistentDownloadWithRequest:(id)arg1 bundleIdentifier:(id)arg2 desiredFilename:(id)arg3;
- (void)startDownloadWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

