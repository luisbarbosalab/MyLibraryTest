//
//  SelectionTabView.h
//  ebankIT
//
//  Created by Eduardo Burnay on 14/02/17.
//  Copyright © 2017 ebankIT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EBKSelectionTabViewItem.h"

@protocol EBKSelectionTabViewDelegate;

@interface EBKSelectionTabView : UIView

#pragma mark - IBOutlets

/*!
 * @brief IBOutlet for collection view (UICollectionView)
 */
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

#pragma mark - Configurable Properties

/*!
 * @brief EBKSelectionTabView delegate object
 */
@property (nonatomic, weak) id<EBKSelectionTabViewDelegate> delegate;

/*!
 * @brief NSArray of EBKSelectionTabViewItem with buttons for the selection tab
 */
@property (strong, nonatomic, readonly) NSArray<EBKSelectionTabViewItem *> *buttons;

/*!
 * @brief NSArray of NSNumber with visible buttons identifiers for the selection tab
 */
@property (nonatomic, strong) NSArray<NSNumber *> *visibleButtonsIdentifiers;

#pragma mark - Methods

/*!
 * @discussion This method allow to configure a selection tab with buttons
 * @param buttons NSArray with buttons
 * @param backgroundColor Selection tab background color (UIColor)
 * @param selectionBackgroundColor Button selected background color (UIColor)
 * @param highlightedBackgroundColor Button highlighted background color (UIColor)
 * @param selectedTabIndex Index to load tab with selected button (CGFloat)
 */
- (void)loadWithButtons:(NSArray *)buttons backgroundColor:(UIColor *)backgroundColor selectionBackgroundColor:(UIColor *)selectionBackgroundColor highlightedBackgroundColor:(UIColor *)highlightedBackgroundColor andSelectedIndex:(CGFloat)selectedTabIndex;

/*!
 * @discussion This method allow to select button
 * @param selectedTabIndex Index to select button (CGFloat)
 */
- (void)selectButtonWithIndex:(CGFloat)selectedTabIndex;

@end

@protocol EBKSelectionTabViewDelegate <NSObject>

@optional

/*!
 * @discussion This is a EBKSelectionTabView delegate method, it allows to notificate the view controller when a tab button is clicked
 * @param button Button clicked (EBKSelectionTabViewItem)
 * @param selectionTab Tab clicked (EBKSelectionTabView)
 */
- (void)tabButtonClicked:(EBKSelectionTabViewItem *)button andTab:(EBKSelectionTabView *)selectionTab;

@end
