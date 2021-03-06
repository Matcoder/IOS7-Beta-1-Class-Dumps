/* VOTAppLauncher.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, VOTLaunchableApp, NSArray, NSMutableString;
@protocol VOTAppLauncherDelegate;

__attribute__((visibility("hidden")))
@interface VOTAppLauncher : XXUnknownSuperclass {
	id<VOTAppLauncherDelegate> _delegate;
	int _launchContext;
	NSMutableString* _appNamePrefix;
	NSArray* _allInstalledApps;
	NSMutableArray* _filteredApps;
	VOTLaunchableApp* _focusedApp;
}
@property(retain, nonatomic) VOTLaunchableApp* focusedApp;
@property(retain, nonatomic) NSMutableArray* filteredApps;
@property(retain, nonatomic) NSArray* allInstalledApps;
@property(retain, nonatomic) NSMutableString* appNamePrefix;
@property(assign, nonatomic) int launchContext;
@property(assign, nonatomic) id<VOTAppLauncherDelegate> delegate;
@property(readonly, assign, nonatomic) unsigned filteredAppsCount;
@property(readonly, assign, nonatomic) NSString* focusedAppName;
-(void)_updateAllInstalledApps;
-(void)_focusOnAppInDirection:(BOOL)direction;
-(void)_updateFilteredAppsWithPrefix:(id)prefix reevaluateFromAllAllApps:(BOOL)allAllApps;
-(void)updateMatchingAppsByDeletingLastCharacter;
-(void)updateMatchingAppsByAddingCharacter:(id)character;
-(void)focusOnPreviousMatchingApp;
-(void)focusOnNextMatchingApp;
-(void)launchFocusedApp;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate launchContext:(int)context;
@end
