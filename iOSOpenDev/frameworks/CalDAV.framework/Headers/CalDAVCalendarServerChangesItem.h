/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : XXUnknownSuperclass {
	NSMutableSet *_changedProperties;	// 24 = 0x18
}
@property(retain) NSMutableSet *changedProperties;	// G=0xd3b1; S=0xd38d; @synthesize=_changedProperties
- (id)init;	// 0xd1a9
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0xd31d
- (void)dealloc;	// 0xd3f5
- (id)description;	// 0xd3c9
- (void)addChangedProperty:(id)property;	// 0xd1e5
- (id)copyParseRules;	// 0xd211
// declared property getter: - (id)changedProperties;	// 0xd3b1
// declared property setter: - (void)setChangedProperties:(id)properties;	// 0xd38d
@end