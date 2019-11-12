//
//  EBKTextFieldPopUpView.h
//  ebankIT
//
//  Created by ebankIT on 15/06/15.
//  Copyright (c) 2015 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ebankITUIComponents/EBKTextFieldView.h>

@protocol EBKTextFieldPopUpViewDelegate;

@interface EBKTextFieldPopUpView : UIView

@property (nonatomic, weak) id<EBKTextFieldPopUpViewDelegate> delegate;

@property (nonatomic, weak) IBOutlet UILabel *titleView;
@property (nonatomic, weak) IBOutlet EBKTextFieldView *popUpTextField;
@property (nonatomic, weak) IBOutlet UIButton *sendButton;
@property (nonatomic, weak) IBOutlet UIView *topView;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *widthConstraint;

@property (nonatomic) NSInteger viewId;

- (void)configurePopUpViewWithTitle:(NSString *)title textFieldDataType:(EBKTextFieldDataType)dataType floatingLabelText:(NSString *)labelText errorText:(NSString *)errorText;
- (void)configurePopUpViewWithTitle:(NSString *)title textFieldDataType:(EBKTextFieldDataType)dataType floatingLabelText:(NSString *)labelText errorText:(NSString *)errorText buttonTitle:(NSString *)buttonTitle viewId:(NSInteger)viewId;
- (void)showView;
- (void)hideView;

@end

@protocol EBKTextFieldPopUpViewDelegate <NSObject>
@optional
- (void)popUpViewButtonClicked:(EBKTextFieldPopUpView *)customView;

@end
