/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMNode.h>

@class NSString, DOMCSSStyleDeclaration, DOMElement;

__attribute__((visibility("hidden")))
@interface DOMAttr : DOMNode {
}
@property(readonly, retain) DOMCSSStyleDeclaration *style;	// G=0x2ef201; 
@property(readonly, retain) DOMElement *ownerElement;	// G=0x2ef089; 
@property(copy) NSString *value;	// G=0x2eed25; S=0x2eef41; 
@property(readonly, assign) BOOL specified;	// G=0x2eecf5; 
@property(readonly, copy) NSString *name;	// G=0x2eedf1; 
// declared property getter: - (id)name;	// 0x2eedf1
// declared property getter: - (BOOL)specified;	// 0x2eecf5
// declared property getter: - (id)value;	// 0x2eed25
// declared property setter: - (void)setValue:(id)value;	// 0x2eef41
// declared property getter: - (id)ownerElement;	// 0x2ef089
- (BOOL)isId;	// 0x2ef145
// declared property getter: - (id)style;	// 0x2ef201
@end