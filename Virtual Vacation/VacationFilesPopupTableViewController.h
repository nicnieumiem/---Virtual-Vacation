//
//  VacationFilesPopupTableViewController.h
//  Virtual Vacation
//

#import <UIKit/UIKit.h>

@protocol VacationFilesPopupDelegate;

@interface VacationFilesPopupTableViewController : UITableViewController
@property (nonatomic, strong) NSArray *vacationNames;
@property (nonatomic, strong) id <VacationFilesPopupDelegate> delegate;
@end

@protocol VacationFilesPopupDelegate
-(void)VacationFilesPopupTableViewController:(VacationFilesPopupTableViewController *)sender didChooseVacation:(NSString *)vacation;
@end