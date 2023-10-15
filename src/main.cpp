#include <iostream>
#include "shapes.h"

void printParam(Shape *shape){
    std::cout << "Type: " << shape->type() << std::endl;
    std::cout << "Square: " << shape->area() << std::endl;
    std::cout << "Width: " << shape->dimensions().width << std::endl;
    std::cout << "Height: " << shape->dimensions().height << std::endl;
    std::cout << std::endl;
}

int main(int, char**){
    std::cout << "Hello, from 29_2_shapes!\n\n";
    
    Circle c(5);
    printParam(&c);

    Rectangle r(2,4);
    printParam(&r);
    
    Triangle t(3,4,5);
    printParam(&t);

    return 0;
};
