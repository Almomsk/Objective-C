#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Robot : NSObject
@property(nonatomic, assign) NSInteger x;
@property(nonatomic, assign) NSInteger y;
-(instancetype)init;
-(void)run:(NSString *)direction;
@end

NS_ASSUME_NONNULL_END
