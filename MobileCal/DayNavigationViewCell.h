/* DayNavigationViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TappableDayNumber, NSString, NSDate, NSObject, UIColor, UILabel;
@protocol DayNavigationViewCellDelegate;

__attribute__((visibility("hidden")))
@interface DayNavigationViewCell : XXUnknownSuperclass {
	NSString* _displayString;
	TappableDayNumber* _dateNumber;
	float _extraOffset;
	float _circleDiameter;
	float _circleDiameterLarge;
	BOOL _highlighted;
	BOOL _isToday;
	BOOL _isWeekend;
	NSDate* _date;
	NSObject<DayNavigationViewCellDelegate>* _delegate;
}
@property(readonly, assign, nonatomic) UILabel* label;
@property(assign, nonatomic) __weak NSObject<DayNavigationViewCellDelegate>* delegate;
@property(retain, nonatomic) UIColor* weekendColor;
@property(assign, nonatomic) BOOL isWeekend;
@property(assign, nonatomic) BOOL isToday;
@property(assign, nonatomic) BOOL highlighted;
@property(retain, nonatomic) NSDate* date;
+(float)topOffset;
+(id)_boldFont;
+(id)_normalFont;
+(CGSize)_boldTextSize;
+(CGSize)_normalTextSize;
+(float)largeCircleDiameter;
+(float)standardCircleDiameter;
-(void).cxx_destruct;
-(void)pulseToday;
-(void)touchCancelled:(id)cancelled;
-(void)touchUpOccurred:(id)occurred;
-(void)touchDownOccurred:(id)occurred;
-(float)_textYFromCircleDiameter:(float)circleDiameter textHeight:(float)height;
-(float)_yTextAdjustment;
-(float)_xTextAdjustment;
-(void)_layoutTextFrame;
-(void)_layoutCircle;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)color;
-(void)_updateDisplayedString;
-(void)setCircleDiameter:(float)diameter largeDiameter:(float)diameter2;
-(void)setDisplayedString:(id)string;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)_createSubviews;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)frame;
@end
