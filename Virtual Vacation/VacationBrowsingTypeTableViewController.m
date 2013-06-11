//
//  VacationBrowsingTypeTableViewController.m
//  Virtual Vacation
//

#import "VacationBrowsingTypeTableViewController.h"
#import "ItineraryBrowserTableViewController.h"
#import "TagBrowserTableViewController.h"

@interface VacationBrowsingTypeTableViewController ()

@end

@implementation VacationBrowsingTypeTableViewController

-(void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.title = self.vacationName;
}

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if([segue.destinationViewController respondsToSelector:@selector(setVacationName:)]) {
        [segue.destinationViewController setVacationName:self.vacationName];
    }
}
@end
