/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface HistoryThumbnailCache : NSObject
{
    NSString *_thumbnailsDirectoryPath;
}

- (void)dealloc;
- (void)cacheThumbnailForWebView:(id)fp8;
- (id)thumbnailForURLString:(id)fp8;
- (void)removeThumbnailForURLString:(id)fp8;
- (void)removeThumbnailsForWebHistoryItems:(id)fp8;
- (void)removeAllThumbnails;
- (BOOL)fileManager:(id)fp8 shouldProceedAfterError:(id)fp12;

@end

