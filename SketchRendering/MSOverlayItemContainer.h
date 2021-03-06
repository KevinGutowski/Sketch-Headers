//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface MSOverlayItemContainer : NSObject
{
    BOOL _isEmpty;
    NSArray *_pathItems;
    NSArray *_bitmapItems;
    NSArray *_labelItems;
    NSSet *_flowItems;
}

+ (id)containerWithPathItem:(id)arg1;
+ (id)containerWithPathItems:(id)arg1;
+ (id)container;
@property(readonly, nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
@property(readonly, copy, nonatomic) NSSet *flowItems; // @synthesize flowItems=_flowItems;
@property(readonly, copy, nonatomic) NSArray *labelItems; // @synthesize labelItems=_labelItems;
@property(readonly, copy, nonatomic) NSArray *bitmapItems; // @synthesize bitmapItems=_bitmapItems;
@property(readonly, copy, nonatomic) NSArray *pathItems; // @synthesize pathItems=_pathItems;
- (void).cxx_destruct;
- (BOOL)isEqualToOverlayItemContainer:(id)arg1;
- (id)appendingItems:(id)arg1;
- (id)initWithPathItems:(id)arg1 bitmapItems:(id)arg2 labelItems:(id)arg3 flowItems:(id)arg4;
- (id)initWithPathItems:(id)arg1 bitmapItems:(id)arg2 labelItems:(id)arg3;
- (id)init;

@end

