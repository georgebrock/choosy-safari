/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PreferencesModule.h"

@class DefaultWebAppPopUpController, NSButton, NSMatrix, NSPopUpButton, NSTextField;

@interface GeneralPreferences : PreferencesModule
{
    NSTextField *homePageField;
    NSButton *useCurrentPageButton;
    NSButton *autoOpenDownloadsCheckbox;
    NSPopUpButton *defaultBrowserPopUp;
    NSPopUpButton *newWindowBehaviorPopUp;
    NSPopUpButton *downloadLocationPopUp;
    NSPopUpButton *downloadsClearingPolicyPopUp;
    NSPopUpButton *historyAgeLimitPopUp;
    NSTextField *historyAgeLimitLabel;
    NSMatrix *externalLinkPolicyMatrix;
    DefaultWebAppPopUpController *_defaultBrowserController;
    BOOL _defaultBrowserManaged;
    BOOL _confirmingHomePageURL;
}

- (void)updateDownloadLocationMenu;
- (void)updateDefaultBrowserMenu;
- (void)updateNewWindowBehaviorPopUp;
- (void)updateHomePageViews;
- (void)googleHomePageConfirmationDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)confirmSetHomePageToURLString:(id)fp8;
- (void)takeHomePageFrom:(id)fp8;
- (id)currentPageURL;
- (void)setHomePageToCurrentPage:(id)fp8;
- (void)updateUseCurrentPageButton;
- (void)takeNewWindowBehaviorFrom:(id)fp8;
- (void)takeDefaultBrowserFrom:(id)fp8;
- (void)takeHistoryAgeLimitFrom:(id)fp8;
- (void)updateHistoryAgeLimitPopUp;
- (void)takeDownloadsClearingPolicyFrom:(id)fp8;
- (void)choseDownloadFolderFromPanel:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)chooseDownloadFolderFromFileBrowser:(id)fp8;
- (void)toggleAutoOpenDownloads:(id)fp8;
- (void)updateExternalLinkPolicyViews;
- (void)takeExternalLinkPolicyFrom:(id)fp8;
- (void)readManagedPreferences;
- (void)initializeFromDefaults;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_parentalControlsDidChange;
- (void)windowDidBecomeKey:(id)fp8;
- (void)windowDidResignKey:(id)fp8;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (BOOL)isResizable;
- (id)helpAnchor;

@end

