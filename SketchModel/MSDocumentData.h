//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSDocumentData.h>

#import <SketchModel/MSDocumentDataProtocol-Protocol.h>
#import <SketchModel/MSLayerContainer-Protocol.h>
#import <SketchModel/MSLayerContainment-Protocol.h>

@class BCCache, MSFontList, MSImmutableDocumentData, MSPage, NSArray, NSData, NSDictionary, NSString, _TtC11SketchModel16MSEditingContext;
@protocol MSDocumentDataDelegate;

@interface MSDocumentData : _MSDocumentData <MSLayerContainment, MSDocumentDataProtocol, MSLayerContainer>
{
    BOOL _autoExpandGroupsInLayerList;
    NSDictionary *_symbolMap;
    NSArray *_selectedOverrides;
    _TtC11SketchModel16MSEditingContext *_editingContext;
    BCCache *_cache;
    id <MSDocumentDataDelegate> _delegate;
    NSDictionary *_metadata;
    NSData *_textPreviewData;
    NSData *_textPreviewMetadata;
    MSFontList *_fontList;
    NSString *_sessionIdentifier;
}

+ (id)libraryForForeignObject:(id)arg1 inLibraries:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
@property(retain, nonatomic) NSData *textPreviewMetadata; // @synthesize textPreviewMetadata=_textPreviewMetadata;
@property(retain, nonatomic) NSData *textPreviewData; // @synthesize textPreviewData=_textPreviewData;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL autoExpandGroupsInLayerList; // @synthesize autoExpandGroupsInLayerList=_autoExpandGroupsInLayerList;
@property(nonatomic) __weak id <MSDocumentDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BCCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) _TtC11SketchModel16MSEditingContext *editingContext; // @synthesize editingContext=_editingContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *layers;
- (void)refaultAgainst:(id)arg1;
- (void)prepareForChangeProcessingWithDiff:(id)arg1;
- (void)refreshOverlay;
- (void)layerDidChangeStyle:(id)arg1;
- (void)replaceExistingCreationMetadata;
- (id)embeddedFontReferences;
- (void)updateFontReferences:(id)arg1;
- (id)libraryFontNamesFromReferences:(id)arg1;
- (id)createFontReferenceForPostscriptName:(id)arg1 familyName:(id)arg2;
- (id)createFontReferencesForFamilyName:(id)arg1 currentReferences:(id)arg2 referencesByFace:(id)arg3;
- (id)urlsForFacesOfFontFamily:(id)arg1;
- (void)embedEligibleFontsInReferences:(id)arg1;
- (id)swatchWithID:(id)arg1;
- (id)allSwatches;
- (void)updateForeignSymbolsPreservingOverridesInBlock:(CDUnknownBlockType)arg1;
- (void)removeShareableObjectsFromInstanceOverrides:(id)arg1;
- (id)images;
- (id)layerStyleWithID:(id)arg1;
- (id)textStyleWithID:(id)arg1;
- (id)allLayerStyles;
- (id)allTextStyles;
- (id)sharedObjectContainerOfType:(unsigned long long)arg1;
@property(retain, nonatomic) NSArray *selectedOverrides; // @synthesize selectedOverrides=_selectedOverrides;
- (void)purgeForeignObjects;
- (void)purgeForeignStyles;
- (id)stylesReferencedInDocument;
- (void)purgeForeignSymbols;
- (id)symbolsReferencedBySymbolInstances;
- (id)symbolsReferencedBySymbolMasters;
- (id)symbolsReferencedByInstances:(id)arg1;
- (void)enumerateForeignObjects:(id)arg1 withLibraries:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)libraryForForeignObject:(id)arg1 inLibraries:(id)arg2;
- (id)symbolInstancesNestedInsideMasters:(id)arg1;
- (void)enumerateLayersAvoidingFaultingWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)invalidateAffectedSymbolInstancesWithDiff:(id)arg1;
- (void)addSymbolMaster:(id)arg1;
- (id)symbolWithID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *symbolMap; // @synthesize symbolMap=_symbolMap;
- (id)allForeignObjects;
- (id)allSymbols;
- (id)localSymbols;
- (id)allArtboards;
- (void)populateDictionary:(id)arg1 withChildrenOf:(id)arg2;
- (id)layersByObjectID;
- (id)artboardWithID:(id)arg1;
- (id)layerWithID:(id)arg1;
- (id)selectedLayers;
- (BOOL)documentIsEmpty;
- (void)fixDuplicateArtboardObjectIDs;
- (id)nameForNewPage;
- (id)symbolsPageOrCreateIfNecessary;
- (id)symbolsPage;
- (id)addBlankPage;
- (void)removePages:(id)arg1 detachInstances:(BOOL)arg2;
@property(retain, nonatomic) MSPage *currentPage;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)documentData;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)objectDidInit;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)performInitEmptyObject;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (id)defaultPagesArray;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (id)layerEnumeratorAvoidingFaultingWithOptions:(unsigned long long)arg1;
- (id)layerEnumeratorAvoidingFaultingWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)correctInvalidGamma;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
@property(readonly, nonatomic) MSImmutableDocumentData *immutableDocumentDataMetadataCopy;
- (void)replaceFonts:(id)arg1;
- (void)invalidateFonts;
- (id)metadataForKey:(id)arg1 object:(id)arg2;
- (void)storeMetadata:(id)arg1 forKey:(id)arg2 object:(id)arg3;
- (id)UIMetadataKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *pages;
@property(readonly) Class superclass;

@end

