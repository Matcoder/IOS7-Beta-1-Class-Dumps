/* _CalendarEventsRow.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CalendarEventsRow : XXUnknownSuperclass {
	NSMutableArray* _blocks;
	int _occupyingDays;
	unsigned _startDate;
}
-(void).cxx_destruct;
-(id)occurrenceBlocks;
-(unsigned)spaceGapFor:(id)aFor;
-(BOOL)isFilledForDay:(unsigned)day;
-(void)addOccurrenceBlock:(id)block;
-(id)init;
@end