/* HandController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "CustomGestureController.h"

@class NSArray, SCATController;

__attribute__((visibility("hidden")))
@interface HandController : CustomGestureController {
@private
	SCATController* _scannerController;
	NSArray* _originalSpecifiers;
}
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)setTouchSpeed:(id)speed;
-(id)touchSpeed;
-(void)setSwaggleOpensMenu:(id)menu specifier:(id)specifier;
-(id)swaggleOpensMenu;
-(void)setHandEnabled:(id)enabled specifier:(id)specifier;
-(id)handEnabled:(id)enabled;
-(void)setAlwaysShowMenuEnabled:(id)enabled specifier:(id)specifier;
-(id)alwaysShowMenuEnabled:(id)enabled;
-(void)_orientationChange:(id)change;
-(void)_handleSettingsChange;
-(void)_handleAssistiveTouchToggled:(id)toggled;
-(void)_updateAssistiveTouchControlItems:(id)items reload:(BOOL)reload;
-(unsigned)maximumNumberOfCustomGestures;
-(id)customGesturesExplanatoryText;
-(id)customGesturesTitle;
-(SEL)customGesturesSetter;
-(SEL)customGesturesGetter;
-(void)viewWillAppear:(BOOL)view;
-(id)specifiers;
-(id)init;
-(void)dealloc;
@end
