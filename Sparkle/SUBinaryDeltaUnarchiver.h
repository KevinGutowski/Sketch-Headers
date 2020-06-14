//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sparkle/SUUnarchiverProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SUBinaryDeltaUnarchiver : NSObject <SUUnarchiverProtocol>
{
    NSString *_archivePath;
    NSString *_updateHostBundlePath;
}

+ (void)updateSpotlightImportersAtBundlePath:(id)arg1;
+ (BOOL)mustValidateBeforeExtraction;
+ (BOOL)canUnarchivePath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *updateHostBundlePath; // @synthesize updateHostBundlePath=_updateHostBundlePath;
@property(readonly, copy, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)extractDeltaWithNotifier:(id)arg1;
- (void)unarchiveWithCompletionBlock:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)initWithArchivePath:(id)arg1 updateHostBundlePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

