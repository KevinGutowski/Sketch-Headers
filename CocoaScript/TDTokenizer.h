//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TDCommentState, TDNumberState, TDQuoteState, TDReader, TDSymbolState, TDWhitespaceState, TDWordState;

@interface TDTokenizer : NSObject
{
    NSString *string;
    TDReader *reader;
    NSMutableArray *tokenizerStates;
    TDNumberState *numberState;
    TDQuoteState *quoteState;
    TDCommentState *commentState;
    TDSymbolState *symbolState;
    TDWhitespaceState *whitespaceState;
    TDWordState *wordState;
}

+ (id)tokenizerWithString:(id)arg1;
+ (id)tokenizer;
@property(retain, nonatomic) NSMutableArray *tokenizerStates; // @synthesize tokenizerStates;
@property(retain, nonatomic) TDWordState *wordState; // @synthesize wordState;
@property(retain, nonatomic) TDWhitespaceState *whitespaceState; // @synthesize whitespaceState;
@property(retain, nonatomic) TDSymbolState *symbolState; // @synthesize symbolState;
@property(retain, nonatomic) TDCommentState *commentState; // @synthesize commentState;
@property(retain, nonatomic) TDQuoteState *quoteState; // @synthesize quoteState;
@property(retain, nonatomic) TDNumberState *numberState; // @synthesize numberState;
- (id)tokenizerStateFor:(long long)arg1;
@property(retain, nonatomic) NSString *string; // @synthesize string;
@property(retain, nonatomic) TDReader *reader;
- (void)setTokenizerState:(id)arg1 from:(long long)arg2 to:(long long)arg3;
- (void)addTokenizerState:(id)arg1 from:(long long)arg2 to:(long long)arg3;
- (id)nextToken;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)init;

@end
