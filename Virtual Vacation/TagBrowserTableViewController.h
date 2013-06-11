//
//  TagBrowserTableViewController.h
//  Virtual Vacation
//


#import "CoreDataTableViewController.h"

@interface TagBrowserTableViewController : CoreDataTableViewController <UISearchBarDelegate>
@property (nonatomic, strong) NSString *vacationName;
@end
