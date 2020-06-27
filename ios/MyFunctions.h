//
//  MyFunctions.h
//  VideoWatermark
//
//  Created by Nathan Shanko on 6/26/20.
//  Copyright © 2020 Facebook. All rights reserved.
//
//
//+ (NSURL *)fileURLWithPath:(NSString *)path; // Better to use fileURLWithPath:isDirectory: if you know if the path is a directory vs non-directory, as it saves an i/o.

@interface MyFunctions: NSObject

+(int) getWatermarkInt:(NSString *)positionString;

@end

@implementation MyFunctions

+(int) getWatermarkInt:(NSString *)positionString
{
    if([positionString isEqualToString:@"LEFT_TOP"]) return 1;
    else if([positionString isEqualToString:@"LEFT_BOTTOM"]) return 2;
    else if([positionString isEqualToString:@"RIGHT_TOP" ]) return 3;
    else if([positionString isEqualToString:@"RIGHT_BOTTOM" ]) return 4;
    else return 1;
}

@end
