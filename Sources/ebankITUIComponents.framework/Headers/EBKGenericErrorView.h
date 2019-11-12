//
//  EBKGenericErrorView.h
//  ebankIT
//
//  Created by Pedro Marques on 03/02/17.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ebankITUIComponents/Enums.h>

@protocol ErrorViewDelegate;

@interface EBKGenericErrorView : UIView

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for error view title label (UILabel)
 */
@property (strong, nonatomic) IBOutlet UILabel *errorTitleLabel;

/*!
 * @brief IBOutlet for error view label (UILabel)
 */
@property (strong, nonatomic) IBOutlet UILabel *errorLabel;

/*!
 * @brief IBOutlet for error view action label (UILabel)
 */
@property (strong, nonatomic) IBOutlet UILabel *errorActionLabel;

/*!
 * @brief IBOutlet for error view icon (UIImageView)
 */
@property (weak, nonatomic) IBOutlet UIImageView *iconImage;

#pragma mark - Configurable Properties

/*!
 * @brief Image for success icon (UIImage)
 */
@property (nonatomic, strong) UIImage *successIcon;

/*!
 * @brief Image for warning icon (UIImage)
 */
@property (nonatomic, strong) UIImage *warningIcon;

/*!
 * @brief Image for error icon (UIImage)
 */
@property (nonatomic, strong) UIImage *errorIcon;

/*!
 * @brief Image for other icon (UIImage)
 */
@property (nonatomic, strong) UIImage *otherIcon;

/*!
 * @brief Image for empty icon (UIImage)
 */
@property (nonatomic, strong) UIImage *emptyIcon;

/*!
 * @brief Text for success title (NSString)
 */
@property (nonatomic, strong) NSString *successTitle;

/*!
 * @brief Text for warning title (NSString)
 */
@property (nonatomic, strong) NSString *warningTitle;

/*!
 * @brief Text for error title (NSString)
 */
@property (nonatomic, strong) NSString *errorTitle;

/*!
 * @brief Text for other title (NSString)
 */
@property (nonatomic, strong) NSString *otherTitle;

/*!
 * @brief Text for empty title (NSString)
 */
@property (nonatomic, strong) NSString *emptyTitle;

/*!
 * @brief Text for error action message (NSString)
 */
@property (nonatomic, strong) NSString *errorActionMessage;
 
/*!
 * @brief Error view delegate (ErrorViewDelegate). To use errorViewDidClickRefresh delegate method, set this delegate object.
 */
@property (nonatomic, weak) id<ErrorViewDelegate> delegate;

#pragma mark - Methods

/*!
 * @discussion This method allow to show the error view with a message and the alert type (EmptyDataAlertType, ErrorAlertType, SuccessAlertType, WarningAlertType, or OtherType)
 * @param message Error view message (NSString)
 * @param type Error view type (AlertType)
 */
- (void)showErrorWithMessage:(NSString *)message andType:(AlertType)type;

/*!
 * @discussion This method allow to hide error view
 */
- (void)hideError;

/*!
 * @discussion This method allow to hide error view without animation
 */
- (void)hideErrorNoAnimation;

@end

@protocol ErrorViewDelegate <NSObject>

@optional

/*!
 * @discussion This is a EBKGenericErrorView delegate method, it allows to notificate the view controller when the view it's clicked (to refresh)
 * @param instance Generic error view (EBKGenericErrorView)
 */
- (void)errorViewDidClickRefresh:(EBKGenericErrorView*)instance;
@end
