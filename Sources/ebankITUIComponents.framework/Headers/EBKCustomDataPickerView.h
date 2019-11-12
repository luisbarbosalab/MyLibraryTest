//
//  EBKCustomPickerDataPicker.h
//  ebankIT
//
//  Created by Pedro Pereira on 12/06/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Enums.h"
#import "EBKDataPickerOptionsViewController.h"
#import "EBKCustomDataPickerProtocol.h"

@protocol EBKCustomDatePickerProtocolDelegate;
@protocol EBKCustomDataPickerProtocolDataSource;

@interface EBKCustomDataPickerView : UIView

#pragma mark - Configurable Properties

/*!
 * @brief EBKDataPickerOptionsViewController delegate object
 */
@property (weak, nonatomic) id<EBKCustomDataPickerProtocolDelegate>delegate;

/*!
 * @brief EBKDataPickerOptionsViewController datasource object
 */
@property (weak, nonatomic) id<EBKCustomDataPickerProtocolDataSource>dataSource;

/*!
 * @brief The view controller that will present or push the picker view
 */
@property (weak, nonatomic) UIViewController* currentViewController;

/*!
 * @brief NSInteger with object's index selected in table view
 */
@property (nonatomic) NSInteger selectedIndex;

/*!
 * @brief NSArray of NSNumber with object's indexes selected in table view
 */
@property (strong, nonatomic) NSArray<NSNumber *> *selectedIndexes;

/*!
 * @brief Bool value to set if table view has multiple selection
 */
@property (nonatomic) BOOL hasMultipleSelection;

/*!
 * @brief Bool value to set if table view has search bar
 */
@property (nonatomic) BOOL hasSearchBar;

/*!
 * @brief Bool value to set if table view has header view
 */
@property (nonatomic) BOOL hasHeaderView;

/*!
 * @brief EBKDataPickerOptionsViewController object (EBKDataPickerOptionsViewController)
 */
@property (strong, nonatomic) EBKDataPickerOptionsViewController* dataPickerViewController;

#pragma mark - Methods

/*!
 * @discussion This is the picker constructor/initializer.
 * @param presentingController UIViewController where picker is created
 * @param multipleSelection Bool value to set if table view has multiple selection or not
 * @param title NSString Title of the picker viewController
 * @param searchBar Bool value to set if table view has search bar. If the bool value is YES, search functionality only works if the text field delegate method 'textField:shouldChangeCharactersInRange:replacementString:' is implemented
 * @param selectAll Bool value to set if table view has select all button
 * @param presentationStyle PickerPresentationStyle Set picker presentation style (PickerPresentationStyle - PickerModalPresentation, PickerPushPresentation or PickerModalPresentationWhenTablet)
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
          delegate:(id)delegate
        dataSource:(id)dataSource;

/*!
 * @discussion This method allow to reset the date picker. Selected index(es) and object are set to nil.
 */
- (void)resetPicker;

/*!
 * @discussion This method allow to reload table view data
 */
- (void)reloadData;

@end

