//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SharedEditing/MSPatchOperation.h>

@class NSObject, NSString;

@interface MSPropertyChangePatchOperation : MSPatchOperation
{
    NSString *_objectID;
    NSString *_propertyName;
    NSObject *_propertyValue;
}

@property(readonly, nonatomic) NSObject *propertyValue; // @synthesize propertyValue=_propertyValue;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)traits;
- (unsigned long long)applyPropertyChangeToDocument:(id)arg1;
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (id)initWithComparisonItem:(id)arg1;

@end
