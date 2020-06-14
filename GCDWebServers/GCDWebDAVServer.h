//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GCDWebServers/GCDWebServer.h>

@class NSArray, NSString;
@protocol GCDWebDAVServerDelegate;

@interface GCDWebDAVServer : GCDWebServer
{
    NSString *_uploadDirectory;
    NSArray *_allowedExtensions;
    BOOL _allowHidden;
}

@property(nonatomic) BOOL allowHiddenItems; // @synthesize allowHiddenItems=_allowHidden;
@property(copy, nonatomic) NSArray *allowedFileExtensions; // @synthesize allowedFileExtensions=_allowedExtensions;
@property(readonly, nonatomic) NSString *uploadDirectory; // @synthesize uploadDirectory=_uploadDirectory;
- (void).cxx_destruct;
- (id)initWithUploadDirectory:(id)arg1;
- (id)performUNLOCK:(id)arg1;
- (id)performLOCK:(id)arg1;
- (id)performPROPFIND:(id)arg1;
- (void)_addPropertyResponseForItem:(id)arg1 resource:(id)arg2 properties:(long long)arg3 xmlString:(id)arg4;
- (id)performCOPY:(id)arg1 isMove:(BOOL)arg2;
- (id)performMKCOL:(id)arg1;
- (id)performDELETE:(id)arg1;
- (id)performPUT:(id)arg1;
- (id)performGET:(id)arg1;
- (id)performOPTIONS:(id)arg1;
- (BOOL)_checkFileExtension:(id)arg1;
- (BOOL)_checkSandboxedPath:(id)arg1;
- (BOOL)shouldCreateDirectoryAtPath:(id)arg1;
- (BOOL)shouldDeleteItemAtPath:(id)arg1;
- (BOOL)shouldCopyItemFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)shouldMoveItemFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)shouldUploadFileAtPath:(id)arg1 withTemporaryFile:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <GCDWebDAVServerDelegate> delegate; // @dynamic delegate;

@end

