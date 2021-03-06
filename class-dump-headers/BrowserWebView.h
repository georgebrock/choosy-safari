/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SearchableWebView.h"

@class BarBackground, BookmarksViewController, BrowserDocument, FormDelegate, LoadProgressMonitor, LocationChangeHandler, NSArray, NSDictionary, NSMutableArray, NSString, NSURLRequest, PageLoad, SecurityInfo, SheetRequest, WebClipBanner, WebHistoryItem;

@interface BrowserWebView : SearchableWebView
{
    BrowserDocument *_document;
    LoadProgressMonitor *_loadMonitor;
    NSURLRequest *_initialRequest;
    BOOL _shouldStartEmpty;
    WebHistoryItem *_searchResultsForSnapBack;
    WebHistoryItem *_pageForSnapBack;
    BOOL _nextPageShouldBeSnapBackPoint;
    BookmarksViewController *bookmarksViewController;
    BarBackground *bookmarksViewContents;
    NSString *_statusText;
    NSString *_progressStatus;
    id _progressStatusOwner;
    BOOL _ellipsizeProgressStatus;
    NSString *_generalStatus;
    id _generalStatusOwner;
    BOOL _ellipsizeGeneralStatus;
    NSString *_userDrivenStatus;
    id _userStatusOwner;
    BOOL _ellipsizeUserStatus;
    NSString *_provisionalOriginalURLString;
    NSString *_originalURLString;
    NSString *_pendingRSSFeedURLString;
    WebHistoryItem *_pendingRSSFeedReferrer;
    NSArray *_counterpartURLsForRSS;
    NSString *_requestedTabLabel;
    NSString *_provisionalTabLabel;
    NSString *_committedTabLabel;
    NSArray *_fallbackURLs;
    LocationChangeHandler *_locationChangeDelegate;
    SheetRequest *_sheetRequest;
    FormDelegate *_formDelegate;
    double _redirectDelay;
    float _cumulativeMagnifyDelta;
    short _stickyTextMagnifyGestureDirection;
    float _textSizeMultiplierAtGestureStart;
    BOOL _isLoadingIgnoringQueue;
    BOOL _isLoadingConsideringQueue;
    BOOL _mainDocumentHasLoaded;
    BOOL _mainDocumentDidFirstLayout;
    BOOL _mainFrameLoadEndedInError;
    BOOL _isWindowFocusDisabled;
    BOOL _downloadNextPage;
    BOOL _isShowingBookmarks;
    BOOL _wasShowingBookmarks;
    BOOL _isShowingRSS;
    BOOL _hasDisplayedValidURL;
    BOOL _registeredForNetworkConfigurationChanges;
    BOOL _isMovingToAnotherWindow;
    BOOL _isSwitchingToBackgroundTab;
    BOOL _restoringTabForUndoClose;
    BOOL _blockedFromKeyViewLoop;
    BOOL _bannerIsMovingIntoPlace;
    NSURLRequest *_requestWaitingInQueue;
    NSMutableArray *_iPhotoFileWrappers;
    struct ProcessSerialNumber iPhotoPSN;
    BOOL isObservingAppLaunches;
    NSDictionary *_parentalControlledElement;
    NSMutableArray *_currentBanners;
    WebClipBanner *_webClipBanner;
    BOOL _showingSecurityWarningPage;
    BOOL _loadingSecurityWarningPage;
    SecurityInfo *_provisionalSecurityInfo;
    WebHistoryItem *_historyItemForTabCloseUndo;
    PageLoad *_currentPageLoad;
}

