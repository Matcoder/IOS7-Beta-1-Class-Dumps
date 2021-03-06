/* WFServicePINEntryViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "WebContentAnalysisUI-Structs.h"
#import <ManagedConfiguration/MCBookmark.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface WFServicePINEntryViewController : MCBookmark {
	NSObject* _delegate;
}
@property(assign, nonatomic) __weak NSObject* delegate;
+(BOOL)settingEnabled;
-(void).cxx_destruct;
-(CFStringRef)blockedStateKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)defaultsID;
-(BOOL)simplePIN;
-(BOOL)requiresKeyboard;
-(void)setPIN:(id)pin;
-(BOOL)validatePIN:(id)pin;
-(BOOL)pinIsAcceptable:(id)acceptable outError:(id*)error;
-(void)performActionAfterPINRemove;
-(void)performActionAfterPINSet;
-(void)performActionAfterPINEntry;
-(id)stringsTable;
-(void)setPane:(id)pane;
-(id)init;
@end
