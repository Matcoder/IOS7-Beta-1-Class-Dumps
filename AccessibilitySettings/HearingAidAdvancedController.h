/* HearingAidAdvancedController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilityListController.h"

@class AXRemoteHearingAidDevice;

__attribute__((visibility("hidden")))
@interface HearingAidAdvancedController : AccessibilityListController {
@private
	AXRemoteHearingAidDevice* _device;
}
@property(retain, nonatomic) AXRemoteHearingAidDevice* device;
-(id)specifiers;
-(id)specifiersForEar:(int)ear;
-(id)hardwareVersion:(id)version;
-(id)firmwareVersion:(id)version;
-(id)connection:(id)connection;
-(id)HIID:(id)hiid;
-(void)setSpecifier:(id)specifier;
@end
