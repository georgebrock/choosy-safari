/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WebBookmark.h"

@interface WebBookmark (UserInterfaceOperations)
- (void)deleteWithUndo;
- (void)deleteWithUndoWithoutAuthorization;
- (void)goToWithWindowPolicy:(int)fp8 tabLocation:(id)fp12;
- (void)goToInNewWindow;
- (void)goToInNewTabWithTabLocation:(id)fp8;
- (void)goToUsingWindowPolicyFromCurrentEventWithTabLocation:(id)fp8;
- (void)goToFromMenuItem:(id)fp8;
- (void)goToAllInTabsFromMenuItem:(id)fp8;
- (void)_addFlattenedDescendantsToArray:(id)fp8;
- (id)_flattenedDescendants;
- (id)URLsForGoToAllWithTitles:(id *)fp8 combineNewsFeeds:(BOOL)fp12;
- (void)_openInTabsConfirmationDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(id)fp16;
- (void)goToAllInTabsCombiningNewsFeeds:(BOOL)fp8 withTabLocation:(id)fp12 confirmQuantity:(BOOL)fp16;
- (void)goToAllInTabsWithTabLocation:(id)fp8;
- (void)goToAllInTabsCombiningNewsFeedsWithTabLocation:(id)fp8 confirmQuantity:(BOOL)fp12;
- (id)browserWindowController;
- (void)editAddressWithTabLocation:(id)fp8;
- (void)editTitleWithTabLocation:(id)fp8;
- (void)editContentsWithTabLocation:(id)fp8;
- (void)revealFavoriteWithTabLocation:(id)fp8;
@end

