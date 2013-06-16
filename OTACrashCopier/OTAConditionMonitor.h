/* OTAConditionMonitor.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "OTACrashCopier-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OTAConditionMonitor : XXUnknownSuperclass {
	SCNetworkReachabilityRef _reachabilityRef;
	int _consentToken;
	NSString* _markerPath[2][2];
	double _lastTime[2][2];
	double _desiredThrottle[2];
	double _desiredInterval[2];
	BOOL _throttleEnabled;
	BOOL _usesRelaxedSubmissionConditions;
	BOOL _haveUserConsent;
	BOOL _isRoaming;
	BOOL _hasTelephonyCapability;
	BOOL _carrierAllowsWWANSubmission;
	BOOL _isAppleTV;
	int _connectionType;
}
@property(readonly, assign, nonatomic) BOOL isAppleTV;
@property(readonly, assign, nonatomic) int connectionType;
@property(assign, nonatomic) BOOL carrierAllowsWWANSubmission;
@property(assign, nonatomic) BOOL usesRelaxedSubmissionConditions;
@property(assign, nonatomic) BOOL throttleEnabled;
@property(assign, nonatomic) BOOL haveUserConsent;
-(id)description;
-(double)calcNextWindowForSubmission:(int)submission;
-(double)timeSinceLast:(int)last forSubmission:(int)submission;
-(void)setIsRoaming:(BOOL)roaming;
-(void)setNetworkConnectionType:(int)type;
-(BOOL)_getIsRoaming;
-(void)markTimeForLast:(int)last forSubmission:(int)submission;
-(void)_touchMarkerFile:(id)file withModDate:(id)modDate;
-(BOOL)maySubmitBetaLogsNow;
-(BOOL)maySubmitLogsNow;
-(void)install;
-(void)_readDateFromSubmission:(int)submission forMarker:(int)marker;
-(void)dealloc;
-(id)init;
-(double)readDefault:(CFStringRef)aDefault orUse:(double)use;
@end