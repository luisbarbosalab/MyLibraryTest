//
//  EBKDefaultPickerTableViewCell.h
//  ebankIT
//
//  Created by Pedro Pereira on 13/06/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EBKDefaultPickerTableViewCell : UITableViewCell

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for arrow image
 */
@property (weak, nonatomic) IBOutlet UIImageView *arrowImage;

#pragma mark - Configurable Properties

/*!
 * @brief Table view row label text (NSString)
 */
@property (strong, nonatomic) NSString *optionLabel;

@end
