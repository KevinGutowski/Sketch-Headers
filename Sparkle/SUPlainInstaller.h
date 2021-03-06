//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sparkle/SUInstallerProtocol-Protocol.h>

@class NSString, SUHost;

__attribute__((visibility("hidden")))
@interface SUPlainInstaller : NSObject <SUInstallerProtocol>
{
    SUHost *_host;
    NSString *_bundlePath;
    NSString *_installationPath;
    NSString *_fileOperationToolPath;
}

@property(readonly, copy, nonatomic) NSString *fileOperationToolPath; // @synthesize fileOperationToolPath=_fileOperationToolPath;
@property(readonly, copy, nonatomic) NSString *installationPath; // @synthesize installationPath=_installationPath;
@property(readonly, copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, nonatomic) SUHost *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (BOOL)canInstallSilently;
- (BOOL)performFinalInstallationProgressBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)performInitialInstallation:(id *)arg1;
- (BOOL)performInstallationToURL:(id)arg1 fromUpdateAtURL:(id)arg2 withHost:(id)arg3 fileOperationToolPath:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (id)bundleVersionAppropriateForFilenameFromHost:(id)arg1;
- (id)initWithHost:(id)arg1 bundlePath:(id)arg2 installationPath:(id)arg3 fileOperationToolPath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

