//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface MSSafeFontSet : NSObject
{
    NSSet *_fontSet;
}

+ (id)sharedSet;
@property(retain, nonatomic) NSSet *fontSet; // @synthesize fontSet=_fontSet;
- (void).cxx_destruct;
- (BOOL)isFontSafe:(id)arg1;
- (id)init;

@end
