//
//  EBKThreeRowPickerTableViewCell.h
//  ebankIT
//
//  Created by Pedro Marques on 27/09/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EBKThreeRowPickerTableViewCell : UITableViewCell

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for table view row title label 1
 */
@property (nonatomic, weak) IBOutlet UILabel *rowTitle1Label;

/*!
 * @brief IBOutlet for table view row title label 2
 */
@property (nonatomic, weak) IBOutlet UILabel *rowTitle2Label;

/*!
 * @brief IBOutlet for table view row title label 3
 */
@property (nonatomic, weak) IBOutlet UILabel *rowTitle3Label;

/*!
 * @brief IBOutlet for table view row description label 1
 */
@property (nonatomic, weak) IBOutlet UILabel *rowDescription1Label;

/*!
 * @brief IBOutlet for table view row description label 2
 */
@property (nonatomic, weak) IBOutlet UILabel *rowDescription2Label;

/*!
 * @brief IBOutlet for table view row description label 3
 */
@property (nonatomic, weak) IBOutlet UILabel *rowDescription3Label;

/*!
 * @brief IBOutlet for table view row arrow image
 */
@property (nonatomic, weak) IBOutlet UIImageView *arrowImage;

@end
