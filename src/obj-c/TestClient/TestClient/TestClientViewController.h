//
//  OTOplugTestClientViewController.h
//  OTOplugTransmitterTestClient
//
//  Created by 上原 昭宏 on 11/06/03.
//  Copyright 2011 REINFORCE Lab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWMSocket.h"

@interface TestClientViewController : UIViewController<SWMSocket> {
    IBOutlet UITextView *textView_;
	IBOutlet UILabel *statusLabelView_;
}
-(IBAction)clearButtonTouchUpInside:(id)sender;
@end
