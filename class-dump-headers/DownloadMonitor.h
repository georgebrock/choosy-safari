/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface DownloadMonitor : NSObject
{
    NSMutableArray *_entries;
    NSMutableDictionary *_downloadToEntry;
    NSMutableDictionary *_identifierToEntry;
    NSMutableSet *_openableDownloadRequests;
    BOOL _downloadsChanged;
    BOOL _loadedDownloadHistory;
    unsigned int _entriesOnDiskCount;
}

+ (id)sharedDownloadMonitor;
+ (id)downloadBundleExtension;
- (id)init;
- (void)downloadDidBegin:(id)fp8;
- (void)download:(id)fp8 willResumeWithResponse:(id)fp12 fromByte:(long long)fp16;
- (void)download:(id)fp8 didReceiveResponse:(id)fp12;
- (void)download:(id)fp8 decideDestinationWithSuggestedFilename:(id)fp12;
- (void)download:(id)fp8 didReceiveDataOfLength:(unsigned int)fp12;
- (BOOL)download:(id)fp8 shouldDecodeSourceDataOfMIMEType:(id)fp12;
- (void)download:(id)fp8 didCreateDestination:(id)fp12;
- (void)downloadDidFinish:(id)fp8;
- (void)download:(id)fp8 didFailWithError:(id)fp12;
- (void)startDownloadForRequest:(id)fp8 mayOpenWhenDone:(BOOL)fp12;
- (void)startDownloadForRequest:(id)fp8 mayOpenWhenDone:(BOOL)fp12 allowOverwrite:(BOOL)fp16 path:(id)fp20;
- (void)stopAllDownloads;
- (void)cancelDownload:(id)fp8 entry:(id)fp12 withError:(id)fp16;
- (void)cancelDownload:(id)fp8 withError:(id)fp12;
- (void)resumeDownloadAtPath:(id)fp8;
- (id)entries;
- (id)busyEntries;
- (unsigned int)indexOfEntry:(id)fp8;
- (void)insertEntry:(id)fp8 atIndex:(unsigned int)fp12;
- (void)removeEntries:(id)fp8;
- (void)removeEntry:(id)fp8;
- (void)removeIdleEntries;
- (int)total;
- (int)totalBusy;
- (int)totalIdle;
- (id)downloadWindowForAuthenticationSheet:(id)fp8;
- (void)downloadMayBeOpenedForRequest:(id)fp8;
- (id)validEntriesFromEntries:(id)fp8 forBooleanKey:(id)fp12;
- (void)savePendingChangesBeforeTermination;
- (void)setEntry:(id)fp8 forDownload:(id)fp12;

@end

