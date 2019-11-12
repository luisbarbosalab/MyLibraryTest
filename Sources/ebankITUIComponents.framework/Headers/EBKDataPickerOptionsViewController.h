//
//  EBKDataPickerOptionsViewController.h
//  ebankIT
//
//  Created by Pedro Pereira on 13/06/2017.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Enums.h"
#import "EBKSearchHeader.h"
#import "EBKCustomDataPickerProtocol.h"

@protocol EBKCustomDataPickerViewDataSource;
@protocol EBKCustomDataPickerProtocolDelegate;
@protocol EBKCustomDataPickerProtocolDataSource;

@interface EBKDataPickerOptionsViewController : UIViewController

#pragma IBOutlets

/*!
 * @brief IBOutlet for table view (UITableView)
 */
@property (weak, nonatomic) IBOutlet UITableView *tableView;

/*!
 * @brief Header for search bar (EBKSearchHeader)
 */
@property (strong, nonatomic) EBKSearchHeader *header;

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
 * @brief EBKCustomDataPickerView datasource object
 */
@property (weak, nonatomic) id<EBKCustomDataPickerViewDataSource>dataSourceDataPicker;

/*!
 * @brief Object to set picker presentation style (PickerPresentationStyle - PickerModalPresentation, PickerPushPresentation or PickerModalPresentationWhenTablet)
 */
@property (nonatomic) PickerPresentationStyle presentationStyle;

/*!
 * @brief Bool value to set if table view has multiple selection
 */
@property (nonatomic) BOOL multipleSelection;

/*!
 * @brief Title text (NSString)
 */
@property (strong, nonatomic) NSString* titleString;

/*!
 * @brief NSInteger with object's index selected in table view
 */
@property (nonatomic) NSInteger selectedIndex;

/*!
 * @brief NSArray of NSNumber with object's indexes selected in table view
 */
@property (strong, nonatomic) NSArray<NSNumber*> *selectedIndexes;

/*!
 * @brief Header view text (NSString)
 */
@property (strong, nonatomic) NSString* headerViewString;

/*!
 * @brief Bool value to set if table view has search bar
 */
@property (nonatomic) BOOL hasSearchBar;

/*!
 * @brief Picker instance object (id)
 */
@property (strong, nonatomic) id pickerInstance;

/*!
 * @brief Bool value to set if table view has select all button
 */
@property (nonatomic) BOOL hasSelectAllButton;

/*!
 * @brief Bool value to set if table view has header view
 */
@property (nonatomic) BOOL hasHeaderView;

#pragma mark - Methods

/*!
 * @discussion This method allow to close view controller view
 */
- (void)closeSelector;

@end

@protocol EBKCustomDataPickerViewDataSource <NSObject>

@required

/*!
 * @discussion This is a EBKCustomDataPickerView datasource method, it allows to notificate custom data picker view with selected index
 * @param index Selected index
 */
- (void)indexSelected:(NSIndexPath *)index;

/*!
 * @discussion This is a EBKCustomDataPickerView datasource method, it allows to notificate custom data picker view with selected indexes
 * @param indexes Selected indexes
 */
- (void)indexesSelected:(NSArray *)indexes;

@end
