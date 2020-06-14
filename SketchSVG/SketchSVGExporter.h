//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSImmutableSymbolInstance, MSSVGFilter, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSXMLDocument, NSXMLElement;

@interface SketchSVGExporter : NSObject
{
    BOOL _includeArtboardBackground;
    BOOL _includeSketchCredit;
    NSString *_mask;
    NSString *_currentShapeDef;
    MSImmutableDocumentData *_document;
    MSSVGFilter *_currentFilterGroup;
    MSImmutableSymbolInstance *_currentSymbolInstance;
    NSXMLDocument *_doc;
    NSXMLElement *_defs;
    NSXMLElement *_root;
    NSMutableDictionary *_gradients;
    unsigned long long _nextUniqueID;
    NSMutableArray *_parentStack;
    NSSet *_includedLayerIDs;
    struct CGRect _exportBounds;
}

@property(readonly, nonatomic) BOOL includeSketchCredit; // @synthesize includeSketchCredit=_includeSketchCredit;
@property(readonly, nonatomic) NSSet *includedLayerIDs; // @synthesize includedLayerIDs=_includedLayerIDs;
@property(readonly, nonatomic) NSMutableArray *parentStack; // @synthesize parentStack=_parentStack;
@property(nonatomic) unsigned long long nextUniqueID; // @synthesize nextUniqueID=_nextUniqueID;
@property(readonly, nonatomic) NSMutableDictionary *gradients; // @synthesize gradients=_gradients;
@property(readonly, nonatomic) NSXMLElement *root; // @synthesize root=_root;
@property(readonly, nonatomic) NSXMLElement *defs; // @synthesize defs=_defs;
@property(readonly, nonatomic) NSXMLDocument *doc; // @synthesize doc=_doc;
@property(readonly, nonatomic) BOOL includeArtboardBackground; // @synthesize includeArtboardBackground=_includeArtboardBackground;
@property(retain, nonatomic) MSImmutableSymbolInstance *currentSymbolInstance; // @synthesize currentSymbolInstance=_currentSymbolInstance;
@property(retain, nonatomic) MSSVGFilter *currentFilterGroup; // @synthesize currentFilterGroup=_currentFilterGroup;
@property(retain, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(retain, nonatomic) NSString *currentShapeDef; // @synthesize currentShapeDef=_currentShapeDef;
@property(retain, nonatomic) NSString *mask; // @synthesize mask=_mask;
@property(readonly, nonatomic) struct CGRect exportBounds; // @synthesize exportBounds=_exportBounds;
- (void).cxx_destruct;
- (BOOL)layerIsIncluded:(id)arg1;
- (BOOL)isDrawingSymbol;
- (void)drawSymbolInstance:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)performWithParent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)popParent;
- (void)pushParent:(id)arg1;
- (id)parentForLayer:(id)arg1;
- (id)ancestorsForLayer:(id)arg1;
- (id)radialGradientAttributes:(id)arg1 inRect:(id)arg2;
- (id)linearGradientAttributes:(id)arg1 inRect:(id)arg2;
- (id)stopsForGradient:(id)arg1;
- (id)gradientElement:(id)arg1 inRect:(id)arg2;
- (void)addGradient:(id)arg1 inRect:(id)arg2;
- (id)hashForGradient:(id)arg1 inRect:(id)arg2;
- (BOOL)endFilterGroup;
- (id)beginFilterGroup;
- (id)addDefinitionWithName:(id)arg1 children:(id)arg2 attributes:(id)arg3;
- (id)uniqueIDForElementWithName:(id)arg1;
- (id)description;
- (unsigned long long)titleIndexInRoot;
- (BOOL)hasTitle;
@property(readonly, nonatomic) BOOL hasDefs;
- (id)exportLayers:(id)arg1;
- (id)initWithName:(id)arg1 exportRequest:(id)arg2;
- (id)initWithImmutableDocument:(id)arg1 exportRect:(struct CGRect)arg2 layerIDs:(id)arg3 includeBackground:(BOOL)arg4;
- (id)init;
- (void)setupCommonElementsWithName:(id)arg1;
- (void)setRootSVGElementAttributes;

@end

