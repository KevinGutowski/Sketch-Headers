//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface SCKObject : NSObject <NSSecureCoding>
{
    SCKObject *_parent;
    struct NSString *_objectID;
    NSDate *_creationDate;
    NSDate *_updateDate;
    NSDate *_deletionDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *deletionDate; // @synthesize deletionDate=_deletionDate;
@property(readonly, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) __weak SCKObject *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 parentObject:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithObjectID:(struct NSString *)arg1;

@end
