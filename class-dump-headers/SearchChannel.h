/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SearchChannel : NSObject
{
    NSString *_longLabel;
    NSString *_mediumLabel;
    NSString *_shortLabel;
}

- (id)initWithShortLabel:(id)fp8 mediumLabel:(id)fp12 longLabel:(id)fp16;
- (void)dealloc;
- (id)shortLabel;
- (id)mediumLabel;
- (id)longLabel;
- (id)URLWithSearchCriteria:(id)fp8;
- (BOOL)validURL:(id)fp8;
- (id)localSearchStringFromWebSearchString:(id)fp8;

@end

