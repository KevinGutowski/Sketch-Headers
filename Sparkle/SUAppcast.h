//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sparkle/SPUDownloaderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, SPUDownloader;

@interface SUAppcast : NSObject <SPUDownloaderDelegate>
{
    CDUnknownBlockType completionBlock;
    NSString *userAgentString;
    NSDictionary *httpHeaders;
    SPUDownloader *download;
    NSArray *items;
    NSURL *imageURL;
}

@property(retain) NSURL *imageURL; // @synthesize imageURL;
@property(copy) NSArray *items; // @synthesize items;
@property(retain) SPUDownloader *download; // @synthesize download;
@property(copy) NSDictionary *httpHeaders; // @synthesize httpHeaders;
@property(copy) NSString *userAgentString; // @synthesize userAgentString;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
- (void).cxx_destruct;
- (id)copyWithoutDeltaUpdates;
- (id)bestNodeInNodes:(id)arg1;
- (void)reportError:(id)arg1;
- (id)parseAppcastItemsFromXMLData:(id)arg1 error:(id *)arg2;
- (id)parseAppcastItemsFromXMLFile:(id)arg1 error:(id *)arg2;
- (id)sparkleNamespacedNameOfNode:(id)arg1;
- (id)attributesOfNode:(id)arg1;
- (void)downloaderDidFailWithError:(id)arg1;
- (void)downloaderDidFinishWithTemporaryDownloadData:(id)arg1;
- (void)downloaderDidReceiveDataOfLength:(unsigned long long)arg1;
- (void)downloaderDidReceiveExpectedContentLength:(long long)arg1;
- (void)downloaderDidSetDestinationName:(id)arg1 temporaryDirectory:(id)arg2;
- (void)fetchAppcastFromURL:(id)arg1 inBackground:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
