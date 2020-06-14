//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchModel/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MSPointArray : NSObject <NSCopying>
{
    NSMutableArray *_points;
}

@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
- (void).cxx_destruct;
- (id)treeAsDictionary;
- (id)description;
- (void)replacePointAtIndex:(unsigned long long)arg1 withPoint:(struct CGPoint)arg2;
- (unsigned long long)countOfPoints;
- (void)removePoint:(struct CGPoint)arg1;
- (void)removePointAtIndex:(unsigned long long)arg1;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;
- (void)insertPoint:(struct CGPoint)arg1 atIndex:(unsigned long long)arg2;
- (void)addPoint:(struct CGPoint)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
