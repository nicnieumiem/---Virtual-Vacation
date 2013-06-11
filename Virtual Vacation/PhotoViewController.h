//
//  PhotoViewController.h
//  FastMapPlaces
//

#import <UIKit/UIKit.h>

#define DEFAULTS_RECENT_PHOTOS_KEY @"recentPhotosArray"

@interface PhotoViewController : UIViewController

@property (nonatomic, strong) NSDictionary *photo;
@property (nonatomic, weak) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIToolbar *toolbar;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *downloadIndicator;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *titleBarButtonItem;

-(void)resetPhotoView;
-(void)updateViewWithImage:(UIImage *)image;
-(void)storePhoto;

@end
