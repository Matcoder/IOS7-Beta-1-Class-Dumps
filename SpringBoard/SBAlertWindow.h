/* SBAlertWindow.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWindow.h"

@class NSMapTable, SBAlertWindowViewController;

__attribute__((visibility("hidden")))
@interface SBAlertWindow : SBWindow {
	SBAlertWindowViewController* _rootViewController;
	NSMapTable* _alertToDisplayMap;
}
+(int)jailBehavior;
-(void)noteInterfaceOrientationChangingTo:(int)to animated:(BOOL)animated;
-(id)stackedAlertsIncludingActiveAlert:(BOOL)alert;
-(int)stackedDisplayCount;
-(BOOL)hasActiveAlertsOrDisplays;
-(BOOL)deactivateAlert:(id)alert;
-(void)displayAlert:(id)alert;
-(BOOL)isOpaque;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithScreen:(id)screen;
-(id)initWithScreen:(id)screen rootViewController:(id)controller;
@end
