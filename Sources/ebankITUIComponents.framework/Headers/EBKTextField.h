//
//  EBKTextField.h
//  ebankITUIComponents
//
//  Created by Pedro Marques on 24/01/2018.
//  Copyright © 2018 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ebankITCoreCommon/EBKLengthValidationConstraint.h>
#import <ebankITCoreCommon/EBKValidator.h>
#import "EBKTextFieldHelper.h"

@class EBKTextField;

static CGFloat const kDefaultFloatingLabelShowAnimationDuration = 0.3f;
static CGFloat const kDefaultFloatingLabelHideAnimationDuration = 0.3f;

static NSUInteger const kDefaultAccountMaxLength = 16;

typedef NS_ENUM(NSInteger, EBKTextFieldType) {
    FloatingLabelTextFieldType,
    SimpleTextFieldType,
    ClearFloatingLabelTextFieldType,
    ClearSimpleTextfieldType,
};

typedef NS_ENUM(NSInteger, EBKTextFieldDataType) {
    AnyStringTextFieldDataType,
    DecimalNumberTextFieldDataType,
    WholeNumberTextFieldType,
    AmountTextFieldDataType,
    CurrencyConvertTextFieldDataType,
    IBANTextFieldDataType,
    EmailTextFieldDataType,
    AccountTextFieldDataType,
    TelephoneNumberTextFieldType,
    CustomTextFieldDataType,
    PasswordStringTextFieldDataType,
    PasswordNumberTextFieldDataType,
};

@protocol EBKTextFieldValidationDelegate <NSObject>
@optional
- (BOOL)validateTextField:(EBKTextField *)textField;
@end

@protocol EBKTextFieldStatusDelegate <NSObject>
@optional
- (void)validationStatusChanged:(EBKTextField *)textField;
@end

@interface EBKTextField : UITextField

#pragma mark - Configurable Properties

@property (nonatomic, assign) EBKTextFieldDataType textFieldDataType;
@property (nonatomic, strong) EBKTextFieldHelper *helper;
@property (nonatomic, assign) NSUInteger maxLength;
@property (nonatomic, strong) UILabel *floatingLabel;
@property (nonatomic, strong) UIView *underLineView;
@property (nonatomic, assign) NSTimeInterval floatingLabelShowAnimationDuration;
@property (nonatomic, assign) NSTimeInterval floatingLabelHideAnimationDuration;

@property (nonatomic, strong) NSString *floatingLabelCenteredTheme;
@property (nonatomic, strong) NSString *floatingLabelUpTheme;
@property (nonatomic, strong) NSString *placeholderColor;
@property (nonatomic, strong) NSString *borderColor;
@property (nonatomic, strong) NSString *errorBorderColor;

@property (nonatomic, assign) BOOL changeBorderColorOnError; // Default is YES
@property (nonatomic, assign) BOOL validatesWhileTyping; // Default is YES
@property (nonatomic, assign) BOOL validateWithNumber;

// Margins for floating label and textfield
@property (nonatomic) CGFloat leftMargin; // Default 10
@property (nonatomic) CGFloat rightMargin; // Default 10

@property (nonatomic, strong) NSLayoutConstraint *centerFloatingLabelConstraint;
@property (nonatomic, strong) NSLayoutConstraint *leadingFloatingLabelConstraint;
@property (nonatomic, strong) NSLayoutConstraint *trailingFloatingLabelConstraint;

@property (nonatomic, assign) BOOL validationStatus;
@property (nonatomic, weak) id<EBKTextFieldStatusDelegate> statusDelegate;

@property (nonatomic, weak) id<EBKTextFieldValidationDelegate> validationDelegate;
@property (nonatomic, strong) NSRegularExpression *validationRegularExpression;
@property (nonatomic, copy) BOOL (^validationBlock)(void);
@property (nonatomic, strong) EBKValidator *validator;

#pragma mark - Methods

- (void)configureTextFieldWithType:(EBKTextFieldType)type; // If you don't call this method SimpleTextFieldType will be used
- (void)validate;
- (void)showError:(BOOL)isInvalid;
- (void)reset;
- (void)setLockStatus:(BOOL)isLocked;
- (NSDecimalNumber *)getNumberValue;

- (CGRect)textRectForBounds:(CGRect)bounds; // Override to change layout of textField

@end
