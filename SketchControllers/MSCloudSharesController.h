//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, SCKOrganization, SCKProject;
@protocol MSCloudSharesControllerDelegate;

@interface MSCloudSharesController : NSObject
{
    MISSING_TYPE *paginationController;
    MISSING_TYPE *delegate;
    MISSING_TYPE *organization;
    MISSING_TYPE *project;
    MISSING_TYPE *searchText;
}

- (void).cxx_destruct;
- (id)init;
- (void)startLoadingAdditionalShares;
@property(nonatomic, readonly) BOOL canLoadAdditionalShares;
- (void)startLoadingInitialShares;
@property(nonatomic, readonly) BOOL isLoadingInitialShares;
@property(nonatomic, readonly) BOOL isCurrentlyLoading;
@property(nonatomic, readonly) BOOL shouldLoadInitialShares;
@property(nonatomic, readonly) NSArray *shares;
@property(nonatomic, copy) NSString *searchText;
@property(nonatomic, readonly) SCKProject *project; // @synthesize project;
@property(nonatomic, readonly) SCKOrganization *organization; // @synthesize organization;
@property(nonatomic) __weak id <MSCloudSharesControllerDelegate> delegate; // @synthesize delegate;

@end

