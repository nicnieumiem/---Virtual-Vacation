//
//  Photo+Flickr.h
//  Virtual Vacation
//

#import "Photo.h"

@interface Photo (Flickr)
+(Photo *)photoWithDictionaryInfo:(NSDictionary *)flickrInfo inManagedObjectContext:(NSManagedObjectContext *)context;
+(Photo *)photoWithDictionaryInfo:(NSDictionary *)flickrInfo existsInManagedObjectContext:(NSManagedObjectContext *)context;
@end
