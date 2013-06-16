/* ADSSession_RPC.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */



@protocol ADSSession_RPC
-(void)_priv_removeRecordForAccountWithIdentifier:(id)identifier;
-(void)_remote_reportStationTileImpression:(id)impression;
-(void)_remote_reportListeningPresenceEvent:(int)event;
-(void)_remote_optimalTransmissionWindowDidOpen;
-(void)_remote_setSponsoredStationIDs:(id)ids;
-(void)_remote_setStationData:(id)data initialTrackBlobs:(id)blobs reply:(id)reply;
-(void)_remote_songSkipped;
-(void)_remote_songStopped;
-(void)_remote_songBegan:(id)began reply:(id)reply;
-(void)_remote_setVisuallyEngaged:(BOOL)engaged;
-(void)_remote_disablePolicyEngine;
-(void)_remote_enablePolicyEngine;
-(void)_remote_forwardDeviceOrientation:(int)orientation statusBarOrientation:(int)orientation2;
-(void)_remote_createProxyForAdSpace:(id)adSpace type:(int)type options:(int)options reply:(id)reply;
-(void)_remote_setClientLinkedOnVersion:(id)version;
-(void)_priv_setServerURL:(id)url;
-(void)_remote_didBecomeActive;
-(void)_remote_willResignActive;
@end