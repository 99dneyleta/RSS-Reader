//
//  DetailViewController.h
//  RSS Parser
//
//  Created by Roman on 2/2/17.
//  Copyright © 2017 Roman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
@property (strong, nonatomic) NSString *url;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
