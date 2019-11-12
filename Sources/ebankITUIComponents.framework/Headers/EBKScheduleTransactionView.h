//
//  EBKScheduleTransactionView.h
//  ebankITUIComponents
//
//  Created by Pedro Marques on 19/03/2018.
//  Copyright © 2018 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EBKDefaultPickerView.h"
#import "EBKTextFieldView.h"
#import "EBKCustomDatePicker.h"

typedef NS_ENUM(NSInteger, EBKScheduleTransactionViewStatus) {
    OneOffTransaction,
    RecurrentTransaction,
};

typedef NS_ENUM(NSInteger, EBKScheduleTransactionTerminationType) {
    UntilCancelled = 1,
    AfterNumberOfTransactions = 2,
    UntilSpecificDate = 3,
};

@interface EBKScheduleComponentData : NSObject

@property (nonatomic, assign) NSString *periodicity;
@property (nonatomic, assign) EBKScheduleTransactionTerminationType scheduleType;
@property (nonatomic, strong) NSNumber *isPermanent;
@property (nonatomic, strong) NSDate *permanentScheduleStartDate;
@property (nonatomic, strong) NSDate *permanentScheduleEndDate;
@property (nonatomic, strong) NSNumber *numberOfTimes;
@property (nonatomic, strong) NSString *favoriteId;

@end

@protocol EBKScheduleTransactionViewDelegate;

@interface EBKScheduleTransactionView : UIView

#pragma mark - IBOutlets

#pragma mark — Common Section
@property (nonatomic, weak) IBOutlet UIView *transactionHeaderView;
@property (nonatomic, weak) IBOutlet UILabel *transactionHeaderLabel;
@property (nonatomic, weak) IBOutlet UILabel *transactionTypeHeaderLabel;
@property (nonatomic, weak) IBOutlet UIButton *oneOffTransactionRadioButton;
@property (nonatomic, weak) IBOutlet UILabel *oneOffTransactionLabel;
@property (nonatomic, weak) IBOutlet UIButton *recurrentTransactionRadioButton;
@property (nonatomic, weak) IBOutlet UILabel *recurrentTransactionLabel;

#pragma mark — One Off Section
@property (nonatomic, weak) IBOutlet UIStackView *oneOffSectionView;
@property (nonatomic, weak) IBOutlet EBKCustomDatePicker *transactionDatePicker;

#pragma mark — Recurrent Section
@property (nonatomic, weak) IBOutlet UIStackView *recurrentSectionView;
@property (nonatomic, weak) IBOutlet EBKDefaultPickerView *periodicityPicker;
@property (nonatomic, weak) IBOutlet UILabel *periodicityErrorLabel;

@property (nonatomic, weak) IBOutlet EBKCustomDatePicker *startDatePicker;

@property (nonatomic, weak) IBOutlet EBKCustomDatePicker *untilDatePicker;
@property (nonatomic, weak) IBOutlet UILabel *untilDateErrorLabel;

@property (nonatomic, weak) IBOutlet EBKDefaultPickerView *transactionTerminationPicker;
@property (nonatomic, weak) IBOutlet EBKTextFieldView *fixedNumberOfTransactionsTextFieldView;
@property (nonatomic, weak) IBOutlet UIView *untilDatePickerWrapperView;
@property (nonatomic, weak) IBOutlet UIView *numberOfTransactionsWrapperView;

#pragma mark - Configurable Properties

@property (nonatomic, assign) EBKScheduleTransactionViewStatus currentTransactionStatus; // Setting this will automatically update the view status to match the described state
@property (nonatomic, assign) EBKScheduleTransactionTerminationType currentTerminationType; // Setting this will automatically update the view status to match the described state
@property (nonatomic, weak) id<EBKScheduleTransactionViewDelegate> delegate;

#pragma mark - Methods
/*!
 * @discussion Get the scheduling input object to use in a transaction. This is a property of the EBKBaseTransactionViewModelInput object. Override for custom input implementations.
 * A method is provided in GenericTransactionStep1ViewController to map this object to a usable one for the transaction engine.
 */
- (EBKScheduleComponentData *)getSchedulingInput;

- (BOOL)validateDates:(NSDate *)date;

@end

@protocol EBKScheduleTransactionViewDelegate <NSObject>

@optional

/*!
 * @discussion This method will let you update your UI if some UI elements are tapped. (EG. to scroll to an object)
 * @param view The view that is tapped. (Radio buttons and picker taps will call trigger this delegate)
 */
- (void)viewTapped:(UIView *)view;

/*!
 * @discussion Default transaction start date. Override for custom date.
 */
- (NSDate *)getDefaultTransactionDate;

/*!
 * @discussion Default transaction recurrent start date. Override for custom date.
 */
- (NSDate *)getDefaultRecurrentFromDate;

/*!
 * @discussion Default transaction recurrent end date. Override for custom date.
 */
- (NSDate *)getDefaultRecurrentUntilDate;

@end
