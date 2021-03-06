//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SUPublicKeys;

__attribute__((visibility("hidden")))
@interface SUSignatureVerifier : NSObject
{
    SUPublicKeys *_pubKeys;
}

+ (BOOL)validatePath:(id)arg1 withSignatures:(id)arg2 withPublicKeys:(id)arg3;
@property(readonly) SUPublicKeys *pubKeys; // @synthesize pubKeys=_pubKeys;
- (void).cxx_destruct;
- (BOOL)verifyDSASignatureOfStream:(id)arg1 dsaSignature:(id)arg2;
- (BOOL)verifyFileAtPath:(id)arg1 signatures:(id)arg2;
- (struct __SecKey *)dsaSecKeyRef;
- (id)initWithPublicKeys:(id)arg1;

@end

