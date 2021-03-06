/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WebDocumentRepresentation <NSObject>
- (void)setDataSource:(id)fp8;
- (void)receivedData:(id)fp8 withDataSource:(id)fp12;
- (void)receivedError:(id)fp8 withDataSource:(id)fp12;
- (void)finishedLoadingWithDataSource:(id)fp8;
- (BOOL)canProvideDocumentSource;
- (id)documentSource;
- (id)title;
@end

