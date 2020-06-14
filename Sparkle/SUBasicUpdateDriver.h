//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sparkle/SUUpdateDriver.h>

#import <Sparkle/SPUDownloaderDelegate-Protocol.h>

@class NSString, SPUDownloader, SUAppcastItem, SUUpdateValidator;

__attribute__((visibility("hidden")))
@interface SUBasicUpdateDriver : SUUpdateDriver <SPUDownloaderDelegate>
{
    SUAppcastItem *updateItem;
    SPUDownloader *download;
    NSString *downloadPath;
    SUAppcastItem *nonDeltaUpdateItem;
    NSString *tempDir;
    NSString *relaunchPath;
    SUUpdateValidator *_updateValidator;
}

+ (BOOL)hostSupportsItem:(id)arg1;
+ (id)bestItemFromAppcastItems:(id)arg1 getDeltaItem:(id *)arg2 withHostVersion:(id)arg3 comparator:(id)arg4;
@property(retain, nonatomic) SUUpdateValidator *updateValidator; // @synthesize updateValidator=_updateValidator;
@property(copy) NSString *relaunchPath; // @synthesize relaunchPath;
@property(copy) NSString *tempDir; // @synthesize tempDir;
@property(retain) SUAppcastItem *nonDeltaUpdateItem; // @synthesize nonDeltaUpdateItem;
@property(copy) NSString *downloadPath; // @synthesize downloadPath;
@property(retain) SPUDownloader *download; // @synthesize download;
@property(retain) SUAppcastItem *updateItem; // @synthesize updateItem;
- (void).cxx_destruct;
- (void)abortUpdateWithError:(id)arg1;
- (void)abortUpdate;
- (void)installerForHost:(id)arg1 failedWithError:(id)arg2;
- (void)cleanUpDownload;
- (void)terminateApp;
- (void)installWithToolAndRelaunch:(BOOL)arg1 displayingUserInterface:(BOOL)arg2;
- (BOOL)mayUpdateAndRestart;
- (BOOL)preparePathForRelaunchTool:(id)arg1 error:(id *)arg2;
- (void)installWithToolAndRelaunch:(BOOL)arg1;
- (void)unarchiverDidFailWithError:(id)arg1;
- (void)unarchiverDidFinish:(id)arg1;
- (void)unarchiver:(id)arg1 extractedProgress:(double)arg2;
- (void)failedToApplyDeltaUpdate;
- (void)extractUpdate;
- (void)downloaderDidFailWithError:(id)arg1;
- (void)downloaderDidFinishWithTemporaryDownloadData:(id)arg1;
- (void)downloaderDidReceiveDataOfLength:(unsigned long long)arg1;
- (void)downloaderDidReceiveExpectedContentLength:(long long)arg1;
- (void)downloaderDidSetDestinationName:(id)arg1 temporaryDirectory:(id)arg2;
- (void)downloadUpdate;
- (id)appCachePath;
- (void)didNotFindUpdate;
- (void)didFindValidUpdate;
- (void)appcastDidFinishLoading:(id)arg1;
- (BOOL)itemContainsValidUpdate:(id)arg1;
- (BOOL)itemContainsSkippedVersion:(id)arg1;
- (BOOL)isItemNewer:(id)arg1;
- (id)versionComparator;
- (void)checkForUpdatesAtURL:(id)arg1 host:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
