//
//  UIImage+Additions.h
//  ebankITCore
//
//  Created by Eduardo Burnay on 22/12/16.
//  Copyright © 2016 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Additions)

+ (UIImage *)imageWithColor:(UIColor *)color;
- (NSString*)toString;
- (UIImage *)blurImageWithRadius:(CGFloat)radius;
- (UIImage *)applyBlurWithRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(UIImage *)maskImage;
+ (UIImage *)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

@end
