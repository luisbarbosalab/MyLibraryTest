//
//  EBKSelectionTabCollectionViewCell.h
//  ebankIT
//
//  Created by Eduardo Burnay on 14/02/17.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EBKSelectionTabViewItem.h"

@interface EBKSelectionTabCollectionViewCell : UICollectionViewCell

#pragma - IBOutlets

/*!
 * @brief IBOutlet for title label (UILabel)
 */
@property (weak, nonatomic) IBOutlet UILabel *title;

/*!
 * @brief IBOutlet for icon image (UIImageView)
 */
@property (weak, nonatomic) IBOutlet UIImageView *iconImage;

/*!
 * @brief IBOutlet for new view (UIView)
 */
@property (weak, nonatomic) IBOutlet UIView *notificationView;

#pragma - Configurable Properties

/*!
 * @brief Tab button (EBKSelectionTabViewItem)
 */
@property (strong, nonatomic) EBKSelectionTabViewItem *button;

/*!
 * @brief Button selection background color (UIColor)
 */
@property (strong, nonatomic) UIColor *selectionBackgroundColor;

/*!
 * @brief Button highlighted background color (UIColor)
 */
@property (strong, nonatomic) UIColor *highlightedBackgroundColor;


/*!
 * @brief New notification view background color (UIColor)
 */
@property (strong, nonatomic) UIColor *notificationColor;

@end
