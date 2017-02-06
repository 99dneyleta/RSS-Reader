//
//  ViewController.h
//  RSS Parser
//
//  Created by Roman on 1/31/17.
//  Copyright © 2017 Roman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UITableViewController <NSXMLParserDelegate>;
@property (strong, nonatomic) IBOutlet UITableView *tableView;


@end

