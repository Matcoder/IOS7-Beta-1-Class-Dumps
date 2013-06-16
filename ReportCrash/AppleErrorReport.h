/* AppleErrorReport.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ReportCrash-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface AppleErrorReport : XXUnknownSuperclass {
	NSString* _incidentID;
	NSString* _logType;
	NSString* _deviceID;
}
+(id)kernelVersionDescription;
+(id)systemIDWithDescription:(BOOL)description;
+(id)systemVersionDescription;
+(void)logSafely:(id)safely;
+(unsigned char)executeWithTimeout:(unsigned)timeout Code:(id)code;
+(id)aslMsgToString:(aslmsg*)string;
+(id)xattr_name;
-(unsigned)uid;
-(id)description;
-(id)logType;
-(BOOL)isInternalOrCarrierInstall;
-(BOOL)isCarrierInstall;
-(BOOL)isInternalInstall;
-(id)incidentID;
-(BOOL)isAppleTV;
-(id)hardwareModel;
-(id)deviceID;
-(void)dealloc;
-(id)initWithType:(id)type;
@end