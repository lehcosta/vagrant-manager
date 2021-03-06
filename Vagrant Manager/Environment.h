@interface Environment : NSObject

@property (strong, nonatomic) NSString *aboutURL;
@property (strong, nonatomic) NSString *githubURL;
@property (strong, nonatomic) NSDictionary *environments;
@property (strong, nonatomic) NSString *configurationName;

+ (Environment*)sharedInstance;

@end
