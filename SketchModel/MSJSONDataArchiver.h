//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSJSONArchiver.h>

@class BCJSONEncoder, NSMutableData;

@interface MSJSONDataArchiver : MSJSONArchiver
{
    BCJSONEncoder *_dataEncoder;
    NSMutableData *_archivedData;
}

+ (id)archiveStringWithRootObject:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableData *archivedData; // @synthesize archivedData=_archivedData;
@property(retain, nonatomic) BCJSONEncoder *dataEncoder; // @synthesize dataEncoder=_dataEncoder;
- (void).cxx_destruct;
- (void)archiveRootObject:(id)arg1;
- (id)replacementObjectForObject:(id)arg1;
- (id)archivedDataWithRootObject:(id)arg1 error:(id *)arg2;
- (id)encoder;
- (id)init;

@end
