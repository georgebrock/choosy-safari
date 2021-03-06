/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SpotlightCacheController.h"

@interface SpotlightCacheController (FileInternal)
- (void)updateCache;
- (void)updateCacheSoon;
- (void)updaterThreadFinished;
- (id)cacheParentDirectory;
- (id)cacheSubdirectoryForDataType:(id)fp8;
- (id)createCacheParentDirectory;
- (id)createCacheSubdirectoryForDataType:(id)fp8;
- (BOOL)forciblyCreateDirectory:(id)fp8;
- (BOOL)fileManager:(id)fp8 shouldProceedAfterError:(id)fp12;
- (void)fileManager:(id)fp8 willProcessPath:(id)fp12;
- (BOOL)updateCacheFilesForType:(id)fp8;
- (void)deleteAllCachedFilesForType:(id)fp8;
- (void)moveOldBookmarkCacheFiles;
- (void)updaterThreadBody:(id)fp8;
@end

