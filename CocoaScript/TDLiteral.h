//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CocoaScript/TDTerminal.h>

@class TDToken;

@interface TDLiteral : TDTerminal
{
    TDToken *literal;
}

+ (id)literalWithString:(id)arg1;
@property(retain, nonatomic) TDToken *literal; // @synthesize literal;
- (id)description;
- (BOOL)qualifies:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end
