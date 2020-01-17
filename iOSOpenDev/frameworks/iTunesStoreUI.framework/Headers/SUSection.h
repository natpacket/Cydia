/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSArray, SUPageSectionGroup, NSString, UIImage, NSMutableDictionary, NSURL, SUSearchFieldConfiguration;

@interface SUSection : XXUnknownSuperclass {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	UIImage *_image;	// 8 = 0x8
	BOOL _isLocationSection;	// 12 = 0xc
	UIImage *_moreListImage;	// 16 = 0x10
	SUSearchFieldConfiguration *_searchFieldConfiguration;	// 20 = 0x14
	UIImage *_selectedImage;	// 24 = 0x18
	UIImage *_selectedMoreListImage;	// 28 = 0x1c
}
@property(retain, nonatomic) UIImage *selectedMoreListImage;	// G=0xb9a5; S=0xbee5; @synthesize=_selectedMoreListImage
@property(retain, nonatomic) UIImage *selectedImage;	// G=0xb931; S=0xbec1; @synthesize=_selectedImage
@property(retain, nonatomic) UIImage *moreListImage;	// G=0xb7f5; S=0xbe69; @synthesize=_moreListImage
@property(retain, nonatomic) UIImage *image;	// G=0xb3cd; S=0xbe25; @synthesize=_image
@property(readonly, assign, nonatomic) NSArray *itemImages;	// G=0xb50d; 
@property(readonly, assign, nonatomic) NSString *urlBagKey;	// G=0xbbf5; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0xbb69; 
@property(readonly, assign, nonatomic) int type;	// G=0xbae5; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0xba19; 
@property(readonly, assign, nonatomic) NSString *partnerHeader;	// G=0xb915; 
@property(readonly, assign, nonatomic) SUPageSectionGroup *pageSectionGroup;	// G=0xb869; 
@property(readonly, assign, nonatomic) int minimumNetworkType;	// G=0xb771; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0xb3b1; 
@property(readonly, assign, nonatomic, getter=isUsingLocalArtwork) BOOL usingLocalArtwork;	// G=0xb4ed; 
@property(readonly, assign, nonatomic, getter=isTransient) BOOL transient;	// G=0xb4a9; 
@property(assign, nonatomic, getter=isLocationSection) BOOL locationSection;	// G=0xbe49; S=0xbe59; @synthesize=_isLocationSection
@property(readonly, assign, nonatomic, getter=isDefaultSection) BOOL defaultSection;	// G=0xb441; 
@property(retain, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration;	// G=0xbe8d; S=0xbe9d; @synthesize=_searchFieldConfiguration
// declared property setter: - (void)setSelectedMoreListImage:(id)image;	// 0xbee5
// declared property setter: - (void)setSelectedImage:(id)image;	// 0xbec1
// declared property setter: - (void)setSearchFieldConfiguration:(id)configuration;	// 0xbe9d
// declared property getter: - (id)searchFieldConfiguration;	// 0xbe8d
// declared property setter: - (void)setMoreListImage:(id)image;	// 0xbe69
// declared property setter: - (void)setLocationSection:(BOOL)section;	// 0xbe59
// declared property getter: - (BOOL)isLocationSection;	// 0xbe49
// declared property setter: - (void)setImage:(id)image;	// 0xbe25
- (int)_typeForString:(id)string;	// 0xbd65
- (int)_minimumNetworkTypeFromDictionary:(id)dictionary;	// 0xbc81
- (id)_imageBaseName;	// 0xbc59
- (id)valueForProperty:(id)property;	// 0xbc11
// declared property getter: - (id)urlBagKey;	// 0xbbf5
// declared property getter: - (id)url;	// 0xbb69
// declared property getter: - (int)type;	// 0xbae5
// declared property getter: - (id)title;	// 0xba19
// declared property getter: - (id)selectedMoreListImage;	// 0xb9a5
// declared property getter: - (id)selectedImage;	// 0xb931
// declared property getter: - (id)partnerHeader;	// 0xb915
// declared property getter: - (id)pageSectionGroup;	// 0xb869
// declared property getter: - (id)moreListImage;	// 0xb7f5
// declared property getter: - (int)minimumNetworkType;	// 0xb771
- (BOOL)loadFromDictionary:(id)dictionary searchField:(id)field;	// 0xb5a9
// declared property getter: - (id)itemImages;	// 0xb50d
// declared property getter: - (BOOL)isUsingLocalArtwork;	// 0xb4ed
// declared property getter: - (BOOL)isTransient;	// 0xb4a9
// declared property getter: - (BOOL)isDefaultSection;	// 0xb441
// declared property getter: - (id)image;	// 0xb3cd
// declared property getter: - (id)identifier;	// 0xb3b1
- (id)description;	// 0xb309
- (void)dealloc;	// 0xb259
@end