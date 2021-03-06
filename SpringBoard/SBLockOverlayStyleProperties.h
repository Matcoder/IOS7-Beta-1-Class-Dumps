/* SBLockOverlayStyleProperties.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface SBLockOverlayStyleProperties : XXUnknownSuperclass {
	UIColor* _legibleColor;
	UIColor* _tintColor;
	float _tintAlpha;
	float _blurRadius;
	unsigned _style;
}
@property(readonly, assign, nonatomic) unsigned style;
@property(readonly, assign, nonatomic) UIColor* legibleColor;
@property(readonly, assign, nonatomic) float blurRadius;
@property(readonly, assign, nonatomic) UIColor* tintColor;
@property(readonly, assign, nonatomic) float tintAlpha;
+(id)overlayPropertiesWithStyle:(unsigned)style;
-(id)stringForStyle;
-(id)_settingsForStyle;
-(void)_configure;
-(id)description;
-(void)dealloc;
-(id)initWithStyle:(unsigned)style;
@end
