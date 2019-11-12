//
//  ProductsListSearchHeader.h
//  ebankIT
//
//  Created by Eduardo Burnay on 20/02/17.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EBKSearchHeader : UITableViewCell

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for header text field
 */
@property (weak, nonatomic) IBOutlet UITextField *searchTextField;

@property (weak, nonatomic) IBOutlet UIView *searchHeaderView;

@end
