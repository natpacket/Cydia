/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class LBSGLatLng;

@interface LBSGRectangle : XXUnknownSuperclass {
	LBSGLatLng *_lowerLeft;	// 4 = 0x4
	LBSGLatLng *_upperRight;	// 8 = 0x8
}
@property(retain, nonatomic) LBSGLatLng *upperRight;	// G=0x2ff11; S=0x2ff21; @synthesize=_upperRight
@property(retain, nonatomic) LBSGLatLng *lowerLeft;	// G=0x2fedd; S=0x2feed; @synthesize=_lowerLeft
// declared property setter: - (void)setUpperRight:(id)right;	// 0x2ff21
// declared property getter: - (id)upperRight;	// 0x2ff11
// declared property setter: - (void)setLowerLeft:(id)left;	// 0x2feed
// declared property getter: - (id)lowerLeft;	// 0x2fedd
- (void)writeTo:(id)to;	// 0x2fdcd
- (BOOL)readFrom:(id)from;	// 0x2fbc1
- (id)dictionaryRepresentation;	// 0x2fb41
- (id)description;	// 0x2fad1
- (void)dealloc;	// 0x2fa79
@end