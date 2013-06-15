/* SBUIMainScreenAnimationController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIAnimationController.h"


__attribute__((visibility("hidden")))
@interface SBUIMainScreenAnimationController : SBUIAnimationController {
	BOOL _needsToClearBulletinWindowOrientation;
}
-(void)_noteAnimationDidCommit:(BOOL)_noteAnimation withDuration:(double)duration afterDelay:(double)delay;
-(void)_cleanupAnimation;
-(void)beginAnimation;
-(void)_dismissBannerAnimated:(BOOL)animated;
-(BOOL)_shouldDismissBanner;
-(void)__startAnimation;
-(void)_clearBulletinWindowOverrideOrientationIfNecessary;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
-(id)_getTransitionWindow;
@end