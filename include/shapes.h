#include <iostream>
#include <math.h>
#include <string>

struct BoundingBoxDimensions{
    double width = 0;
    double height = 0;
};

class Shape{
public:
    virtual double area() = 0;  // возвращает площадь конкретной фигуры;
    virtual BoundingBoxDimensions dimensions() = 0; //размеры описывающего прямоугольника;
    virtual std::string type() = 0; // название конкретного типа
};

class Circle: public Shape{
    double radious;
public:
    Circle(double r);
    double area() override;
    BoundingBoxDimensions dimensions() override;
    std::string type();
};

class Rectangle:public Shape{
    double width, height;
public:
    Rectangle(double w, double h);
    double area() override;
    BoundingBoxDimensions dimensions() override;
    std::string type();
};

class Triangle: public Shape{
    double a, b, c, p;
public:
    Triangle(double _a, double _b, double _c);
    double area() override;
    BoundingBoxDimensions dimensions() override;
    std::string type();
};
