//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol MSCloudAssetLibraryControllerDelegate;

@interface MSCloudAssetLibraryController : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *incompletePaginationControllers;
    MISSING_TYPE *subscription;
    MISSING_TYPE *user;
}

- (void).cxx_destruct;
- (id)init;
- (void)fetchLibraries;
@property(nonatomic) __weak id <MSCloudAssetLibraryControllerDelegate> delegate; // @synthesize delegate;

@end
