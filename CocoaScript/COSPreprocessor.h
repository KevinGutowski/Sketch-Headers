//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface COSPreprocessor : NSObject
{
}

+ (id)preprocessCode:(id)arg1;
+ (id)preprocessCode:(id)arg1 withBaseURL:(id)arg2;
+ (id)processImports:(id)arg1 withBaseURL:(id)arg2 importedURLs:(id)arg3;
+ (id)preprocessForObjCMessagesToJS:(id)arg1;
+ (id)fixTypeToVar:(id)arg1;
+ (BOOL)isCloseSymbol:(id)arg1;
+ (BOOL)isOpenSymbol:(id)arg1;
+ (id)preprocessForObjCStrings:(id)arg1;
+ (id)processMultilineStrings:(id)arg1;

@end

