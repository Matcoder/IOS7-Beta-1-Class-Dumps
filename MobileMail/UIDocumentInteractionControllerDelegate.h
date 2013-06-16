/* UIDocumentInteractionControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import "NSObject.h"


@protocol UIDocumentInteractionControllerDelegate <NSObject>
@optional
-(BOOL)documentInteractionController:(id)controller performAction:(SEL)action;
-(BOOL)documentInteractionController:(id)controller canPerformAction:(SEL)action;
-(void)documentInteractionController:(id)controller didEndSendingToApplication:(id)application;
-(void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)documentInteractionController;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)documentInteractionController;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)documentInteractionController;
-(void)documentInteractionControllerDidEndPreview:(id)documentInteractionController;
-(void)documentInteractionControllerWillBeginPreview:(id)documentInteractionController;
-(id)documentInteractionControllerViewForPreview:(id)preview;
-(CGRect)documentInteractionControllerRectForPreview:(id)preview;
-(id)documentInteractionControllerViewControllerForPreview:(id)preview;
@end