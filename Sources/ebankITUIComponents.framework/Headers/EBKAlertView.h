//
//  EBKAlertView.h
//  ebankITUIComponents
//
//  Created by Isabela Fontoura on 21/01/2019.
//  Copyright © 2019 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, DefaultAlertId) {
    NoAccessAlertId = 99991,
};

@protocol EBKAlertViewDelegate;

/*!
 * @brief IBOutlet for alert view main view (UIView)
 */
@interface EBKAlertView : UIView

/*!
 * @brief IBOutlet for alert view mainView (UIView)
 */
@property (weak, nonatomic) IBOutlet UIView *mainView;
/*!
 * @brief IBOutlet for alert view stackView (UIStackView)
 */
@property (weak, nonatomic) IBOutlet UIStackView *stackView;
/*!
 * @brief IBOutlet for alert view containerView (UIView)
 */
@property (weak, nonatomic) IBOutlet UIView *containerView;
/*!
 * @brief IBOutlet for alert view imageView (UIImageView)
 */
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
/*!
 * @brief IBOutlet for alert view titleView (UIView)
 */
@property (weak, nonatomic) IBOutlet UIView *titleView;
/*!
 * @brief IBOutlet for alert view title titleLabel (UILabel)
 */
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
/*!
 * @brief IBOutlet for alert view messageView (UIView)
 */
@property (weak, nonatomic) IBOutlet UIView *messageView;
/*!
 * @brief IBOutlet for alert view message messageLabel (UILabel)
 */
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
/*!
 * @brief IBOutlet for alert view upButtonView (UIView)
 */
@property (weak, nonatomic) IBOutlet UIView *upButtonView;
/*!
 * @brief IBOutlet for alert view upButton (UIButton)
 */
@property (weak, nonatomic) IBOutlet UIButton *upButton;
/*!
 * @brief IBOutlet for alert view downButtonView (UIView)
 */
@property (weak, nonatomic) IBOutlet UIView *downButtonView;
/*!
 * @brief IBOutlet for alert view downButton (UIButton)
 */
@property (weak, nonatomic) IBOutlet UIButton *downButton;


@property (weak, nonatomic) IBOutlet NSLayoutConstraint *viewLeftConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *viewRightConstraint;


#pragma mark - Methods

/*!
 * @brief EBKAlertView delegate object
 */
@property (nonatomic, weak) id<EBKAlertViewDelegate> delegate;

/*!
 * @brief Alert view id (NSInteger)
 */
@property (nonatomic) NSInteger alertViewId;

/*!
 * @discussion This method allow to configure the alert view with title, message and buttons (none, only one or two)
 * @param title Alert view title (NSString)
 * @param message Alert view message (NSString)
 * @param button1 Alert view button 1 text (NSString). To configure button 1 display use button1 IBOutlet
 * @param button2 Alert view button 2 text (NSString). To configure button 2 display use button2 IBOutlet
 */
- (void) alertViewTitle:(NSString *) title withMessage:(NSString *) message andButton1:(NSString*)button1 andButton2:(NSString*)button2 andId:(NSInteger) alertViewId;

/*!
 * @discussion This method allow to configure the alert view with title, message and buttons (none, only one or two)
 * @param title Alert view title (NSString)
 * @param message Alert view message (NSString)
 * @param downbutton Alert view button 1 text (NSString). To configure button 1 display use button1 IBOutlet
 * @param upButton Alert view button 2 text (NSString). To configure button 2 display use button2 IBOutlet
 * @param image Alert view image (UIImage)
 */
- (void) alertViewTitleImage:(NSString *) title withMessage:(NSString *) message andButton1:(NSString*)downbutton andButton2:(NSString*)upButton andId:(NSInteger) alertViewId andImage:(UIImage*) image;

/*!
 * @discussion This method allow to show the alert view. If the alert view isn't configured it will appear without title, message and with default buttons. To configure use method alertViewTitle
 */
- (void) showAlertView;

/*!
 * @discussion This method allow to hide the alert view
 */
- (void) hideAlertView;

@end

@protocol EBKAlertViewDelegate <NSObject>

@optional

/*!
 * @discussion This is a EBKAlertView delegate method, it allows to notificate the view controller with the button index when the alert view is dismissed
 * @param alertView Alert view instance (EBKAlertView)
 * @param buttonIndex Button clicked index (NSInteger)
 */
- (void)customAlertView:(EBKAlertView*)alertView didDismissWithButtonIndex:(NSInteger)buttonIndex;

/*!
 * @discussion This method will notify the delegate that a user dismissed an alert view indicating him that he doesn't have access to a screen. You shouldn't need to change
 the implementation of this method on our default UIViewControllers. If you create you own UIViewController that dont inherit from BaseViewController you should implement
 this method accordingly.
 * @param alertView Alert view instance (EBKAlertView)
 */
- (void)didDismissNoAccessAlertView:(EBKAlertView *)alertView;

@end

