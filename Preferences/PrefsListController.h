/* PrefsListController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Preferences-Structs.h"
#import "UIActionSheetDelegate.h"
#import "RadiosPreferencesDelegate.h"

@class NSObject, NSDictionary, NSSet, EAAccessory, UIActionSheet, ACAccountStore, UIViewController, PSSpecifier, NSString, NSArray;
@protocol OS_dispatch_queue, PSController;

__attribute__((visibility("hidden")))
@interface PrefsListController : XXUnknownSuperclass <UIActionSheetDelegate, RadiosPreferencesDelegate> {
	BOOL _didFirstLoad;
	EAAccessory* _speakerAccessory;
	PSSpecifier* _eqSpecifier;
	NSArray* _thirdPartySpecifiers;
	NSDictionary* _movedThirdPartySpecifiers;
	BOOL _victoriaCapable;
	PSSpecifier* _victoriaSpecifier;
	BOOL _notificationState;
	PSSpecifier* _notificationsSpecifier;
	PSSpecifier* _castleSpecifier;
	PSSpecifier* _twitterSpecifier;
	PSSpecifier* _facebookSpecifier;
	PSSpecifier* _flickrSpecifier;
	PSSpecifier* _vimeoSpecifier;
	PSSpecifier* _weiboSpecifier;
	PSSpecifier* _tencentweiboSpecifier;
	PSSpecifier* _messagesSpecifier;
	PSSpecifier* _faceTimeSpecifier;
	PSSpecifier* _carrierSelectionSpecifier;
	PSSpecifier* _personalHotspotSpecifier;
	PSSpecifier* _newsstandSettingsSpecifier;
	BOOL _suppressControllerAnimationForExpiry;
	BOOL _wifiValueIsClean;
	BOOL _bluetoothValueIsClean;
	NSArray* _originalSpecifiers;
	NSSet* _originalDisplayIdentifiers;
	NSObject<OS_dispatch_queue>* _iconCacheQueue;
	NSDictionary* _iconCache;
	UIActionSheet* _airplaneSheet;
	ACAccountStore* _accountStore;
	NSString* _wifiString;
	NSString* _bluetoothString;
}
@property(copy, nonatomic) NSString* bluetoothString;
@property(copy, nonatomic) NSString* wifiString;
@property(readonly, assign, nonatomic) UIViewController<PSController>* categoryController;
+(void)setAirplaneMode:(BOOL)mode;
+(BOOL)airplaneMode;
+(id)radiosPreferences;
-(void)bluetoothPowerChanged:(id)changed;
-(id)bluetoothValue:(id)value;
-(void)bluetoothValueFetch:(id)fetch;
-(void)iMessageSupportMayHaveChanged;
-(void)lazyLoadSpecialBundleForSpecifier:(id)specifier;
-(id)cellularDataStatusForSpecifier:(id)specifier;
-(void)airplaneModeChanged;
-(id)phoneStatusForSpecifier:(id)specifier;
-(id)cellularDisabledStatusForSpecifier:(id)specifier;
-(void)reloadCellularRelatedSpecifiers;
-(id)getAirplaneMode:(id)mode;
-(void)confirmationSpecifierCancelled:(id)cancelled;
-(void)confirmationSpecifierConfirmed:(id)confirmed;
-(void)_setAirplaneMode:(BOOL)mode;
-(void)setAirplaneMode:(id)mode specifier:(id)specifier;
-(id)getNotificationsEnabled:(id)enabled;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)_accountStore;
-(void)appleAccountsDidChange;
-(void)_setupiCloudSpecifier:(id)specifier;
-(void)setupAppleAccountCategory:(id)category;
-(void)MISStateChangedNotification:(id)notification;
-(void)updatePersonalHotspotWithState:(int)state andReason:(int)reason;
-(id)getTetheringStatus:(id)status;
-(id)wifiNetwork:(id)network;
-(void)wifiNetworkFetch:(id)fetch;
-(void)updateWifi;
-(void)willEnterForeground;
-(void)updateShowsCarrierSettingsMenuVisibility;
-(void)setShowsCarrierSettingsMenu:(BOOL)menu;
-(void)networkChanged;
-(id)currentNetwork:(id)network;
-(void)updateNewsstandVisibility;
-(void)_localeChanged;
-(void)_newCarrierNotification;
-(void)_simStatusChanged:(CFStringRef)changed;
-(id)specifierForBundle:(id)bundle;
-(id)specifierForID:(id)anId;
-(void)loadPPTTestSpecifiers:(int)specifiers;
-(void)_loadThirdPartySpecifiers;
-(id)dndGlobalState:(id)state;
-(id)specifiers;
-(void)updateWeiboState;
-(void)updateAccountSpecifiers;
-(void)updateRestrictedSettings;
-(void)displayIdentifiersChanged;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)refresh3rdPartyBundles;
-(void)insertMovedThirdPartySpecifiersAtStartIndex:(unsigned)startIndex usingInsertBlock:(id)block andExistenceBlock:(id)block3;
-(id)_specifierDictionaryForDeveloperBundlePath:(id)developerBundlePath identifier:(id)identifier;
-(id)_specifierDictionaryForBundlePath:(id)bundlePath identifier:(id)identifier internalIcon:(BOOL)icon;
-(BOOL)_showCarrier;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)viewDidAppear:(BOOL)view;
-(id)identifierForSelectedIndex;
-(void)selectGeneralCategory;
-(void)suppressControllerAnimationForExpiry;
-(void)checkDeveloperSettingsState;
-(void)dealloc;
-(id)init;
-(void)rerootNavigationController;
-(void)viewWillAppear:(BOOL)view;
-(void)reloadSpecifiers;
-(void)clearCache;
-(void)setSpeakerAccessory:(id)accessory eqAvailable:(BOOL)available;
@end
