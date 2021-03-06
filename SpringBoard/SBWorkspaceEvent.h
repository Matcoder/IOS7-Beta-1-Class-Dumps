/* SBWorkspaceEvent.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface SBWorkspaceEvent : XXUnknownSuperclass {
	NSString* _label;
	id _handler;
	NSArray* _callStackSymbols;
}
@property(copy, nonatomic) id handler;
@property(copy, nonatomic) NSArray* callStackSymbols;
@property(copy, nonatomic) NSString* label;
+(id)eventWithLabel:(id)label handler:(id)handler;
-(BOOL)isEqualToEvent:(id)event;
-(void)execute;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(id)init;
@end
