#include "rectangle.h"
#include <iostream>

using namespace std;
double Rectangle::getArea(){
    double area = width*height;
    return area;
}
double Rectangle::getCircum(){
    double circum = 2*(width + height);
    return circum;
}
void Rectangle::setHeight(double newHeight){
    height = newHeight;
}
void Rectangle::setWidth(double newWidth){
    width = newWidth;
}
