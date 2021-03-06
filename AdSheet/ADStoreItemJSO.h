/* ADStoreItemJSO.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ADStoreItemJSO_Bindings.h"
#import "ADJavaScriptObject.h"

@class NSArray, SSItem, NSNumber, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ADStoreItemJSO : ADJavaScriptObject <ADStoreItemJSO_Bindings> {
	NSDate* _expirationDate;
	int _error;
	SSItem* _storeItem;
	NSNumber* _adamId;
	NSString* _title;
	NSArray* _offers;
	NSArray* _previews;
}
@property(readonly, assign, nonatomic) NSArray* previews;
@property(readonly, assign, nonatomic) NSArray* offers;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) NSNumber* adamId;
@property(retain, nonatomic) SSItem* storeItem;
@property(assign, nonatomic) int error;
@property(retain, nonatomic) NSDate* expirationDate;
-(id)initWithAdamId:(id)adamId delegate:(id)delegate;
-(void)dealloc;
@end
