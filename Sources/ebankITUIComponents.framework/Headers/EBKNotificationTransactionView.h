//
//  EBKNotificationTransactionView.h
//  ebankITUIComponents
//
//  Created by Pedro Marques on 26/03/2018.
//  Copyright © 2018 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "EBKTextField.h"

@interface EBKNotificationTransactionView : UIView

#pragma mark - IBOutlets

@property (nonatomic, weak) IBOutlet UILabel *shouldNotifyLabel;
@property (nonatomic, weak) IBOutlet UISwitch *notifySwitch;
@property (nonatomic, weak) IBOutlet EBKTextField *emailTextField;
@property (nonatomic, weak) IBOutlet EBKTextField *smsTextField;
@property (nonatomic, weak) IBOutlet UILabel *emailErrorLabel;
@property (nonatomic, weak) IBOutlet UILabel *smsErrorLabel;
@property (nonatomic, weak) IBOutlet UILabel *notificationErrorLabel;
@property (nonatomic, weak) IBOutlet UIView *inputView;

- (BOOL)getValidationStatusAndUpdateUI:(BOOL)updateUI;

@end
