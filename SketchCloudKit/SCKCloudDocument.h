//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchCloudKit/SCKDocument.h>

#import <SketchCloudKit/SCKDiffable-Protocol.h>

@class NSString, NSURL;

@interface SCKCloudDocument : SCKDocument <SCKDiffable>
{
    BOOL _isProcessing;
    NSString *_slug;
    NSURL *_downloadURL;
}

@property(readonly, nonatomic) BOOL isProcessing; // @synthesize isProcessing=_isProcessing;
@property(readonly, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) NSString *slug; // @synthesize slug=_slug;
- (void).cxx_destruct;
- (id)name;
- (id)initWithDictionary:(id)arg1 parentObject:(id)arg2;
- (id)diffComparedTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
