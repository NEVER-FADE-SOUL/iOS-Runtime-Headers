/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProvider.framework/FileProvider
 */

@interface FPDaemonConnection : NSObject {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection<FPDaemon> * _connectionQueueConnection;
}

@property (nonatomic, readonly) NSXPCConnection<FPDaemon> *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, retain) NSXPCConnection<FPDaemon> *connectionQueueConnection;

+ (id)sharedConnection;

- (void)bookmarkableStringFromDocumentURL:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (id)connectionQueue;
- (id)connectionQueueConnection;
- (void)documentURLFromBookmarkableString:(id)arg1 completion:(id /* block */)arg2;
- (void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)providePlaceholderForItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)providersCompletionHandler:(id /* block */)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setConnectionQueueConnection:(id)arg1;
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stopProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)wakeUpCompletion:(id /* block */)arg1;

@end
