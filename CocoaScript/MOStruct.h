//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Mocha, NSArray, NSMutableDictionary, NSString;

@interface MOStruct : NSObject
{
    NSArray *_memberNames;
    NSMutableDictionary *_memberValues;
    Mocha *_runtime;
    NSString *_name;
}

+ (id)structureWithName:(id)arg1 memberNames:(id)arg2 runtime:(id)arg3;
@property(readonly, copy) NSArray *memberNames; // @synthesize memberNames=_memberNames;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forMemberName:(id)arg2;
- (id)objectForMemberName:(id)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 memberNames:(id)arg2 runtime:(id)arg3;

@end

