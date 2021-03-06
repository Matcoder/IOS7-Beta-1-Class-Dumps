/* BrowserICSPreviewPanel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "BrowserPanel.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "RotatablePopoverControllerDelegate.h"

@class NSString, RotatablePopoverController, EKICSPreviewController, BrowserICSPreviewPanelNavController, OpenInOtherAppActivityViewController;

__attribute__((visibility("hidden")))
@interface BrowserICSPreviewPanel : XXUnknownSuperclass <RotatablePopoverControllerDelegate, BrowserPanel> {
	OpenInOtherAppActivityViewController* _activityViewController;
	BrowserICSPreviewPanelNavController* _wrappingNavController;
	RotatablePopoverController* _activityPopover;
	EKICSPreviewController* _icsController;
	NSString* _filePath;
}
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(BOOL)shouldHideOnSuspend;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(int)panelType;
-(id)viewController;
-(void)_done:(id)done;
-(void)_openInOtherAppsButtonPressed:(id)otherAppsButtonPressed;
-(id)activityViewController;
-(void)dealloc;
-(id)initWithFilePath:(id)filePath;
@end
