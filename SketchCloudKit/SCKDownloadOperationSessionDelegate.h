//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/NSURLSessionDownloadDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SCKDownloadOperationSessionDelegate : NSObject <NSURLSessionDownloadDelegate>
{
    NSMutableDictionary *_taskOperations;
}

@property(retain, nonatomic) NSMutableDictionary *taskOperations; // @synthesize taskOperations=_taskOperations;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)downloadTaskDelegateForTask:(id)arg1;
- (void)setDownloadTaskDelegate:(id)arg1 forTask:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

