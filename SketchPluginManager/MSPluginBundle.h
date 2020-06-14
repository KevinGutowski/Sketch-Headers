//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPluginBundleIconInfo, NSDictionary, NSImage, NSString, NSURL;

@interface MSPluginBundle : NSObject
{
    BOOL _suppliesData;
    BOOL _enabled;
    BOOL _disableCocoaScriptPreprocessor;
    NSURL *_url;
    NSDictionary *_commands;
    NSString *_version;
    NSString *_name;
    NSString *_identifier;
    NSString *_pluginDescription;
    NSDictionary *_menuDescription;
    NSURL *_homepageURL;
    NSString *_author;
    NSString *_authorEmail;
    NSURL *_appcastURL;
    NSString *_compatibleVersion;
    NSString *_maximumCompatibleVersion;
    MSPluginBundleIconInfo *_iconInfo;
}

+ (id)scriptDefaultTitle;
+ (id)commandsFromArray:(id)arg1 sketchPluginURL:(id)arg2 pluginBundle:(id)arg3;
+ (id)pluginBundleWithURL:(id)arg1;
@property(retain, nonatomic) MSPluginBundleIconInfo *iconInfo; // @synthesize iconInfo=_iconInfo;
@property(nonatomic) BOOL disableCocoaScriptPreprocessor; // @synthesize disableCocoaScriptPreprocessor=_disableCocoaScriptPreprocessor;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *maximumCompatibleVersion; // @synthesize maximumCompatibleVersion=_maximumCompatibleVersion;
@property(readonly, copy, nonatomic) NSString *compatibleVersion; // @synthesize compatibleVersion=_compatibleVersion;
@property(readonly, copy, nonatomic) NSURL *appcastURL; // @synthesize appcastURL=_appcastURL;
@property(readonly, copy, nonatomic) NSString *authorEmail; // @synthesize authorEmail=_authorEmail;
@property(readonly, copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSURL *homepageURL; // @synthesize homepageURL=_homepageURL;
@property(copy, nonatomic) NSDictionary *menuDescription; // @synthesize menuDescription=_menuDescription;
@property(readonly, nonatomic) BOOL suppliesData; // @synthesize suppliesData=_suppliesData;
@property(readonly, copy, nonatomic) NSString *pluginDescription; // @synthesize pluginDescription=_pluginDescription;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)urlForResourceNamed:(id)arg1;
@property(readonly, copy, nonatomic) NSString *versionedIdentifier;
- (BOOL)writeToURL:(id)arg1;
@property(readonly, nonatomic) NSImage *alertIcon;
@property(readonly, nonatomic) NSImage *icon;
- (id)metadata;
@property(readonly, nonatomic, getter=isCompatible) BOOL compatible;
- (id)initWithName:(id)arg1 identifier:(id)arg2 commands:(id)arg3 icon:(id)arg4;
- (void)logErrorString:(id)arg1;
- (id)initPluginBundleWithURL:(id)arg1;

@end

