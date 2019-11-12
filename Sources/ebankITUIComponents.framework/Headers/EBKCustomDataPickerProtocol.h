//
//  EBKCustomDataPickerProtocol.h
//  ebankITUIComponents
//
//  Created by Diogo Soeiro on 17/04/2018.
//  Copyright © 2018 ebankIT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Enums.h"
#import "EBKSearchHeader.h"

@protocol EBKCustomDataPickerProtocolDelegate <NSObject>

@optional

/*!
 * @discussion This is a EBKDataPickerOptionsViewController delegate method, it allows to notificate the view controller when a row is selected in table view
 * @param tableView Table view
 * @param indexPath Index of selected row/object (NSIndexPath)
 * @param instance Picker instance object (id)
 */
-(void)tableViewDataPicker:(UITableView *)tableView didSelectRow:(NSIndexPath *)indexPath pickerInstance:(id)instance;

/*!
 * @discussion This is a EBKDataPickerOptionsViewController delegate method, it allows to notificate the view controller when a row is deselected in table view
 * @param tableView Table view
 * @param indexPath Index of deselected row/object (NSIndexPath)
 * @param instance Picker instance object (id)
 */
-(void)tableViewDataPicker:(UITableView *)tableView didDeselectRow:(NSIndexPath *)indexPath pickerInstance:(id)instance;

/*!
 * @discussion This is a EBKDataPickerOptionsViewController delegate method, it allows to notificate the view controller when view's header is initialized. It can also be used to configure the search header E.g. Placeholder text, Background color, text field delegate, etc
 * @param textField Search text field
 * @param instance Picker instance object (id)
 */
-(void)didCreateSearchTextField:(UITextField *)textField pickerInstance:(id)instance;

/*!
 * @discussion This is a EBKDataPickerOptionsViewController delegate method, it allows to notificate the view controller when the select button is clicked.This button is clicked when picker allows multiple selection.
 */
-(void)didClickSelectButton;

@end

@protocol EBKCustomDataPickerProtocolDataSource <NSObject>

@required

/*!
 * @discussion This is a EBKDataPickerOptionsViewController datasource method, it allows to notificate the view controller the number of rows for the table view
 * @param tableView Table view
 * @param rows Number of rows (NSInteger)
 * @param instance Picker instance object (id)
 */
-(NSInteger)tableViewDataPicker:(UITableView *)tableView numberOfRows:(NSInteger)rows pickerInstance:(id)instance;

/*!
 * @discussion This is a EBKDataPickerOptionsViewController datasource method, it allows to notificate the view controller the row display
 * @param tableView Table view
 * @param indexPath Index of row (NSIndexPath)
 * @param instance Picker instance object (id)
 */
-(UITableViewCell *)tableViewDataPicker:(UITableView *)tableView cellForRow:(NSIndexPath *)indexPath pickerInstance:(id)instance;

@end


