//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MSDocumentData;
@protocol _TtP11SketchModel26MSEditingContextSubscriber_;

@interface _TtC11SketchModel16MSEditingContext : NSObject
{
    MISSING_TYPE *documentData;
    MISSING_TYPE *runLoopObservation;
    MISSING_TYPE *lastProcessedData;
    MISSING_TYPE *subscriber;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) __weak id <_TtP11SketchModel26MSEditingContextSubscriber_> subscriber; // @synthesize subscriber;
- (BOOL)processPendingChanges;
- (void)edited;
@property(nonatomic) __weak MSDocumentData *documentData; // @synthesize documentData;

@end

