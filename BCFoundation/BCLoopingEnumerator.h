//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSArray;

@interface BCLoopingEnumerator : NSEnumerator
{
    NSArray *_array;
    NSEnumerator *_enumerator;
}

@property(retain, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (id)allObjects;
- (id)nextObject;
- (id)initWithArray:(id)arg1;

@end
