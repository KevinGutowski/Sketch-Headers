//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BCFoundation/BCSingleton.h>

@class MSVersionedArchive;

@interface MSDefaultArchive : BCSingleton
{
    MSVersionedArchive *_archive;
}

@property(retain, nonatomic) MSVersionedArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
@property(retain, nonatomic) id defaultObject;
- (id)newObject;
- (id)archivesNeedingMigration;
- (Class)defaultClass;
- (id)oldDefaultsName;
- (id)filename;

@end

