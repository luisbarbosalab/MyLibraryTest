//
//  EBKDefaultPickerView.h
//  ebankIT
//
//  Created by Eduardo Burnay on 16/08/17.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import "EBKCustomDataPickerView.h"

@interface EBKDefaultPickerView : EBKCustomDataPickerView

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for picker arrow icon (UIImageView)
 */
@property (weak, nonatomic) IBOutlet UIImageView *arrowIcon;

/*!
 * @brief IBOutlet for picker arrow image in ipad (UIImageView)
 */
@property (weak, nonatomic) IBOutlet UIImageView *arrowIconIpad;

#pragma mark - Configurable Properties

/*!
 * @brief Picker label text (NSString)
 */
@property (strong, nonatomic) NSString *pickerLabelValue;

/*!
 * @brief Picker border color (NSString)
 */
@property (strong, nonatomic) NSString *borderColor;

/*!
 * @brief Picker placeholder text (NSString)
 */
@property (strong, nonatomic) NSString *placeholder;

/*!
 * @brief Picker data (NSArray<NSString>)
 */
@property (nonatomic, strong) NSArray<NSString *> *pickerData;

/*!
 * @brief Picker data before search (NSArray<NSString>)
 */
@property (nonatomic, strong) NSArray<NSString *> *dataArray;

/*!
 * @brief Bool value to set if picker has floating label. Default is YES.
 */
@property (nonatomic) BOOL hasFloatingLabel;

#pragma mark - Methods

/*!
 * @discussion This method allow to set if an error must be presented
 * @param show Boolean to set if an error exists
 */
- (void)showError:(BOOL)show;

/*!
 * @discussion This is the picker constructor/initializer.
 * @param presentingController UIViewController object
 * @param multipleSelection Bool value to set if table view has multiple selection
 * @param title Title text (NSString)
 * @param searchBar Bool value to set if table view has search bar. If the bool value is YES, search functionality only works if the text field delegate method 'textField:shouldChangeCharactersInRange:replacementString:' is implemented
 * @param selectAll Bool value to set if table view has select all button
 * @param presentationStyle Object to set picker presentation style (PickerPresentationStyle - PickerModalPresentation, PickerPushPresentation or PickerModalPresentationWhenTablet)
 * @param delegate Delegate object
 * @param dataSource Datasource object
 */
- (void)configurePicker:(UIViewController *)presentingController
   hasMultipleSelection:(BOOL)multipleSelection
                  title:(NSString *)title
           hasSearchBar:(BOOL)searchBar
     hasSelectAllButton:(BOOL)selectAll
          hasHeaderView:(BOOL)headerView
      presentationStyle:(PickerPresentationStyle)presentationStyle
             pickerData:(NSArray<NSString *> *)pickerData
               delegate:(id)delegate
             dataSource:(id)dataSource;

/*!
 * @discussion This method hides the placeholder and resizes the picker to a specific height
 * @param height New height for the picker view
 */
- (void)resizePickerToHeight:(NSInteger)height;

@end

