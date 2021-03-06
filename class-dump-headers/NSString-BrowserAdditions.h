/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (BrowserAdditions)
+ (id)stringByBase64EncodingBytes:(const char *)fp8 length:(int)fp12;
+ (id)stringByBase64EncodingBytes:(const char *)fp8 length:(int)fp12 breakLines:(BOOL)fp16;
- (id)stringByTrimmingWhitespace;
- (id)possibleURLsForUserTypedString;
- (id)bestURLForUserTypedString;
- (id)bestURLStringForUserTypedString;
- (int)compareDomain:(id)fp8;
- (int)compareVersionString:(id)fp8;
- (void)drawDoubledInRect:(struct _NSRect)fp8 withTopColor:(id)fp24 bottomColor:(id)fp28 font:(id)fp32 centered:(BOOL)fp36 flipped:(BOOL)fp40;
- (id)stringByDeletingStartingSlash;
- (id)stringByDeletingTrailingSlash;
- (id)stringByReplacingLineEndingsWithString:(id)fp8;
- (id)stringByReplacingLineEndingsWithSpaces;
- (id)stringByStrippingLineEndings;
- (id)stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBrackets;
- (id)stringBySubstitutingHTMLEntitiesForAmpersandAndQuote;
- (id)encodeStringBase64;
- (int)countOfString:(id)fp8;
- (id)domainFromHost;
- (struct _NSRange)rangeOfURLResourceSpecifier;
- (struct _NSRange)rangeOfURLUserPasswordHostPort;
- (struct _NSRange)rangeOfURLHost;
- (id)fixedStringByExpandingTildeInPath;
- (BOOL)isFileURLString;
- (BOOL)isGoogleHomePageURLString;
- (BOOL)isSyndicationScheme;
- (BOOL)isSyndicationURLString;
- (BOOL)isStandardSyndicationURLString;
- (BOOL)isWebClipURLString;
- (id)dispositionTypeFromContentDispositionHeader;
- (id)volumeName;
- (id)_safari_stringByAddingPercentEscapesForWebClipURL;
@end

