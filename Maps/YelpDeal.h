/* YelpDeal.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface YelpDeal : XXUnknownSuperclass {
	NSString* dealID;
	NSString* title;
	NSDate* startDate;
	NSDate* endDate;
}
@property(retain, nonatomic) NSDate* endDate;
@property(retain, nonatomic) NSDate* startDate;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* dealID;
+(id)dealWithJSONObject:(id)jsonobject;
-(void)dealloc;
@end
