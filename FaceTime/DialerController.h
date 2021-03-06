/* DialerController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "FaceTime-Structs.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "DialerViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "TPDialerKeypadDelegate.h"
#import "PhoneViewController.h"

@class NSTimer, NSString, PHAbstractDialerView, UINavigationController;

__attribute__((visibility("hidden")))
@interface DialerController : PhoneViewController <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, DialerViewDelegate, UIActionSheetDelegate, TPDialerKeypadDelegate> {
	PHAbstractDialerView* _dialerView;
	UINavigationController* _newContactNavigationController;
	NSTimer* _deleteTimer;
	NSTimer* _lookupTimer;
	NSString* _lastDialedNumberCache;
	NSString* _myPrefix;
	int _shouldUseMyPrefixAsHint;
	unsigned _calledNumber : 1;
	unsigned _didDeleteRepeat : 1;
	unsigned _dtmfPlaying;
	int _dialerType;
}
@property(assign) int dialerType;
@property(retain) NSString* lastDialedNumber;
@property(readonly, assign) PHAbstractDialerView* dialerView;
+(id)defaultPNGName;
+(id)tabBarIconName;
+(id)tabBarIconImageSelected;
+(id)tabBarIconImage;
+(id)tabBarIconImageName;
+(int)tabViewType;
+(BOOL)launchFieldTestIfNeeded:(id)needed;
+(BOOL)shouldStringAutoDial:(id)dial givenLastChar:(BOOL)aChar;
-(void)_statusBarHeightChanged:(id)changed;
-(void)_handleSIMInsertionOrRemoval;
-(void)performDeleteAction;
-(void)performCallAction;
-(void)_deleteButtonDown:(id)down;
-(void)_deleteButtonClicked:(id)clicked;
-(void)_stopDeleteTimer;
-(void)_startDeleteTimer;
-(void)_deleteRepeat;
-(void)peoplePickerNavigationController:(id)controller insertEditorDidConfirm:(BOOL)insertEditor forPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldShowInsertEditorForPerson:(void*)person insertProperty:(int*)property copyInsertValue:(id*)value copyInsertLabel:(id*)label;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void*)newPerson;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)_dismissNewContactView:(BOOL)view;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)_addButtonClicked:(id)clicked;
-(void)_addToExistingContact;
-(void)_addToNewContact;
-(id)_qualifyNumberIfNecessary:(id)necessary;
-(void*)_newPersonWithValue:(id)value forMultiValueProperty:(int)multiValueProperty;
-(void)_hideNewContactView;
-(void)_showNewContactView;
-(void)_dialVoicemail;
-(void)phonePad:(id)pad keyUp:(BOOL)up;
-(void)phonePad:(id)pad keyDown:(BOOL)down;
-(void)phonePadDidEndSounds:(id)phonePad;
-(id)_myPrefix;
-(BOOL)_shouldUseMyPrefixAsHint;
-(void)phonePadDeleteLastDigit:(id)digit;
-(void)phonePad:(id)pad replaceLastDigitWithString:(id)string;
-(void)_phonePad:(id)pad appendString:(id)string suppressClearingDialedNumber:(BOOL)number;
-(void)phonePad:(id)pad appendString:(id)string;
-(void)phonePad:(id)pad dialerCharacterButtonWasHeld:(unsigned)held;
-(void)_callButtonPressed:(id)pressed;
-(void)_callButtonLongPress;
-(void)_updateCallButtonEnabledState:(id)state;
-(void)_updateLCDNameLabelWithOriginallyPastedString:(id)originallyPastedString;
-(void)_updateLCDNameLabelWithAMatchingName:(BOOL)amatchingName;
-(void)_updateCallButtonEnabledState:(id)state updateNameNow:(BOOL)now;
-(void)dialerView:(id)view stringWasPasted:(id)pasted;
-(void)dialerViewTextDidChange:(id)dialerViewText;
-(void)_getPersonName:(id*)name personLabel:(id*)label personUID:(int*)uid forPhoneNumberString:(id)phoneNumberString;
-(void)_updateName;
-(void)_stopLookupTimer;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)_clearDisplayIfNecessary;
-(void)dealloc;
-(id)initWithDialerType:(int)dialerType;
-(void)applicationDidResume;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)isShowingDoubleHeightStatusBar;
-(void)unloadView;
-(void)didReceiveMemoryWarning;
-(void)loadView;
@end
