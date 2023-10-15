#include "shapes.h"

Circle::Circle(double r): radious(r){};

double Circle::area() { return atan(1) * 4 * radious;}

BoundingBoxDimensions Circle::dimensions() {
    BoundingBoxDimensions bbd;
    bbd.width = bbd.height = 2 * radious;
    return bbd;
}

std::string Circle::type(){ return "Circle";};


Rectangle::Rectangle(double w, double h): width(w),height(h){};

double Rectangle::area() {return width * height;}

BoundingBoxDimensions Rectangle::dimensions() {
    BoundingBoxDimensions bbd;
    bbd.width = width;
    bbd.height = height;
    return bbd;
}

std::string Rectangle::type(){ return "Rectangle";}


Triangle::Triangle(double _a, double _b, double _c): a(_a), b(_b), c(_c){
    double p = (a + b + c)/2;
};

double Triangle::area(){return std::sqrt(p * (p - a) * (p - b) * (p - c));}

BoundingBoxDimensions Triangle::dimensions() {
    BoundingBoxDimensions bbd;
    double radious = a * b * c / (4 * std::sqrt(p*(p - a)*(p - b)*(p - c)));
    bbd.width = bbd.height = radious * 2;
    return bbd;
}

std::string Triangle::type(){ return "Triangle"; }





