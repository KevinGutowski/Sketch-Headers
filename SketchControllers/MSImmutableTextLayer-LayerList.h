//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSImmutableTextLayer.h>

#import <SketchControllers/MSColorUser-Protocol.h>

@class NSString;

@interface MSImmutableTextLayer (LayerList) <MSColorUser>
- (id)basePreviewImageForTraits:(long long)arg1 inDocument:(id)arg2;
- (id)overridePreviewImageInDocument:(id)arg1;
- (id)previewImageForOverrideManagement;
- (unsigned long long)useOfColorWithOwner:(id)arg1;
- (void)enumerateColors:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

