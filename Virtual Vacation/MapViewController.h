//
//  MapViewController.h
//  FastMapPlaces
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapViewController : UIViewController
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (nonatomic,strong) NSArray *annotations; //of id <MKAnnotation>
@property (nonatomic, weak) UIActivityIndicatorView *activityIndicator;
@end

