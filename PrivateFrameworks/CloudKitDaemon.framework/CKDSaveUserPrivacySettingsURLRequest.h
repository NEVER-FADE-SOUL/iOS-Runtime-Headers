/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest {
    NSString * _bundleID;
    int  _discoverableTrinary;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) int discoverableTrinary;

- (void).cxx_destruct;
- (id)bundleID;
- (int)discoverableTrinary;
- (id)init;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (BOOL)requiresTokenRegistration;
- (void)setBundleID:(id)arg1;
- (void)setDiscoverable:(BOOL)arg1;
- (void)setDiscoverableTrinary:(int)arg1;

@end
