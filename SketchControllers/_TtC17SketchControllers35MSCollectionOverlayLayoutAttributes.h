//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSIndexPath;

@interface _TtC17SketchControllers35MSCollectionOverlayLayoutAttributes : NSObject
{
    MISSING_TYPE *indexPath;
    MISSING_TYPE *representedElementCategory;
    MISSING_TYPE *representedElementKind;
    MISSING_TYPE *bounds;
    MISSING_TYPE *center;
    MISSING_TYPE *isHidden;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden;
@property(nonatomic) struct CGPoint center; // @synthesize center;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds;
@property(nonatomic) struct CGRect frame;
@property(nonatomic, copy) NSIndexPath *indexPath;
- (id)initForSupplementaryOfKind:(id)arg1 at:(id)arg2;
- (id)initForItemAt:(id)arg1;

@end

