//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSObject<OS_dispatch_io>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BCBonjourConnection : NSObject <NSStreamDelegate>
{
    BOOL _closing;
    int _socket;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_io> *_channel;
    NSObject<OS_dispatch_queue> *_networkQueue;
    NSObject<OS_dispatch_queue> *_archiveQueue;
    NSObject<OS_dispatch_source> *_pingTimer;
}


@property(retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue; // @synthesize archiveQueue=_archiveQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_io> *channel; // @synthesize channel=_channel;
- (void)close;
- (void)closed;
@property(nonatomic) BOOL closing; // @synthesize closing=_closing;
- (void)configureSocket:(int)arg1;
- (void)dealloc;
- (void)disablePingTimer;
- (void)enablePingTimer;
- (void)failedWithError:(id)arg1 channel:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)initWithSocket:(int)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue; // @synthesize networkQueue=_networkQueue;
- (void)openedWithChannel:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pingTimer; // @synthesize pingTimer=_pingTimer;
- (void)readDictionaryDataOfSize:(unsigned long long)arg1 channel:(id)arg2;
- (void)readDictionaryWithChannel:(id)arg1;
- (void)receivedDictionary:(id)arg1 channel:(id)arg2;
- (void)reportIOError:(int)arg1 code:(unsigned long long)arg2 channel:(id)arg3;
- (void)sendDictionary:(id)arg1;
- (void)sendDictionary:(id)arg1 channel:(id)arg2 terminateWhenDone:(BOOL)arg3;
@property(nonatomic) int socket; // @synthesize socket=_socket;
- (void)shutdownChannel:(id)arg1;
- (void)unarchiveDictionary:(id)arg1 channel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
