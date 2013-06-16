/* CatalogViewControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol CatalogViewControllerDelegate <NSObject>
-(void)catalogViewController:(id)controller didTogglePrivateBrowsingPreference:(BOOL)preference;
-(void)catalogViewController:(id)controller completionItem:(id)item wasAcceptedForString:(id)string;
-(void)catalogViewController:(id)controller didSelectFindOnPageWithHighlighter:(id)highlighter;
-(void)catalogViewController:(id)controller mightSelectAddress:(id)address;
-(void)catalogViewController:(id)controller didSelectSearch:(id)search;
-(void)catalogViewController:(id)controller didSelectAddress:(id)address;
@end