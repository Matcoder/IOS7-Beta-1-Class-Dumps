/* SBIconParallaxBadgeView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "_UISettingsKeyObserver.h"
#import "SBIconBadgeView.h"
#import "SpringBoard-Structs.h"

@class SBParallaxSettings;

__attribute__((visibility("hidden")))
@interface SBIconParallaxBadgeView : SBIconBadgeView <_UISettingsKeyObserver> {
	SBParallaxSettings* _parallaxSettings;
}
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)dealloc;
-(id)init;
@end
