/* SBAnimationFactory.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "_UIBasicAnimationFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface SBAnimationFactory : XXUnknownSuperclass <_UIBasicAnimationFactory> {
	CAMediaTimingFunction* _timingFunction;
	double _duration;
	double _delay;
	double _frameInterval;
}
@property(assign, nonatomic) double frameInterval;
@property(retain, nonatomic) CAMediaTimingFunction* timingFunction;
@property(assign, nonatomic) double delay;
@property(assign, nonatomic) double duration;
+(void)animateWithFactory:(id)factory animations:(id)animations completion:(id)completion;
+(void)animateWithSettings:(id)settings delay:(double)delay options:(unsigned)options animations:(id)animations completion:(id)completion;
+(void)animateWithSettings:(id)settings delay:(double)delay animations:(id)animations completion:(id)completion;
+(void)animateWithSettings:(id)settings options:(unsigned)options animations:(id)animations completion:(id)completion;
+(void)animateWithSettings:(id)settings animations:(id)animations completion:(id)completion;
+(id)factoryWithSettings:(id)settings;
-(id)_animation;
-(id)_timingFunctionForAnimation;
-(id)_basicAnimationForView:(id)view withKeyPath:(id)keyPath;
-(void)setTimingFunctionFromSettings:(id)settings;
-(void)animateWithDelay:(double)delay options:(unsigned)options animations:(id)animations completion:(id)completion;
-(void)animateWithDelay:(double)delay animations:(id)animations completion:(id)completion;
-(void)dealloc;
@end