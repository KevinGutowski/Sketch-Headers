//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSSharedStyle.h>

#import <SketchControllers/MSSharedObjectStyling-Protocol.h>

@class NSString;

@interface MSSharedStyle (MSShareableObjectReferenceExtention) <MSSharedObjectStyling>
- (Class)shareableObjectReferenceClass_bc;
- (void)generatePreviewImageAtSize:(struct CGSize)arg1 maximumSizeWithDecorations:(struct CGSize)arg2 backingScale:(double)arg3 colorSpace:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)generatePreviewForSyncSheetWithSize:(struct CGSize)arg1 backingScale:(double)arg2 shadow:(BOOL)arg3 colorSpace:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)generateTextPreviewWithSize:(struct CGSize)arg1 backingScale:(double)arg2 colorSpace:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)applyStyleToMenuItem:(id)arg1 withColorSpace:(id)arg2;
- (id)generatePreviewForManageSheetWithBackingScale:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)generatePreviewForPopup:(id)arg1 backingScale:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)generatePreviewForMenuItem:(id)arg1 withColorSpace:(id)arg2 backingScale:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
