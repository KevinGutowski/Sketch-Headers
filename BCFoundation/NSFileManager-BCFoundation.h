//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (BCFoundation)
+ (void)_setTemporaryFilesRootToURL:(id)arg1;
- (id)uniqueURL:(id)arg1;
- (BOOL)isFolderAtURL:(id)arg1;
- (BOOL)isFolderAtPath:(id)arg1;
- (id)shallowSubpathURLsOfDirectoryAtURL:(id)arg1;
- (id)shallowSubpathsOfDirectoryAtURL:(id)arg1;
- (id)shallowFilenamesOfDirectoryAtURL:(id)arg1 withURLResourceValues:(id)arg2 forURLResourceKey:(id)arg3;
- (BOOL)createDirectoryIfNecessary:(id)arg1;
- (id)visibleSubpathsOfDirectory:(id)arg1;
- (BOOL)fileExistsAtURL:(id)arg1;
- (id)_temporaryFilesRootForURL:(id)arg1;
- (id)temporaryFileURLToReplaceURL:(id)arg1;
- (id)temporaryFileURLWithExtension:(id)arg1;
- (id)temporaryFileURLWithName:(id)arg1 extension:(id)arg2;
- (id)temporaryFolderURLWithName:(id)arg1;
- (id)temporaryFolderURL;
- (id)randomName;
- (id)createFolderIfNecessaryAtURL:(id)arg1;
@end
