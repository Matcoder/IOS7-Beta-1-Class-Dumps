/* MailAnimationSettings.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface MailAnimationSettings : XXUnknownSuperclass {
}
+(id)allAnimationNames;
+(id)animationMap;
+(id)sharedAnimationSettings;
-(void)removeAllSettings;
-(id)_defaultsKeyForTimingCurveWithAnimationName:(id)animationName;
-(void)setTimingCurve:(id)curve forAnimationName:(id)animationName;
-(id)timingCurveForAnimationName:(id)animationName;
-(id)_defaultsKeyForDurationWithAnimationName:(id)animationName;
-(void)setDuration:(float)duration forAnimationName:(id)animationName;
-(float)durationForAnimationName:(id)animationName;
-(id)_defaultsKeyForAnimationTypeWithAnimationName:(id)animationName;
-(void)setAnimationType:(unsigned)type forAnimationName:(id)animationName;
-(unsigned)animationTypeForAnimationName:(id)animationName;
@end