//
//  Place+Create.h
//  Virtual Vacation
//


#import "Place.h"

@interface Place (Create)
+(Place *)PlaceWithDescription:(NSString *)placeDescription inManagedObjectContext:(NSManagedObjectContext *)context;
@end
