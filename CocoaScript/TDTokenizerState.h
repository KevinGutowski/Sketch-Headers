//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface TDTokenizerState : NSObject
{
    NSMutableString *stringbuf;
}

@property(retain, nonatomic) NSMutableString *stringbuf; // @synthesize stringbuf;
- (id)bufferedString;
- (void)appendString:(id)arg1;
- (void)append:(long long)arg1;
- (void)reset;
- (id)nextTokenFromReader:(id)arg1 startingWith:(long long)arg2 tokenizer:(id)arg3;
- (void)dealloc;

@end

