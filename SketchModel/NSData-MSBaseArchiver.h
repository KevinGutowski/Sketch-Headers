//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import <SketchModel/MSCoding-Protocol.h>

@class NSString;

@interface NSData (MSBaseArchiver) <MSCoding>
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (id)treeAsDictionary;

// Remaining properties
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
@end
