//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sparkle/SUInstallerProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SUGuidedPackageInstaller : NSObject <SUInstallerProtocol>
{
    NSString *_packagePath;
    NSString *_installationPath;
    NSString *_fileOperationToolPath;
}

@property(readonly, copy, nonatomic) NSString *fileOperationToolPath; // @synthesize fileOperationToolPath=_fileOperationToolPath;
@property(readonly, copy, nonatomic) NSString *installationPath; // @synthesize installationPath=_installationPath;
@property(readonly, copy, nonatomic) NSString *packagePath; // @synthesize packagePath=_packagePath;
- (void).cxx_destruct;
- (BOOL)canInstallSilently;
- (BOOL)performFinalInstallationProgressBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)performInitialInstallation:(id *)arg1;
- (id)initWithPackagePath:(id)arg1 installationPath:(id)arg2 fileOperationToolPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

