//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCDownloadManager, NSMutableDictionary;

@interface MSAssetLibraryUpdater : NSObject
{
    BCDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadTasks;
}

+ (id)appcastForURL:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
@property(retain, nonatomic) BCDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void).cxx_destruct;
- (id)dictionaryValueForDownloadTaskWithIdentifier:(id)arg1 key:(id)arg2;
- (CDUnknownBlockType)completionHandlerForIdentifier:(id)arg1;
- (CDUnknownBlockType)progressHandlerForIdentifier:(id)arg1;
- (void)downloadManager:(id)arg1 downloadTaskWithIdentifier:(id)arg2 failedWithError:(id)arg3;
- (void)downloadManager:(id)arg1 downloadTaskFinishedForIdentifier:(id)arg2 downloadedURL:(id)arg3 httpStatusCode:(long long)arg4;
- (void)downloadManager:(id)arg1 downloadTaskHasUpdatedForIdentifier:(id)arg2 downloadedSoFar:(unsigned long long)arg3 withDownloadSize:(unsigned long long)arg4;
- (void)cancelDownloadTaskWithIdentifier:(id)arg1;
- (BOOL)updateAssetLibrary:(id)arg1 withLibraryDownloadedTo:(id)arg2 linking:(BOOL)arg3;
- (void)startFileDownload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)startDownloadingAssetLibrary:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)updatingInfoForLatestVersionInAppcast:(id)arg1;
- (void)downloadAppcastAtURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)downloadAssetLibraryAppcasts:(id)arg1 downloadAppcastHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end
