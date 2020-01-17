/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <RemoteUI/XXUnknownSuperclass.h>

@class RUIWebView, NSString, NSDictionary, RUITableView, UIToolbar, UIView, UIBarButtonItem, NSArray;

@interface RUIPage : XXUnknownSuperclass {
	NSString *_pageID;	// 152 = 0x98
	UIView *_containerView;	// 156 = 0x9c
	RUITableView *_tableViewOM;	// 160 = 0xa0
	RUIWebView *_webViewOM;	// 164 = 0xa4
	NSString *_validationFunction;	// 168 = 0xa8
	BOOL _isLoading;	// 172 = 0xac
	NSString *_navTitle;	// 176 = 0xb0
	NSString *_loadingTitle;	// 180 = 0xb4
	NSDictionary *_rightNavigationBarButton;	// 184 = 0xb8
	NSDictionary *_leftNavigationBarButton;	// 188 = 0xbc
	BOOL _hidesBackButton;	// 192 = 0xc0
	UIToolbar *_toolbar;	// 196 = 0xc4
	NSDictionary *_rightToolbarButton;	// 200 = 0xc8
	NSDictionary *_leftToolbarButton;	// 204 = 0xcc
	UIBarButtonItem *_leftToolbarItem;	// 208 = 0xd0
	UIBarButtonItem *_rightToolbarItem;	// 212 = 0xd4
	UIBarButtonItem *_middleFlexSpace;	// 216 = 0xd8
	UIBarButtonItem *_leftFlexSpace;	// 220 = 0xdc
	id _delegate;	// 224 = 0xe0
}
@property(copy, nonatomic) NSString *pageID;	// G=0x4965; S=0x4aa1; @synthesize=_pageID
@property(retain, nonatomic) NSString *validationFunction;	// G=0x4955; S=0x4ac5; @synthesize=_validationFunction
@property(copy, nonatomic) NSString *navTitle;	// G=0x4945; S=0x6565; @synthesize=_navTitle
@property(copy, nonatomic) NSString *loadingTitle;	// G=0x4935; S=0x64f9; @synthesize=_loadingTitle
@property(retain, nonatomic) NSDictionary *rightNavigationBarButton;	// G=0x4925; S=0x5fb5; @synthesize=_rightNavigationBarButton
@property(retain, nonatomic) NSDictionary *leftNavigationBarButton;	// G=0x4915; S=0x5f1d; @synthesize=_leftNavigationBarButton
@property(retain, nonatomic) NSDictionary *rightToolbarButton;	// G=0x4905; S=0x5d65; @synthesize=_rightToolbarButton
@property(retain, nonatomic) NSDictionary *leftToolbarButton;	// G=0x48f5; S=0x5ccd; @synthesize=_leftToolbarButton
@property(retain, nonatomic) UIBarButtonItem *rightToolbarItem;	// G=0x48e5; S=0x4aed; @synthesize=_rightToolbarItem
@property(retain, nonatomic) UIBarButtonItem *leftToolbarItem;	// G=0x48d5; S=0x4b15; @synthesize=_leftToolbarItem
@property(readonly, assign, nonatomic) UIView *containerView;	// G=0x48c5; @synthesize=_containerView
@property(readonly, assign, nonatomic) UIToolbar *toolbar;	// G=0x48b5; @synthesize=_toolbar
@property(assign, nonatomic) BOOL hidesBackButton;	// G=0x48a5; S=0x64bd; @synthesize=_hidesBackButton
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x61a9; 
@property(readonly, assign, nonatomic) RUIWebView *webViewOM;	// G=0x504d; 
@property(readonly, assign, nonatomic) RUITableView *tableViewOM;	// G=0x50cd; 
- (id)init;	// 0x4975
- (id)description;	// 0x6625
- (void)_updateNavItemTitle;	// 0x65d1
// declared property setter: - (void)setNavTitle:(id)title;	// 0x6565
// declared property setter: - (void)setLoadingTitle:(id)title;	// 0x64f9
// declared property setter: - (void)setHidesBackButton:(BOOL)button;	// 0x64bd
- (void)setHasToolbar;	// 0x6435
- (id)_barButtonItemForDict:(id)dict action:(SEL)action;	// 0x6259
// declared property getter: - (id)buttons;	// 0x61a9
- (void)setButton:(id)button enabled:(BOOL)enabled;	// 0x604d
// declared property setter: - (void)setRightNavigationBarButton:(id)button;	// 0x5fb5
// declared property setter: - (void)setLeftNavigationBarButton:(id)button;	// 0x5f1d
- (void)_updateToolbar;	// 0x5dfd
// declared property setter: - (void)setRightToolbarButton:(id)button;	// 0x5d65
// declared property setter: - (void)setLeftToolbarButton:(id)button;	// 0x5ccd
- (void)_barButtonPressed:(id)pressed isRight:(BOOL)right isNavbar:(BOOL)navbar;	// 0x5acd
- (void)_rightNavigationBarButtonPressed:(id)pressed;	// 0x5aa1
- (void)_leftNavigationBarButtonPressed:(id)pressed;	// 0x5a71
- (void)_rightToolbarButtonPressed:(id)pressed;	// 0x5a41
- (void)_leftToolbarButtonPressed:(id)pressed;	// 0x5a15
- (float)_getKeyboardIntersectionHeight;	// 0x57b9
- (void)_setContentInset:(float)inset;	// 0x5709
- (void)_keyboardWillShow:(id)_keyboard;	// 0x53bd
- (void)_keyboardWillHide:(id)_keyboard;	// 0x5199
// declared property getter: - (id)tableViewOM;	// 0x50cd
- (BOOL)hasTableView;	// 0x488d
// declared property getter: - (id)webViewOM;	// 0x504d
- (void)setDelegate:(id)delegate;	// 0x501d
- (void)populatePostbackDictionary:(id)dictionary;	// 0x4ff9
- (void)dealloc;	// 0x4e05
- (void)viewDidLoad;	// 0x4dcd
- (void)viewWillAppear:(BOOL)view;	// 0x4da9
- (void)viewDidAppear:(BOOL)view;	// 0x4d85
- (void)viewWillDisappear:(BOOL)view;	// 0x4d61
- (void)viewDidDisappear:(BOOL)view;	// 0x4d3d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x4d15
- (void)viewDidLayoutSubviews;	// 0x4b9d
- (id)contentScrollView;	// 0x4b3d
// declared property getter: - (BOOL)hidesBackButton;	// 0x48a5
// declared property getter: - (id)toolbar;	// 0x48b5
// declared property getter: - (id)containerView;	// 0x48c5
// declared property getter: - (id)leftToolbarItem;	// 0x48d5
// declared property setter: - (void)setLeftToolbarItem:(id)item;	// 0x4b15
// declared property getter: - (id)rightToolbarItem;	// 0x48e5
// declared property setter: - (void)setRightToolbarItem:(id)item;	// 0x4aed
// declared property getter: - (id)leftToolbarButton;	// 0x48f5
// declared property getter: - (id)rightToolbarButton;	// 0x4905
// declared property getter: - (id)leftNavigationBarButton;	// 0x4915
// declared property getter: - (id)rightNavigationBarButton;	// 0x4925
// declared property getter: - (id)loadingTitle;	// 0x4935
// declared property getter: - (id)navTitle;	// 0x4945
// declared property getter: - (id)validationFunction;	// 0x4955
// declared property setter: - (void)setValidationFunction:(id)function;	// 0x4ac5
// declared property getter: - (id)pageID;	// 0x4965
// declared property setter: - (void)setPageID:(id)anId;	// 0x4aa1
@end