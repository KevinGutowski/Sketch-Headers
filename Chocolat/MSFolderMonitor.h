//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MSFolderMonitor : NSObject
{
    struct __FSEventStream *_eventStream;
    NSURL *_folderURL;
    CDUnknownBlockType _contentsChangedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType contentsChangedBlock; // @synthesize contentsChangedBlock=_contentsChangedBlock;
@property(copy, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
- (void).cxx_destruct;
- (void)restart;
- (void)stop;
- (void)dealloc;
- (void)flush;
- (unsigned int)flags;
- (id)initWithURL:(id)arg1 latency:(double)arg2 contentsChangedBlock:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1 contentsChangedBlock:(CDUnknownBlockType)arg2;

@end
