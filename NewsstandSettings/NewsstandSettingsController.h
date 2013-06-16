/* NewsstandSettingsController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface NewsstandSettingsController : XXUnknownSuperclass {
	NSDictionary* _enabledPushTypes;
	NSDictionary* _supportedPushTypes;
}
-(void)_setContentDownloadsEnabled:(id)enabled specifier:(id)specifier;
-(id)_contentDownloadEnabled:(id)enabled;
-(void)_reloadUI;
-(id)_rebuildSpecifiers;
-(id)_contentDownloadSpecifierForBundleID:(id)bundleID enabledPushTypes:(id)types;
-(void)_resetPushTypes;
-(id)_supportedPushTypes;
-(id)_enabledPushTypes;
-(void)_getPushTypes;
-(id)specifiers;
-(void)dealloc;
-(id)init;
@end