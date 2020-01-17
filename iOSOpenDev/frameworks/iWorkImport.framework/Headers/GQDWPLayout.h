/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/GQDWPLayout.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDWPBlockList.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPLayout : GQDWPBlockList {
@private
	GQDSStyle *mLayoutStyle;	// 8 = 0x8
}
- (void)dealloc;	// 0x21515
- (id)layoutStyle;	// 0x214b5
@end

@interface GQDWPLayout (Private)
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x21561
@end