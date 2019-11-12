//
//  EBKCustomDatePicker.h
//  ebankIT
//
//  Created by Eduardo Burnay on 03/03/17.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EBKCustomDatePickerDelegate;

@interface EBKCustomDatePicker : UIView

#pragma IBOutlets

/*!
 * @brief IBOutlet for custom date picker placeholder label (UILabel)
 */
@property (weak, nonatomic) IBOutlet UILabel *placeholderLabel;

/*!
 * @brief IBOutlet for custom date picker (UIDatePicker)
 */
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;

/*!
 * @brief IBOutlet for custom date picker view (UIDatePicker)
 */
@property (weak, nonatomic) IBOutlet UIView *dateView;

#pragma mark - Configurable Properties

/*!
 * @brief EBKCustomDatePicker delegate object
 */
@property (nonatomic, weak) id<EBKCustomDatePickerDelegate> delegate;

/*!
 * @brief NSDate object with the selected date
 */
@property (strong, nonatomic) NSDate *selectedDate;

/*!
 * @brief NSString with the date format (date and time, just date or just time). If this string is nil, it will be used the default format
 */
@property (strong, nonatomic) NSString *dateFormat;

/*!
 * @brief Bool value to set if custom date picker has placeholder. Default value is YES
 */
@property (nonatomic) BOOL hasPlaceholder;

#pragma mark - Methods

/*!
 * @discussion This method allow to configure the date picker with delegate and mode for the date picker. The date picker will not work without this method
 * @param delegate Delegate
 * @param datePickerMode Mode for the date picker, could be UIDatePickerModeTime (only time), UIDatePickerModeDateAndTime (date and time) or UIDatePickerModeDate (only date)
 */
- (void) configureDatePickerWithDelegate:(id)delegate
         datePickerMode:(UIDatePickerMode)datePickerMode;

/*!
 * @discussion This method allow to set the limit for minimum date. The date picker will not allow set a date minor than minDate
 * @param minDate Limit for the minimum date (NSDate)
 */
- (void) limitMinDate:(NSDate *)minDate;


/*!
 * @discussion This method allow to set the limit for maximum date. The date picker will not allow set a date than maxDate
 * @param maxDate Limit for the maximum date (NSDate)
 */
- (void) limitMaxDate:(NSDate *)maxDate;

/*!
 * @discussion This method allow to set current date to be shown in date picker. The picker will present this date.
 * @param currentDate Current date (NSDate)
 */
- (void) setPickerCurrentDate:(NSDate*)currentDate;

/*!
 * @discussion This method allow to reset the date picker. The picker will select the default date (if this configured) or assume
 */
- (void) reset;

/*!
 * @discussion This method allow to set if an error must be presented
 * @param show Boolean to set if an error exists
 */
- (void) showError:(BOOL)show;

/*!
 * @discussion This method allow to collapse the date picker selector
 */
- (void) collapsePicker;

/*!
 * @discussion This method allow to expand the date picker selector
 */
- (void) expandPicker;

@end

@protocol EBKCustomDatePickerDelegate <NSObject>

@optional


/*!
 * @discussion This is a EBKCustomDatePicker delegate method, it allows to notificate the view controller when a date is selected
 * @param selectedDate Selected date (NSDate)
 * @param instance Date picker instance (id)
 */
- (void)dateSelected:(NSDate *)selectedDate fromId:(id)instance;

/*!
 * @discussion This is a EBKCustomDatePicker delegate method, it allows to notificate the view controller when a date picker was clicked
 * @param clickedPicker Date picker instance (EBKCustomDatePicker)
 */
- (void)datePickerWasClicked:(EBKCustomDatePicker *)clickedPicker;

/*!
 * @discussion This is a EBKCustomDatePicker delegate method, it allows to notificate the view controller whe a date picker was expanded
 * @param expandedPicker Date picker instance (EBKCustomDatePicker)
 */
- (void)datePickerWasExpanded:(EBKCustomDatePicker *)expandedPicker;

@end
