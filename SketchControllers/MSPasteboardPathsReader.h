//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSPasteboardReader-Protocol.h>

@class NSString;

@interface MSPasteboardPathsReader : NSObject <MSPasteboardReader>
{
}

- (unsigned long long)imageImportMode;
- (id)pasteboardDataFromPasteboard:(id)arg1 colorSpace:(id)arg2 options:(unsigned long long)arg3 sender:(id)arg4 convertColorSpace:(BOOL)arg5;
- (id)supportedPasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

