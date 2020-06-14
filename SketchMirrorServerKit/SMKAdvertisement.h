//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchMirrorServerKit/NSCopying-Protocol.h>
#import <SketchMirrorServerKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface SMKAdvertisement : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_name;
    NSString *_modelName;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

