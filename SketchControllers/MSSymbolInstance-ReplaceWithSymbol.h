//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/MSSymbolInstance.h>

@interface MSSymbolInstance (ReplaceWithSymbol)
- (id)replaceWithInstanceOfSymbol:(id)arg1;
- (id)pathForHoverInBounds;
- (struct MSModelObject *)sharedMaster;
- (unsigned long long)shareableObjectType;
- (void)applyData:(id)arg1 fromDataSupplier:(id)arg2 identifier:(id)arg3;
- (long long)calculatePreviewIconTraitsForState:(unsigned long long)arg1;
- (id)childrenForLayerList;
- (BOOL)isExpanded;
- (BOOL)expandableInLayerList;
- (BOOL)hasRefreshableDataWithDataManager:(id)arg1;
- (unsigned long long)applicableDataTypes;
- (BOOL)previewShouldIndicateSharedStyle;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)styleForBooleanOperation;
@end
