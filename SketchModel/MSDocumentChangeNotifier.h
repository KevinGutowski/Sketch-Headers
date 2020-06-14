//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDocumentChangeIntervalNotifier;

@interface MSDocumentChangeNotifier : NSObject
{
    MSDocumentChangeIntervalNotifier *_instantNotifier;
    MSDocumentChangeIntervalNotifier *_fastNotifier;
    MSDocumentChangeIntervalNotifier *_mediumNotifier;
    MSDocumentChangeIntervalNotifier *_slowNotifier;
}

@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *slowNotifier; // @synthesize slowNotifier=_slowNotifier;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *mediumNotifier; // @synthesize mediumNotifier=_mediumNotifier;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *fastNotifier; // @synthesize fastNotifier=_fastNotifier;
@property(retain, nonatomic) MSDocumentChangeIntervalNotifier *instantNotifier; // @synthesize instantNotifier=_instantNotifier;
- (void).cxx_destruct;
- (void)processDocumentUpdate:(id)arg1;
- (void)unregisterAllObservers;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1 withFrequency:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
