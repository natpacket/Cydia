/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ODIDrawable.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface ODIDrawable : XXUnknownSuperclass {
}
+ (id)shapeGeometryForRectangle;	// 0x2b3c71
+ (id)shapeGeometryForEllipse;	// 0x2b3cc9
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)radius;	// 0x2b3d21
+ (id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)controlPoint;	// 0x2b3dbd
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)controlPoint;	// 0x2b3e8d
+ (id)shapeGeometryWithShapeType:(int)shapeType adjustValues:(const int *)values;	// 0x2b3f4d
+ (id)shapeGeometryForBezierPath:(CGPathRef)bezierPath gSpace:(CGRect)space;	// 0x2b4b45
+ (CGSize)sizeOfDiagram:(id)diagram;	// 0x2b4ff9
+ (id)addShapeWithBounds:(CGRect)bounds rotation:(float)rotation geometry:(id)geometry state:(id)state;	// 0x2b3fd9
+ (void)mapStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x2b4125
+ (void)mapStyleForPresentationName:(id)presentationName point:(id)point shape:(id)shape state:(id)state;	// 0x2b4259
+ (void)mapStyleForLabelName:(id)labelName shape:(id)shape state:(id)state;	// 0x2b42fd
+ (void)mapStyleForLabelName:(id)labelName point:(id)point shape:(id)shape state:(id)state;	// 0x2b43bd
+ (void)map1dArrowStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x2b4461
+ (void)map1dArrowStyleToShape:(id)shape state:(id)state;	// 0x2b4569
+ (void)mapStyleAndTextFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x2b4679
@end

@interface ODIDrawable (Private)
+ (id)presentationWithName:(id)name point:(id)point;	// 0x2b4721
+ (id)styleForPresentation:(id)presentation point:(id)point state:(id)state;	// 0x2b47ed
+ (id)styleForLabelName:(id)labelName styleCount:(int)count styleIndex:(int)index state:(id)state;	// 0x2b48c9
+ (void)mapShapeProperties:(id)properties shapeStyle:(id)style shape:(id)shape state:(id)state;	// 0x2b4999
+ (void)mapShapeProperties:(id)properties shape:(id)shape state:(id)state;	// 0x2b4a0d
+ (void)addArrowHeadToShapeProperties:(id)shapeProperties;	// 0x2b4aa1
@end