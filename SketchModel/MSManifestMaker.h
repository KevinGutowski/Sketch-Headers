//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, NSDictionary, NSString, NSURL;

@interface MSManifestMaker : NSObject
{
    BOOL _selectiveExport;
    BOOL _usePageIfMissingArtboard;
    BOOL _ignoreMirrorExportScale;
    MSImmutableDocumentData *_immutableDocumentData;
    NSString *_name;
    NSURL *_fileURL;
    NSDictionary *_applicationMetadata;
}

+ (id)keyForFlowAnimationType:(long long)arg1;
+ (id)manifestValueForColorSpace:(unsigned long long)arg1;
@property(nonatomic) BOOL ignoreMirrorExportScale; // @synthesize ignoreMirrorExportScale=_ignoreMirrorExportScale;
@property(copy, nonatomic) NSDictionary *applicationMetadata; // @synthesize applicationMetadata=_applicationMetadata;
@property(nonatomic) BOOL usePageIfMissingArtboard; // @synthesize usePageIfMissingArtboard=_usePageIfMissingArtboard;
@property(nonatomic) BOOL selectiveExport; // @synthesize selectiveExport=_selectiveExport;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MSImmutableDocumentData *immutableDocumentData; // @synthesize immutableDocumentData=_immutableDocumentData;
- (void).cxx_destruct;
- (id)metadataForFlow:(id)arg1;
- (double)roundValue:(double)arg1;
- (id)dictForRect:(struct CGRect)arg1 inRootLayer:(id)arg2;
- (id)metadataForLayer:(id)arg1 fixedByLayer:(id)arg2;
- (id)specialiseObjectMetadata:(id)arg1 forSymbolInstance:(id)arg2;
- (id)metadataForChildLayersInSymbolInstance:(id)arg1 inRootLayer:(id)arg2 positionTransform:(struct CGAffineTransform)arg3 withAncestors:(id)arg4 earlierSymbols:(id)arg5 fixedByLayer:(id)arg6;
- (id)metadataForChildLayersInLayer:(id)arg1 inRootLayer:(id)arg2 positionTransform:(struct CGAffineTransform)arg3 withAncestors:(id)arg4 earlierSymbols:(id)arg5 fixedByLayer:(id)arg6;
- (id)metadataForLayer:(id)arg1 inRootLayer:(id)arg2 positionTransform:(struct CGAffineTransform)arg3 withAncestors:(id)arg4 earlierSymbols:(id)arg5 fixedByLayer:(id)arg6;
- (id)metadataForLayersInRootLayer:(id)arg1 ancestors:(id)arg2;
- (id)filesMetadataForAncestry:(id)arg1 id:(id)arg2;
- (id)metadataForRootLayer:(id)arg1 onPage:(id)arg2 earlierSlugs:(id)arg3;
- (id)formatAsInteger:(double)arg1;
- (BOOL)shouldExportLayerGroup:(id)arg1 onPage:(id)arg2;
- (id)metadataAndExportForArtboardsOnPage:(id)arg1;
- (id)metadataAndExportForPage:(id)arg1 earlierSlugs:(id)arg2;
- (id)metadataAndExportForPages:(id)arg1;
- (id)createManifest;
- (id)initWithDocument:(id)arg1;

@end

