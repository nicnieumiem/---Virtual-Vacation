//
//  Tag+Create.h
//  Virtual Vacation
//


#import "Tag.h"

@interface Tag (Create)
+(NSSet *)tagsFromString:(NSString *)tagsString inManagedObjectContext:(NSManagedObjectContext *)context;
@end
