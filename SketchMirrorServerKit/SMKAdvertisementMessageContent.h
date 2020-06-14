//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchMirrorServerKit/SMKMessageCoding-Protocol.h>

@class NSDictionary, NSString, SMKAdvertisement;

@interface SMKAdvertisementMessageContent : NSObject <SMKMessageCoding>
{
    SMKAdvertisement *_advertisement;
    NSString *_challenge;
}

@property(retain, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) SMKAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

