//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSImmutableOverrideValue.h>

@class NSString;

@interface MSImmutableOverrideValue : _MSImmutableOverrideValue
{
    NSString *_attributeName;
    NSString *_path;
}

+ (id)overrideValuesFromDictionary:(id)arg1;
+ (id)dictionaryFromOverrideValues:(id)arg1;
+ (id)overrideValuesFromDictionary:(id)arg1 withPrefix:(id)arg2;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *attributeName; // @synthesize attributeName=_attributeName;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL isValid;
- (void)calculateAttributeNameAndPath;
- (id)originalName;
- (id)overrideName;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end
