//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSSwatchContainer.h>

@interface _TtC11SketchModel17MSSwatchContainer : _MSSwatchContainer
{
}

- (id)initWithMinimalSetup;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithImmutableModelObject:(id)arg1;
- (id)swatches;
@property(nonatomic, readonly) unsigned long long numberOfSwatches;
- (long long)indexOfSwatch:(id)arg1;
- (id)swatchAt:(unsigned long long)arg1;
- (id)swatchWithID:(id)arg1;
- (void)removeSwatchWithSwatch:(id)arg1;
- (id)objectsReferencing:(id)arg1 inContainer:(id)arg2;
- (void)removeSharedObjects:(id)arg1;
- (void)updateReferencesToSwatch:(id)arg1;
- (id)addSwatchWithName:(id)arg1 color:(id)arg2;
@property(nonatomic, readonly) Class sharedObjectClass;

@end

