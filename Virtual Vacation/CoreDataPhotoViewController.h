//
//  CoreDataPhotoViewController.h
//  Virtual Vacation
//

#import "PhotoViewController.h"
#import "VacationFilesPopupTableViewController.h"
#import "Photo.h"

@interface CoreDataPhotoViewController : PhotoViewController <VacationFilesPopupDelegate>

@property (nonatomic, strong) UIBarButtonItem *visitButton;
@property (nonatomic, strong) NSString *vacationName;
@property (nonatomic, strong) NSArray *vacations;
@property (nonatomic, strong) UIPopoverController *popover;
@property (nonatomic, strong) VacationFilesPopupTableViewController *popoverData;

@property (nonatomic, assign) BOOL isOnVacation;
@property (nonatomic, strong) UIDocument *document;
@property (nonatomic, strong) Photo *vacationPhoto;

-(void)resetPhotoView;

@end