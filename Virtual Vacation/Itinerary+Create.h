//
//  Itinerary+Create.h
//  Virtual Vacation
//


#import "Itinerary.h"

@interface Itinerary (Create)
+(Itinerary *)itineraryInManagedObjectContext:(NSManagedObjectContext *)context;
@end
