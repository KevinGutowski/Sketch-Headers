//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/NSStreamDelegate-Protocol.h>

@class NSString;
@protocol NSStreamDelegate;

@interface PSStreamDelegate : NSObject <NSStreamDelegate>
{
    id <NSStreamDelegate> _weakDelegate;
}

@property __weak id <NSStreamDelegate> weakDelegate; // @synthesize weakDelegate=_weakDelegate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

