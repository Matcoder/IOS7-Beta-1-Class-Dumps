/* PhoneMonthWeekDayNumber.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PhoneMonthWeekTodayCircle, CALayer, EKCalendarDate, NSCalendar;

__attribute__((visibility("hidden")))
@interface PhoneMonthWeekDayNumber : XXUnknownSuperclass {
	CALayer* _layer;
	float _offsetX;
	EKCalendarDate* _calendarDate;
	NSCalendar* _calendar;
	PhoneMonthWeekTodayCircle* _attachedTodayCircle;
	CGRect _lastKnownTappableZone;
}
@property(assign, nonatomic) CGRect lastKnownTappableZone;
@property(retain, nonatomic) PhoneMonthWeekTodayCircle* attachedTodayCircle;
@property(readonly, assign, nonatomic) float offsetX;
@property(readonly, assign, nonatomic) CALayer* layer;
@property(retain, nonatomic) NSCalendar* calendar;
@property(retain, nonatomic) EKCalendarDate* calendarDate;
+(id)_dayNumberFont;
+(id)_standardLabel;
+(float)layerHeight;
+(float)layerWidth;
+(float)baselineOffsetFromTopOfLayer;
-(void).cxx_destruct;
-(id)_weekendImageForDayNumberString:(id)dayNumberString;
-(id)_weekdayImageForDayNumberString:(id)dayNumberString;
-(id)_generateImageWithString:(id)string color:(id)color;
-(BOOL)_calendarDateIsOnWeekend;
-(id)description;
-(id)init;
@end
