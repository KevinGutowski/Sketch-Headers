//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSParagraphStyle.h>

#import <SketchModel/BCJSONEncoding-Protocol.h>

@class NSString;

@interface NSParagraphStyle (Chocolat) <BCJSONEncoding>
- (id)initWithJSONDecoder:(id)arg1;
- (void)encodeAsJSON:(id)arg1;
- (id)propertiesToArchive;
- (id)treeAsDictionary;
- (id)propertiesDictionary;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
@property(readonly, nonatomic) double fixedLineHeight_ms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

