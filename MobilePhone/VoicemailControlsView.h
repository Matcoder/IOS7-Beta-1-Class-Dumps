/* VoicemailControlsView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobilePhone-Structs.h"

@class UIScrubberControl, TPLegacyButton;

__attribute__((visibility("hidden")))
@interface VoicemailControlsView : XXUnknownSuperclass {
	UIScrubberControl* _progressControl;
	TPLegacyButton* _leftButton;
	TPLegacyButton* _rightButton;
	float _fontSize;
	id _delegate;
}
+(float)defaultHeight;
-(void)drawRect:(CGRect)rect;
-(void)setLeftButtonColor:(int)color title:(id)title icon:(id)icon rightButtonColor:(int)color4 title:(id)title5 icon:(id)icon6 duration:(double)duration;
-(void)setButtonFontSize:(float)size;
-(void)setButtons:(int)buttons enabled:(BOOL)enabled;
-(void)_bottomButtonClicked:(id)clicked;
-(id)progressControl;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame showProgressTimes:(BOOL)times;
@end
