//
//  UIView+Theme.h
//  ebankITCore
//
//  Created by Eduardo Burnay on 21/12/16.
//  Copyright © 2016 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Theme)

- (void)setTheme:(NSString *)theme;
- (void)addBordersToEdge:(UIRectEdge)edge withColor:(UIColor *)color andWidth:(CGFloat) borderWidth;

@end
