//
//  ImageFetcher.h
//  FastMapPlaces
//


#import <Foundation/Foundation.h>

typedef void (^ImageFetchingCompletedWithFinshedBlock)(UIImage *image, NSData *imageData);

@interface ImageFetcher : NSObject
+(ImageFetcher *)sharedInstance;
-(void)getImageUsingURL:(NSURL *)url completed:(ImageFetchingCompletedWithFinshedBlock)completedBlock;
-(void)getImageUsingURL:(NSURL *)url usingCacheForKey:(NSString *)key completed:(ImageFetchingCompletedWithFinshedBlock)completedBlock;
@end
