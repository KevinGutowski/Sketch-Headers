//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSOverrideValue.h>

@class NSString;

@interface MSOverrideValue : _MSOverrideValue
{
    BOOL _isInherited;
    MSOverrideValue *_predecessor;
}

@property(retain, nonatomic) MSOverrideValue *predecessor; // @synthesize predecessor=_predecessor;
@property(nonatomic) BOOL isInherited; // @synthesize isInherited=_isInherited;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *attributeName;
- (id)originalName;
- (id)overrideName;
- (void)setOverrideName:(id)arg1;
- (void)addPredecessor:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