+ (void)initialize;
+ (void)closeWebViewSoon:(id)fp8;
+ (void)closeAllPendingWebViews;
- (id)windowController;
- (id)browserWindow;
- (id)initWithDocument:(id)fp8 request:(id)fp12 frameName:(id)fp16;
- (void)dealloc;
- (void)beginGestureWithEvent:(id)fp8;
- (void)magnifyWithEvent:(id)fp8;
- (id)sheetRequest;
- (void)setSheetRequest:(id)fp8;
- (id)currentBanners;
- (BOOL)canShowFindInPageBanner;
- (void)showFindInPageBannerAllowingAnimation:(BOOL)fp8;
- (void)hideFindInPageBannerAllowingAnimation:(BOOL)fp8;
- (BOOL)isShowingWebClipBanner;
- (id)webClipBanner;
- (void)showWebClipBannerAllowingAnimation:(BOOL)fp8;
- (void)hideWebClipBannerAllowingAnimation:(BOOL)fp8;
- (BOOL)currentPageIsSearchable;
- (BOOL)isShowingSecurityWarningPage;
- (id)provisionalSecurityInfo;
- (void)setProvisionalSecurityInfo:(id)fp8;
- (id)securityInfo;
- (void)setSecurityInfo:(id)fp8;
- (void)commitProvisionalSecurityInfo;
- (void)setUpSecurityWarningPage;
- (void)showSecurityWarningPageWithSecurityInfo:(id)fp8;
- (void)hideSecurityWarningPage;
- (void)updateSecurityWarningPageWithSecurityInfo:(id)fp8;
- (void)securityWarningPageLoaded;
- (void)securityWarningPageIgnoreWarningButtonPressed;
- (void)securityWarningPageBackButtonPressed;
- (void)securityWarningPageClosePageButtonPressed;
- (id)securityWarningPageLocalizedStringsURLString;
- (void)setUpSecurityWarningPageController;
- (void)bannerDidInstall:(id)fp8;
- (void)bannerDidUninstall:(id)fp8;
- (id)viewBelowBanner:(id)fp8;
- (void)banner:(id)fp8 viewBelow:(id)fp12 wasResizedFromFrame:(struct _NSRect)fp16 animationProgress:(float)fp32 installing:(BOOL)fp36;
- (BOOL)findBanner:(id)fp8 doSearchFieldCommandBySelector:(SEL)fp12;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)viewDidMoveToWindow;
- (void)close;
- (void)_close;
- (id)document;
- (id)loadMonitor;
- (id)undoManagerForWebView:(id)fp8;
- (void)webView:(id)fp8 setStatusText:(id)fp12;
- (id)webViewStatusText:(id)fp8;
- (void)webView:(id)fp8 mouseDidMoveOverElement:(id)fp12 modifierFlags:(unsigned int)fp16;
- (id)webView:(id)fp8 createWebViewWithRequest:(id)fp12 windowFeatures:(id)fp16;
- (void)webView:(id)fp8 frame:(id)fp12 exceededDatabaseQuotaForSecurityOrigin:(id)fp16 database:(id)fp20;
- (void)webViewRunModal:(id)fp8;
- (void)webViewClose:(id)fp8;
- (void)webViewShow:(id)fp8;
- (void)webViewFocus:(id)fp8;
- (id)webViewFirstResponder:(id)fp8;
- (void)webView:(id)fp8 makeFirstResponder:(id)fp12;
- (BOOL)webViewAreToolbarsVisible:(id)fp8;
- (void)webView:(id)fp8 setToolbarsVisible:(BOOL)fp12;
- (BOOL)webViewIsStatusBarVisible:(id)fp8;
- (void)webView:(id)fp8 setStatusBarVisible:(BOOL)fp12;
- (BOOL)webViewIsResizable:(id)fp8;
- (void)webView:(id)fp8 setResizable:(BOOL)fp12;
- (id)mainWebFrameView;
- (void)webView:(id)fp8 setFrame:(struct _NSRect)fp12;
- (struct _NSRect)webViewFrame:(id)fp8;
- (void)webView:(id)fp8 setContentRect:(struct _NSRect)fp12;
- (struct _NSRect)webViewContentRect:(id)fp8;
- (void)webView:(id)fp8 didScrollDocumentInFrameView:(id)fp12;
- (void)webView:(id)fp8 runJavaScriptAlertPanelWithMessage:(id)fp12 initiatedByFrame:(id)fp16;
- (BOOL)webView:(id)fp8 runJavaScriptConfirmPanelWithMessage:(id)fp12 initiatedByFrame:(id)fp16;
- (BOOL)webView:(id)fp8 runBeforeUnloadConfirmPanelWithMessage:(id)fp12 initiatedByFrame:(id)fp16;
- (BOOL)webViewShouldInterruptJavaScript:(id)fp8;
- (id)webView:(id)fp8 runJavaScriptTextInputPanelWithPrompt:(id)fp12 defaultText:(id)fp16 initiatedByFrame:(id)fp20;
- (void)webView:(id)fp8 runOpenPanelForFileButtonWithResultListener:(id)fp12;
- (void)webView:(id)fp8 saveFrameView:(id)fp12 showingPanel:(BOOL)fp16;
- (BOOL)panel:(id)fp8 shouldShowFilename:(id)fp12;
- (void)openPanelDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (id)proposedBookmarkTitleForElement:(id)fp8;
- (BOOL)isMovingToAnotherWindow;
- (void)setMovingToAnotherWindow:(BOOL)fp8;
- (void)didMoveToDocument:(id)fp8;
- (void)willCloseWithUndo;
- (void)didReopenWithUndo;
- (BOOL)disallowCachingTextAndThumbnail;
- (void)newBookmarkSheetDidEnd:(BOOL)fp8;
- (void)webView:(id)fp8 unableToImplementPolicyWithError:(id)fp12 frame:(id)fp16;
- (void)networkConfigurationDidChange:(id)fp8;
- (void)showErrorPageForURL:(id)fp8 withTitle:(id)fp12 message:(id)fp16 errorPageTemplate:(int)fp20;
- (void)webView:(id)fp8 decidePolicyForMIMEType:(id)fp12 request:(id)fp16 frame:(id)fp20 decisionListener:(id)fp24;
- (BOOL)webView:(id)fp8 shouldGoToHistoryItem:(id)fp12;
- (void)webView:(id)fp8 decidePolicyForNavigationAction:(id)fp12 request:(id)fp16 frame:(id)fp20 decisionListener:(id)fp24;
- (void)webView:(id)fp8 decidePolicyForNewWindowAction:(id)fp12 request:(id)fp16 newFrameName:(id)fp20 decisionListener:(id)fp24;
- (id)originalURLString;
- (void)setOriginalURLString:(id)fp8;
- (id)provisionalOriginalURLString;
- (void)setProvisionalOriginalURLString:(id)fp8;
- (id)pendingRSSFeedURLString;
- (id)pendingRSSFeedReferrer;
- (void)setPendingRSSFeedURLString:(id)fp8 withReferrer:(id)fp12;
- (id)provisionalTabLabel;
- (void)setProvisionalTabLabel:(id)fp8;
- (id)committedTabLabel;
- (void)setCommittedTabLabel:(id)fp8;
- (id)requestedTabLabel;
- (void)setRequestedTabLabel:(id)fp8;
- (id)tabLabel;
- (id)statusMessage;
- (BOOL)ellipsizeStatusMessage;
- (void)setStatus:(id)fp8 withPriority:(int)fp12 ellipsize:(BOOL)fp16 owner:(id)fp20;
- (void)clearAllStatus;
- (id)currentURL;
- (id)provisionalURL;
- (id)expectedOrCurrentURL;
- (id)expectedOrCurrentOriginalURLString;
- (BOOL)isDisplayingCompleteNonRSSPage;
- (BOOL)isDisplayingNonRSSPage;
- (BOOL)isShowingBookmarks;
- (void)hideBookmarks;
- (id)bookmarksViewContents;
- (id)bookmarksViewController;
- (BOOL)findBannerCanComputeSearchResultsCount:(id)fp8;
- (unsigned int)findBannerSearchResultsCount:(id)fp8;
- (id)locationFieldURL;
- (id)titleForLocationFieldURL;
- (id)currentTitle;
- (id)pageNameURL;
- (id)pageName;
- (id)displayName;
- (id)fallbackURLs;
- (void)clearFallbackURLs;
- (void)goToNextFallbackURL;
- (BOOL)isLoading;
- (BOOL)isShowingLoadErrorPage;
- (BOOL)containsEditedForm;
- (void)setMainFrameLoadEndedInError:(BOOL)fp8;
- (BOOL)mainFrameLoadEndedInError;
- (void)setMainDocumentHasLoaded:(BOOL)fp8;
- (BOOL)mainDocumentHasLoaded;
- (void)setMainDocumentDidFirstLayout:(BOOL)fp8;
- (BOOL)mainDocumentDidFirstLayout;
- (void)progressStarted:(id)fp8;
- (void)progressChanged:(id)fp8;
- (void)progressFinished:(id)fp8;
- (void)setPendingRedirectDelay:(double)fp8;
- (void)cancelPendingRedirect;
- (double)pendingRedirectDelay;
- (BOOL)canMakeTextSmaller;
- (BOOL)canMakeTextLarger;
- (BOOL)canMakeTextStandardSize;
- (void)makeTextLarger:(id)fp8;
- (void)makeTextSmaller:(id)fp8;
- (void)makeTextStandardSize:(id)fp8;
- (BOOL)isSwitchingToBackgroundTab;
- (void)setSwitchingToBackgroundTab:(BOOL)fp8;
- (BOOL)maintainsInactiveSelection;
- (BOOL)isShowingRSS;
- (id)counterpartURLsForRSS;
- (void)updateCounterpartURLsForRSS;
- (void)snapBackTo:(id)fp8;
- (BOOL)nextPageShouldBeSnapBackPoint;
- (void)setNextPageShouldBeSnapBackPoint:(BOOL)fp8;
- (void)setPageForSnapBack:(id)fp8;
- (void)setPageForSnapBackToCurrentPage:(id)fp8;
- (BOOL)canSnapBackToPage;
- (void)snapBackToPage:(id)fp8;
- (id)pageForSnapBack;
- (void)reportErrorForBadFileWrapper:(id)fp8;
- (void)saveFileWrapperToDownloadsFolder:(id)fp8 originatingURL:(id)fp12;
- (void)setSearchResultsForSnapBack:(id)fp8;
- (void)setSearchResultsForSnapBackToCurrentPage;
- (void)clearSearchResultsForSnapBack;
- (BOOL)canSnapBackToSearchResults;
- (void)snapBackToSearchResults:(id)fp8;
- (id)searchResultsForSnapBack;
- (void)goNowIfInQueue;
- (void)stopLoading:(id)fp8;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (void)setAcceptsGenericIcon:(BOOL)fp8;
- (void)updateIcon;
- (void)nameHasChanged;
- (void)pageTitleHasChanged;
- (void)locationFieldURLHasChanged;
- (void)prepareForRSSAnimation;
- (void)currentURLHasChanged;
- (void)provisionalURLHasChanged;
- (void)pageLoadingStatusHasChanged;
- (void)dataSourceHasChanged:(id)fp8 forFrame:(id)fp12;
- (void)mainDataSourceHasChanged;
- (void)goToRequest:(id)fp8 withTabLabel:(id)fp12 allowJavaScript:(BOOL)fp16 waitInQueue:(BOOL)fp20;
- (void)goToURL:(id)fp8;
- (void)tryMultipleURLs:(id)fp8;
- (void)tryDownloadWithMultipleURLs:(id)fp8;
- (id)stringByEvaluatingJavaScriptFromString:(id)fp8;
- (BOOL)hasInitialContents;
- (void)displayInitialContents;
- (BOOL)shouldStartEmpty;
- (void)setShouldStartEmpty;
- (void)clearPageCache;
- (id)generateThumbnail;
- (BOOL)isWindowFocusDisabled;
- (void)setWindowFocusDisabled:(BOOL)fp8;
- (void)setBlockedFromKeyViewLoop:(BOOL)fp8;
- (BOOL)isBlockedFromKeyViewLoop;
- (void)setHoverFeedbackSuspended:(BOOL)fp8;
- (id)currentPageLoad;
- (void)setCurrentPageLoad:(id)fp8;

@end

