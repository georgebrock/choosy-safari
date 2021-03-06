/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WebBookmark.h"

@interface WebBookmark (BrowserAdditions)
+ (id)defaultTitleFromURL:(id)fp8;
+ (id)bookmarkWithURL:(id)fp8 title:(id)fp12;
+ (id)bookmarkPasteboardTypes;
+ (id)_bookmarkForFileOrFolderAtPath:(id)fp8 directoryDepth:(unsigned int)fp12;
+ (BOOL)isAcceptableBookmarkObjectPath:(id)fp8;
+ (id)bookmarkForFileOrFolderAtPath:(id)fp8;
+ (void)writeBookmarks:(id)fp8 toPasteboard:(id)fp12 withOwner:(id)fp16;
+ (BOOL)anyBookmarksOnPasteboard:(id)fp8;
+ (int)numberOfBookmarksOnPasteboard:(id)fp8;
+ (int)numberOfFoldersOnPasteboard:(id)fp8;
+ (id)_bookmarksFromPasteboard:(id)fp8 topLevelOnly:(BOOL)fp12;
+ (id)bookmarksFromPasteboard:(id)fp8;
+ (id)topLevelBookmarksFromPasteboard:(id)fp8;
- (BOOL)isOrHasAnyLeaves;
- (BOOL)isAncestorOf:(id)fp8;
- (id)titleWithUnreadRSSCount;
- (id)createInternetLocationFileHierarchyInDirectory:(id)fp8;
- (void)_viewAllRSSArticles:(id)fp8;
- (BOOL)addViewArticlesItemToMenu:(id)fp8 withPrecedingSeparator:(BOOL)fp12 tabLocation:(id)fp16;
- (void)insertChildren:(id)fp8 atIndex:(int)fp12;
- (void)insertChild:(id)fp8 atIndex:(unsigned int)fp12 preserveUUID:(BOOL)fp16;
- (void)addChildAccessDomainToSet:(id)fp8;
@end

