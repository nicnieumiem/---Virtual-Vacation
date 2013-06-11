//
//  CoreDataPhotosListTableViewController.m
//  Virtual Vacation
//

#import "CoreDataPhotosListTableViewController.h"
#import "Photo.h"
#import "Place.h"
#import "CoreDataPhotoViewController.h"
#import "FlickrFetcher.h"
#import "ImageFetcher.h"

@interface CoreDataPhotosListTableViewController ()

@end

@implementation CoreDataPhotosListTableViewController

-(void)getThumbnailForCell:(UITableViewCell *)cell usingURL:(NSURL *)url {
    [ImageFetcher.sharedInstance getImageUsingURL:url completed:^(UIImage *image, NSData *data){
        if(!cell.imageView) {
            return;
        }
        if(image) {
            cell.imageView.image = image;
            [cell setNeedsLayout];
        }
    }];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"Photo Cell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier forIndexPath:indexPath];
    
    Photo *photo = [self.fetchedResultsController objectAtIndexPath:indexPath];
    cell.textLabel.text = photo.title;
    
    if(cell.imageView.image) cell.imageView.image = nil;
    NSURL *thumbnailURL = [NSURL URLWithString:photo.thumbnailURL];
    
    [self getThumbnailForCell:cell usingURL:thumbnailURL];
    
    return cell;
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    CoreDataPhotoViewController *cdpvc = segue.destinationViewController;
    NSIndexPath *indexPath = [self.tableView indexPathForSelectedRow];
    Photo *photo = [self.fetchedResultsController objectAtIndexPath:indexPath];
    
    cdpvc.title = photo.title;
    cdpvc.isOnVacation = YES;
    cdpvc.document = self.document;
    cdpvc.vacationPhoto = photo;
}


@end
