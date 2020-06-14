//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MSOverridePoint : NSObject
{
    NSString *_path;
    NSString *_layerID;
    NSString *_property;
    MSOverridePoint *_parent;
    NSString *_layerName;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
@property(readonly, nonatomic) __weak MSOverridePoint *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic) NSString *layerID; // @synthesize layerID=_layerID;
- (void).cxx_destruct;
- (long long)distanceToOverridePoint:(id)arg1;
- (long long)comparisonScoreAgainst:(id)arg1;
- (BOOL)canAcceptDataOfType:(id)arg1;
@property(readonly, nonatomic) BOOL isStyleOverride;
@property(readonly, nonatomic) BOOL isSymbolOverride;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *pathComponents;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)initWithLayer:(id)arg1 property:(id)arg2 parent:(id)arg3;

@end

