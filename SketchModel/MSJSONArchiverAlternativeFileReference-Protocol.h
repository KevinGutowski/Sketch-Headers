//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/NSObject-Protocol.h>

@class BCJSONZippedDecoder, BCJSONZippedEncoder, NSString;

@protocol MSJSONArchiverAlternativeFileReference <NSObject>
+ (id)decodeReferenceFromJSONZipArchive:(BCJSONZippedDecoder *)arg1 withReference:(NSString *)arg2;
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
- (void)encodeReferenceInJSONZipArchive:(BCJSONZippedEncoder *)arg1;
@end

