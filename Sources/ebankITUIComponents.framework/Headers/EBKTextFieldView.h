//
//  EBKTextFieldView.h
//  ebankITUIComponents
//
//  Created by Pedro Marques on 24/01/2018.
//  Copyright © 2018 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EBKTextField.h"

@interface EBKTextFieldView : UIView <EBKTextFieldStatusDelegate>

#pragma mark - IBOutlets

@property (nonatomic, weak) IBOutlet EBKTextField *textField;
@property (nonatomic, weak) IBOutlet UILabel *errorLabel;
@property (nonatomic, strong) IBOutlet UIView *contentView;

#pragma mark - Configurable Properties

@property (nonatomic, weak) UIColor *defaultBorderColor;
@property (nonatomic, weak) UIColor *errorBorderColor;

#pragma mark - Methods

- (void)configureTextFieldViewWithFloatingLabelText:(NSString *)floatingLabelText
                                               type:(EBKTextFieldDataType)type;

- (void)configureTextFieldViewWithFloatingLabelText:(NSString *)floatingLabelText
                                               type:(EBKTextFieldDataType)type
                                          errorText:(NSString *)errorText
                                     errorViewTheme:(NSString *)errorViewTheme;

- (void)showSuccessWithMessage:(NSString *)message;
- (void)hideSuccess;

- (void)reset;

@end
