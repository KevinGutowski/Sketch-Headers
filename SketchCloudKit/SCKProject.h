//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

@class NSString, SCKPaginatedShares;

@interface SCKProject : SCKObject
{
    NSString *_shortID;
    NSString *_name;
    SCKPaginatedShares *_paginatedShares;
}

@property(readonly, nonatomic) SCKPaginatedShares *paginatedShares; // @synthesize paginatedShares=_paginatedShares;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *shortID; // @synthesize shortID=_shortID;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

