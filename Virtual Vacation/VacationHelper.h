//
//  VacationHelper.h
//  Virtual Vacation
//

#import <Foundation/Foundation.h>

#define MAX_VACATION_FILES 50

typedef void (^completion_block_t)(UIManagedDocument *vacation);
typedef void (^vacation_list_completion_block_t)(BOOL success, NSArray *vacationFiles);
typedef void (^vacation_file_saved_block_t)(BOOL success);
typedef void (^remove_vacation_completion_handler_t)(BOOL success);

@interface VacationHelper : NSObject

+(void)openVacation:(NSString *)vacationName withExtension:(NSString *)extension usingBlock:(completion_block_t)block;
+(void)getVacationsFilesWithExtension:(NSString *)extension usingBlock:(vacation_list_completion_block_t)block;
+(NSURL *)getVacationURL:(NSString *)vacationName withExtension:(NSString *)extension;
+(NSString *)getVacationNameFromURL:(NSURL *)url;
+(NSString *)getCurrentVacation;
+(NSArray *)getVacations;
+(void)removeVacation:(NSString *)vacation usingCompletionHandler:(remove_vacation_completion_handler_t)handler;

@end
