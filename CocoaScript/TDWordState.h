//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CocoaScript/TDTokenizerState.h>

@class NSMutableArray;

@interface TDWordState : TDTokenizerState
{
    NSMutableArray *wordChars;
}

@property(retain, nonatomic) NSMutableArray *wordChars; // @synthesize wordChars;
- (id)nextTokenFromReader:(id)arg1 startingWith:(long long)arg2 tokenizer:(id)arg3;
- (BOOL)isWordChar:(long long)arg1;
- (void)setWordChars:(BOOL)arg1 from:(long long)arg2 to:(long long)arg3;
- (void)dealloc;
- (id)init;

@end

