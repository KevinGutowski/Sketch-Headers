//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

@class NSArray, NSString, NSURL, SCKProject, SCKShareVersion;
@protocol SCKContentOwner;

@interface SCKShare : SCKObject
{
    BOOL _isPrivate;
    BOOL _canUpdate;
    BOOL _libraryEnabled;
    NSURL *_publicURL;
    NSString *_name;
    NSString *_shortID;
    SCKShareVersion *_currentVersion;
    NSArray *_previewThumbnails;
    SCKObject<SCKContentOwner> *_owner;
    SCKProject *_project;
    NSString *_selectedArtboardID;
    NSString *_selectedPageID;
}

@property(readonly, nonatomic) BOOL libraryEnabled; // @synthesize libraryEnabled=_libraryEnabled;
@property(readonly, nonatomic) NSString *selectedPageID; // @synthesize selectedPageID=_selectedPageID;
@property(readonly, nonatomic) NSString *selectedArtboardID; // @synthesize selectedArtboardID=_selectedArtboardID;
@property(readonly, nonatomic) SCKProject *project; // @synthesize project=_project;
@property(readonly, nonatomic) SCKObject<SCKContentOwner> *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSArray *previewThumbnails; // @synthesize previewThumbnails=_previewThumbnails;
@property(readonly, nonatomic) BOOL canUpdate; // @synthesize canUpdate=_canUpdate;
@property(readonly, nonatomic) SCKShareVersion *currentVersion; // @synthesize currentVersion=_currentVersion;
@property(readonly, nonatomic) BOOL isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) NSString *shortID; // @synthesize shortID=_shortID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)shareBySettingCurrentVersion:(id)arg1;
- (BOOL)isManagedByOwner:(id)arg1;
- (BOOL)isUpdatedByShare:(id)arg1;
- (id)readOnlyCopy;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSURL *publicURL; // @synthesize publicURL=_publicURL;
- (id)initWithDictionary:(id)arg1;

@end
