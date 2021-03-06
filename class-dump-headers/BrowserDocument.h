/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSDocument.h"

@class BrowserWebView, NSFileWrapper, NSMutableArray, NSPopUpButton, NSSavePanel, NSString, NSTabView, NSURL, NSView, WebDataSource;

@interface BrowserDocument : NSDocument
{
    BrowserWebView *_currentWebView;
    NSMutableArray *_webViews;
    NSString *_MIMETypeForSaving;
    NSURL *_originatingURLForSaving;
    NSFileWrapper *_fileWrapperToSave;
    WebDataSource *_dataSourceToSave;
    NSSavePanel *_activeSavePanel;
    NSView *fileFormatAccessoryView;
    NSPopUpButton *fileFormatPopUpButton;
    NSTabView *fileFormatInfoTabView;
    BOOL _isSavingWithSavePanel;
    BOOL _shouldOpenWindowBehindFrontmost;
}

+ (BOOL)lastDocumentCouldShowInputFields;
- (id)initWithContentsOfRequest:(id)fp8 frameName:(id)fp12;
- (id)init;
- (id)initWithContentsOfURL:(id)fp8 ofType:(id)fp12;
- (void)dealloc;
- (void)close;
- (BOOL)shouldClose;
- (void)makeWindowControllers;
- (void)removeWindowController:(id)fp8;
- (BOOL)isDocumentEdited;
- (id)browserWindowController;
- (id)dataSourceToSave;
- (BOOL)canSaveAsWebArchive;
- (BOOL)isSavingWebArchive;
- (id)MIMETypeForSaving;
- (id)filenameForSaving;
- (BOOL)isSavingPlainText;
- (void)setFileWrapperToSave:(id)fp8 MIMEType:(id)fp12 originatingURL:(id)fp16;
- (void)setDataSourceToSave:(id)fp8;
- (BOOL)saveToURL:(id)fp8 ofType:(id)fp12 forSaveOperation:(unsigned int)fp16 error:(id *)fp20;
- (void)saveDocument:(id)fp8;
- (void)saveDocumentAs:(id)fp8;
- (void)saveDocumentTo:(id)fp8;
- (void)document:(id)fp8 didSave:(BOOL)fp12 contextInfo:(void *)fp16;
- (id)allowedFileTypes;
- (void)_updateFileFormatInformationText;
- (void)fileFormatPopUpButtonUpdated:(id)fp8;
- (BOOL)prepareSavePanel:(id)fp8;
- (id)panel:(id)fp8 userEnteredFilename:(id)fp12 confirmed:(BOOL)fp16;
- (id)dataRepresentationOfType:(id)fp8;
- (BOOL)loadDataRepresentation:(id)fp8 ofType:(id)fp12;
- (id)untitledName;
- (id)displayName;
- (id)fileType;
- (id)writableTypesForSaveOperation:(unsigned int)fp8;
- (void)_nameHasChanged;
- (id)mainWebFrameView;
- (void)showWindows;
- (unsigned int)validModesForFontPanel:(id)fp8;
- (void)changeFont:(id)fp8;
- (void)snapBackToSearchResults:(id)fp8;
- (BOOL)canShowInputFields;
- (BOOL)canUseAddressField;
- (BOOL)canUseSearchField;
- (void)searchWeb:(id)fp8;
- (void)showFindPanel:(id)fp8;
- (void)findNext:(id)fp8;
- (void)findPrevious:(id)fp8;
- (void)hideFindBanner:(id)fp8;
- (void)setPageForSnapBackToCurrentPage:(id)fp8;
- (void)snapBackToPage:(id)fp8;
- (id)pageForSnapBack;
- (void)openLocation:(id)fp8;
- (void)goToRequest:(id)fp8 withTabLabel:(id)fp12;
- (id)evaluateJavaScript:(id)fp8;
- (void)goToURL:(id)fp8;
- (void)loadCloneOfView:(id)fp8;
- (id)currentURL;
- (BOOL)canGoHome;
- (void)_goHomeUsingWindowPolicyFromCurrentEvent:(BOOL)fp8;
- (void)goHome:(id)fp8;
- (BOOL)hasInitialContents;
- (void)displayInitialContents;
- (void)displayInitialHomePage;
- (void)bugReportSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)reportBugToApple:(id)fp8;
- (void)goToItemInBackOrForwardMenu:(id)fp8;
- (void)_addItem:(id)fp8 toMenu:(id)fp12;
- (id)backListMenuForButton:(id)fp8;
- (id)forwardListMenuForButton:(id)fp8;
- (void)reload:(id)fp8;
- (BOOL)shouldStartEmpty;
- (void)setShouldStartEmpty;
- (void)makeTextLarger:(id)fp8;
- (void)makeTextSmaller:(id)fp8;
- (void)makeTextStandardSize:(id)fp8;
- (void)stopLoading:(id)fp8;
- (BOOL)isLoading;
- (BOOL)isShowingLoadErrorPage;
- (id)printInfo;
- (void)setPrintInfo:(id)fp8;
- (void)printWebFrameView:(id)fp8 showingPrintPanel:(BOOL)fp12 useSheet:(BOOL)fp16;
- (id)_selectedFrameView;
- (id)_printingMailingFrameView;
- (void)printShowingPrintPanel:(BOOL)fp8;
- (void)_updateTitleOfPrintMenuItem:(id)fp8;
- (BOOL)canPrint;
- (void)safari_printDocument:(id)fp8;
- (BOOL)canAddBookmark;
- (BOOL)canAddBookmarksForTabs;
- (id)syndicationURLWithFilter;
- (id)createBookmarkForWebView:(id)fp8 respectProvisionalPage:(BOOL)fp12;
- (id)createBookmarkRespectingProvisionalPage:(BOOL)fp8;
- (void)_URLConfirmationDidEndForBookmark:(id)fp8 confirmed:(BOOL)fp12 contextInfo:(void *)fp16;
- (void)proposeBookmarkRespectingProvisionalPage:(BOOL)fp8;
- (void)proposeBookmarkForProvisionalOrCurrentPage;
- (void)addBookmark:(id)fp8;
- (void)_URLConfirmationDidEndForBookmarkInBookmarksMenu:(id)fp8 confirmed:(BOOL)fp12 contextInfo:(void *)fp16;
- (void)addBookmarkToMenu:(id)fp8;
- (void)addBookmarksForTabs:(id)fp8;
- (void)proposeBookmarkForCurrentURL;
- (void)clearAllStatus;
- (BOOL)_isDocumentHTML;
- (BOOL)_isDisplayingNonRSSPage;
- (BOOL)_isDisplayingCompleteNonRSSPage;
- (BOOL)canViewSource;
- (BOOL)canMailPage;
- (BOOL)canMailPageAddress;
- (BOOL)canCreateWebClip;
- (BOOL)canSave;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (void)viewSource:(id)fp8;
- (id)currentWebView;
- (void)tryMultipleURLs:(id)fp8;
- (BOOL)shouldOpenWindowBehindFrontmost;
- (void)setShouldOpenWindowBehindFrontmost:(BOOL)fp8;
- (id)_mailApplicationPath;
- (BOOL)_mailApplicationAtPath:(id)fp8 supportsKey:(id)fp12;
- (BOOL)_sendMessageEventToMailPath:(id)fp8 eventID:(unsigned long)fp12 directObject:(id)fp16 title:(id)fp20 URL:(id)fp24;
- (void)mailPageForFrame:(id)fp8;
- (void)mailPage:(id)fp8;
- (void)_reportLaunchFailureForMailApplicationAtPath:(id)fp8;
- (void)mailPageAddress:(id)fp8;
- (void)createWebClip:(id)fp8;
- (id)URLString;
- (void)setURLString:(id)fp8;
- (id)source;
- (id)text;
- (id)aeDescByEvaluatingJavaScriptFromString:(id)fp8;
- (void)mailPageContents;
- (void)clearPageCache;
- (id)pageName;
- (id)createWebViewWithFrameName:(id)fp8;
- (id)createWebView;
- (void)addWebView:(id)fp8;
- (void)removeWebView:(id)fp8;
- (void)setCurrentWebView:(id)fp8;

@end

