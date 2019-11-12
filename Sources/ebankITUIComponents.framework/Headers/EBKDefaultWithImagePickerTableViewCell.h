//
//  EBKDefaultWithImagePickerTableViewCell.h
//  ebankITUIComponents
//
//  Created by Diogo Soeiro on 15/03/2018.
//  Copyright © 2018 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EBKDefaultWithImagePickerTableViewCell : UITableViewCell

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for table view row arrow image
 */
@property (weak, nonatomic) IBOutlet UIImageView *arrowImage;

/*!
 * @brief IBOutlet for table view row detail image
 */
@property (weak, nonatomic) IBOutlet UIImageView *detailImage;

/*!
 * @brief IBOutlet for table view row description label
 */
@property (weak, nonatomic) IBOutlet UILabel *descLabel;

/*!
 * @brief IBOutlet for table view row title label
 */
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@end
