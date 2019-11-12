//
//  EBKSelectionTabViewItem.h
//  ebankIT
//
//  Created by Eduardo Burnay on 15/02/17.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EBKSelectionTabViewItem : NSObject

#pragma mark - Configurable Properties

/*!
 * @brief EBKSelectionTabViewItem icon (UIImage)
 */
@property(nonatomic,strong) UIImage *icon;

/*!
 * @brief EBKSelectionTabViewItem icon highlighted (UIImage)
 */
@property(nonatomic,strong) UIImage *iconHighlighted;

/*!
 * @brief EBKSelectionTabViewItem title (NSString)
 */
@property(nonatomic,strong) NSString *title;

/*!
 * @brief EBKSelectionTabViewItem label theme (NSString)
 */
@property(nonatomic,strong) NSString *labelTheme;

/*!
 * @brief EBKSelectionTabViewItem label theme highlighted (NSString)
 */
@property(nonatomic,strong) NSString *labelThemeHighlighted;

/*!
 * @brief EBKSelectionTabViewItem label theme (NSString)
 */
@property(nonatomic,strong) NSString *labelThemeSelected;

/*!
 * @brief EBKSelectionTabViewItem identifier (NSInteger)
 */
@property(nonatomic) NSInteger identifier;

/*!
 * @brief EBKSelectionTabViewItem background (UIColor)
 */
@property(nonatomic,strong) UIColor *background;

/*!
 * @brief EBKSelectionTabViewItem background highlighted (UIColor)
 */
@property(nonatomic,strong) UIColor *backgroundHighlighted;

/*!
 * @brief EBKSelectionTabViewItem background selected (UIColor)
 */
@property(nonatomic,strong) UIColor *backgroundSelected;

/*!
 * @brief EBKSelectionTabViewItem new notification color (UIColor)
 */
@property(nonatomic,strong) UIColor *notificationColor;

@end
