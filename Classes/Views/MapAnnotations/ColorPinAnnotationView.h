//
//  ColorPinAnnotationView.h
//  Created by Greg Combs on 11/30/11.
//
//  OpenStates by Sunlight Foundation, based on work at https://github.com/sunlightlabs/StatesLege
//
//  This work is licensed under the Creative Commons Attribution-NonCommercial 3.0 Unported License. 
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-nc/3.0/
//  or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
//
//

#import <MapKit/MapKit.h>
#import "GenericPinAnnotationView.h"

@interface ColorPinAnnotationView : GenericPinAnnotationView
+ (ColorPinAnnotationView*)pinViewWithAnnotation:(NSObject <MKAnnotation> *)annotation;
- (void)setPinColorWithAnnotation:(NSObject <MKAnnotation> *)anAnnotation;
@end

extern NSString* const ColorPinReuseIdentifier;
