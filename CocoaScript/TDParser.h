//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TDParser : NSObject
{
    id assembler;
    SEL selector;
    NSString *name;
}

+ (id)parser;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(nonatomic) id assembler; // @synthesize assembler;
- (id)description;
- (id)best:(id)arg1;
- (id)matchAndAssemble:(id)arg1;
- (id)completeMatchFor:(id)arg1;
- (id)bestMatchFor:(id)arg1;
- (id)allMatchesFor:(id)arg1;
- (void)setAssembler:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;

@end
