//
//  RecentPhotosTableViewController.m
//  FastMapPlaces
//

#import "RecentPhotosTableViewController.h"
#import "CoreDataPhotoViewController.h"
#import "VacationHelper.h"

@interface RecentPhotosTableViewController ()

@end

@implementation RecentPhotosTableViewController

- (NSArray *)getDefaultsPhotoData {
    return [[NSUserDefaults standardUserDefaults] arrayForKey:DEFAULTS_RECENT_PHOTOS_KEY];
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    if ([[[self.splitViewController viewControllers] lastObject] isKindOfClass:[CoreDataPhotoViewController class]]) {
        CoreDataPhotoViewController *cdpvc = [[self.splitViewController viewControllers] lastObject];
        [cdpvc resetPhotoView];
    }
    self.title = @"Recent photos";
    self.photos = [self getDefaultsPhotoData];
}

@end
