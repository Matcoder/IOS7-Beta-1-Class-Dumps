/* SBBulletinAlertHandler.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBBulletinAlertHandler <NSObject>
-(void)handleEvent:(int)event withBulletin:(id)bulletin forRegistry:(id)registry;
-(BOOL)bindBulletin:(id)bulletin forRegistry:(id)registry;
@end