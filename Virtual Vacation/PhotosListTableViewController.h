//
//  PhotosListTableViewController.h
//  FastMapPlaces
//


#import <UIKit/UIKit.h>

#define MAX_PHOTOS 50

@interface PhotosListTableViewController : UITableViewController
@property (nonatomic, strong) NSArray *photos;
@property (nonatomic,weak) UIActivityIndicatorView *activityIndicator;

-(NSString *)getTitle:(NSDictionary *)photo;
-(NSString *)getSubtitle:(NSDictionary *)photo;
-(void)getThumbnailForCell:(UITableViewCell *)cell usingPhotoData:(NSDictionary *)photo;

@end
