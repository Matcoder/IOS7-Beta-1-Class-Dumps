/* VerticalShadowView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface VerticalShadowView : XXUnknownSuperclass {
	BOOL _isDimmed;
	CAGradientLayer* _gradientLayer;
}
@property(assign, nonatomic) BOOL isDimmed;
@property(retain, nonatomic) CAGradientLayer* gradientLayer;
-(void)updateGradientColorsForTheme;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end