/* SearchCompletionGlyphViewLayout.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Maps-Structs.h"

@class UIImage, NSDictionary, UILabel, UIView, UIImageView, NSString;

__attribute__((visibility("hidden")))
@interface SearchCompletionGlyphViewLayout : XXUnknownSuperclass {
	NSString* _titleText;
	NSString* _titleLocalityText;
	NSString* _subtitleText;
	NSString* _subtitleLocalityText;
	UIView* _containerView;
	UIImageView* _glyphImageView;
	UIImage* _glyph;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSDictionary* _titleLabelTextAttributes;
	NSDictionary* _subtitleLabelTextAttributes;
	unsigned _state;
	UIView* _alternateGlyphAreaView;
	CGSize _alternateGlyphAreaViewSize;
}
@property(readonly, assign, nonatomic) float leftInset;
@property(assign, nonatomic) unsigned state;
@property(readonly, assign, nonatomic) NSDictionary* subtitleLabelTextAttributes;
@property(readonly, assign, nonatomic) NSDictionary* titleLabelTextAttributes;
@property(assign, nonatomic) CGSize alternateGlyphAreaViewSize;
@property(retain, nonatomic) UIView* alternateGlyphAreaView;
@property(readonly, assign, nonatomic) UIImageView* glyphImageView;
@property(readonly, assign, nonatomic) UILabel* subtitleLabel;
@property(readonly, assign, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImage* glyph;
@property(retain, nonatomic) UIView* containerView;
@property(copy, nonatomic) NSString* subtitleLocalityText;
@property(copy, nonatomic) NSString* subtitleText;
@property(copy, nonatomic) NSString* titleLocalityText;
@property(copy, nonatomic) NSString* titleText;
-(void)setStateFromTableViewCell:(id)tableViewCell;
-(void)layout;
-(void)dealloc;
-(id)init;
@end