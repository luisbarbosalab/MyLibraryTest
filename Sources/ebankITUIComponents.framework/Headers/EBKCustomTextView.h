//
//  EBKCustomTextView.h
//  ebankIT
//
//  Created by Barbara Correia on 07/04/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ebankITCoreCommon/EBKValidator.h>

@protocol EBKCustomTextViewDelegate;
@protocol EBKTextViewValidationDelegate;

@interface EBKCustomTextView : UIView

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for custom text view placeholder label (UILabel)
 */
@property (nonatomic, weak) IBOutlet UILabel *placeholderLabel;

/*!
 * @brief IBOutlet for custom text view (UITextView)
 */
@property (nonatomic, weak) IBOutlet UITextView *textView;

/*!
 * @brief IBOutlet for custom text view (UIView)
 */
@property (nonatomic, weak) IBOutlet UIView *view;

#pragma mark - Configurable Properties

/*!
 * @brief Custom text view delegate (EBKCustomTextViewDelegate). To use textViewStartEditing, textViewChangeEditing and textViewEndEditing delegate methods, set this delegate object.
 */
@property (nonatomic, weak) id<EBKCustomTextViewDelegate> delegate;

/*!
 * @brief Custom text view text (NSString)
 */
@property (nonatomic, strong) NSString *text;

/*!
 * @brief Custom text view placeholder text (NSString)
 */
@property (nonatomic, weak) NSString *placeholder;

/*!
 * @brief Custom text view validator (EBKValidator)
 */
@property (nonatomic, strong) EBKValidator *validator;

/*!
 * @brief Custom text view validation status (BOOL)
 */
@property (nonatomic, assign) BOOL validationStatus;

/*!
 * @brief Custom text view validation block (void)
 */
@property (nonatomic, copy) BOOL (^validationBlock)(void);

/*!
 * @brief Custom text view delegate (EBKTextViewValidationDelegate). To use validateTextView delegate method, set this delegate object.
 */
@property (nonatomic, weak) id<EBKTextViewValidationDelegate> validationDelegate;

#pragma mark - Methods

/*!
 * @discussion This method allow to configure text view with placeholder and message
 * @param label Text view placeholder (NSString)
 * @param text Text view text message (NSString)
 */
- (void)configureCustomTextViewWithPlaceholderLabel:(NSString *)label andText:(NSString *)text;

/*!
 * @discussion This method allow to show error in text view
 * @param isInvalid Boolean to set if an error exists (BOOL)
 */
- (void)showError:(BOOL)isInvalid;

/*!
 * @discussion This method allow to reset text view
 */
- (void)reset;

/*!
 * @discussion This method allow to set the selected range
 * @param range Text view selected range (NSRange)
 */
- (void)setSelectedRange:(NSRange)range;

@end

@protocol EBKCustomTextViewDelegate <NSObject>

@optional

/*!
 * @discussion This is a EBKCustomTextView delegate method, it allows to notificate the view controller when editing it's started
 * @param customTextField Custom text view instance (EBKCustomTextView)
 */
- (void)textViewStartEditing:(EBKCustomTextView *)customTextField;

/*!
 * @discussion This is a EBKCustomTextView delegate method, it allows to notificate the view controller when editing it's changed
 * @param customTextField Custom text view instance (EBKCustomTextView)
 */
- (void)textViewChangeEditing:(EBKCustomTextView *)customTextField;

/*!
 * @discussion This is a EBKCustomTextView delegate method, it allows to notificate the view controller when editing it's ended
 * @param customTextField Custom text view instance (EBKCustomTextView)
 */
- (void)textViewEndEditing:(EBKCustomTextView *)customTextField;

@end

@protocol EBKTextViewValidationDelegate <NSObject>

@optional

/*!
 * @discussion This is a EBKTextViewValidation delegate method, it allows to notificate the view controller when text view validate is implemented
 * @param text Custom text view text (NSString)
 */
- (BOOL)validateTextView:(NSString *)text;

@end
