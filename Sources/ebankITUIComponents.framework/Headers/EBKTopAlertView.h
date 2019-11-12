//
//  EBKGenericTopErrorView.h
//  ebankIT
//
//  Created by Barbara Correia on 13/02/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Enums.h"

@interface EBKTopAlertView : UIView

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for top alert view message label (UILabel)
 */
@property (nonatomic, weak) IBOutlet UILabel *messageLabel;

/*!
 * @brief IBOutlet for top alert view border line view (UIView)
 */
@property (nonatomic, weak) IBOutlet UIView *borderLine;

/*!
 * @brief IBOutlet for top alert view title label (UILabel)
 */
@property (nonatomic, weak) IBOutlet UILabel *titleLabel;

/*!
 * @brief IBOutlet for top alert view icon image (UIImageView)
 */
@property (nonatomic, weak) IBOutlet UIImageView *iconImage;

/*!
 * @brief IBOutlet for top alert view main view (UIView)
 */
@property (nonatomic, weak) IBOutlet UIView *superView;

#pragma mark - Configurable Properties

/*!
 * @brief Image for error icon (UIImage)
 */
@property (nonatomic, strong) UIImage *errorIcon;

/*!
 * @brief Image for warning icon (UIImage)
 */
@property (nonatomic, strong) UIImage *warningIcon;

/*!
 * @brief Image for success icon (UIImage)
 */
@property (nonatomic, strong) UIImage *successIcon;

/*!
 * @brief Image for other icon (UIImage)
 */
@property (nonatomic, strong) UIImage *otherIcon;

/*!
 * @brief Text for error title (NSString)
 */
@property (nonatomic, strong) NSString *errorTitle;

/*!
 * @brief Text for warning title (NSString)
 */
@property (nonatomic, strong) NSString *warningTitle;

/*!
 * @brief Text for success title (NSString)
 */
@property (nonatomic, strong) NSString *successTitle;

/*!
 * @brief Text for other title (NSString)
 */
@property (nonatomic, strong) NSString *otherTitle;

/*!
 * @brief Bool value to set if icon is visible
 */
@property (nonatomic) BOOL iconVisible;

/*!
 * @brief Maximum lines for top alert view text (NSInteger)
 */
@property (nonatomic) NSInteger maxLines;

/*!
 * @brief Seconds to top alert view being active. After x seconds top alert view is closed (double)
 */
@property (nonatomic) double secondsToClose;

/*!
 * @brief Bool value to set if top alert view is opened/visible
 */
@property (nonatomic) BOOL opened;

#pragma mark - Methods

/*!
 * @discussion This method allow to configure and show the top alert view with text and the alert type (EmptyDataAlertType, ErrorAlertType, SuccessAlertType, WarningAlertType, or OtherType)
 * @param text Top alert view text (NSString)
 * @param type Top alert view type (AlertType)
 */
- (void)showMessageWithText:(NSString *)text andType:(AlertType)type;

/*!
 * @discussion This method allow to close the top alert view
 */
- (void)closeView;

@end
