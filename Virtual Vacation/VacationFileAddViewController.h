//
//  VacationFileAddViewController.h
//  Virtual Vacation
//

#import <UIKit/UIKit.h>

@protocol VacationFileAddDelegate;

@interface VacationFileAddViewController : UIViewController
@property (nonatomic, weak) id <VacationFileAddDelegate> delegate;
@end

@protocol VacationFileAddDelegate <NSObject>
-(BOOL)vacationFileAddViewController:(VacationFileAddViewController *)sender asksIfVacationWithGivenNameExists:(NSString *)name;
-(void)vacationFileAddViewController:(VacationFileAddViewController *)sender didAddVacation:(NSString *)vacationName;
@end