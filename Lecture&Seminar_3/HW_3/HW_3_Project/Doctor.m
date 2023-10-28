#import "Doctor.h"

@implementation Doctor
-(void)prescribeMedication{
    NSLog(@"Доктор назначает пилюлю");
    [self.delegate takeMedication];
}
@end
