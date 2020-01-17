/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSDictionary;

@interface MBAggregateDictionary : XXUnknownSuperclass {
	NSMutableDictionary *_scalars;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *scalars;	// G=0x16bd; 
+ (void)incrementScalarKey:(id)key;	// 0x1899
+ (void)addValue:(long long)value forScalarKey:(id)scalarKey;	// 0x1825
+ (void)setValue:(long long)value forScalarKey:(id)scalarKey;	// 0x17b1
+ (void)pushValue:(double)value forDistributionKey:(id)distributionKey;	// 0x1731
- (id)init;	// 0x16cd
- (void)dealloc;	// 0x1ce1
// declared property getter: - (id)scalars;	// 0x16bd
- (void)_addScalarValue:(unsigned long long)value forKey:(id)key;	// 0x1c55
- (void)addCountAndSizeOfFile:(id)file;	// 0x198d
- (void)save;	// 0x18c5
@end