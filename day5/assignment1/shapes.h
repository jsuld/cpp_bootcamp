#ifndef SHAPES_H
#define SHAPES_H
#include<iostream>
#include<cmath>

class Shape {
public:
    Shape() = default;
    Shape(const int &_p, const int &_a):Perimiter(_p),Area(_a){}
    virtual ~Shape() = 0;
    bool operator <(const Shape &s);
    bool operator >(const Shape &s);
    bool operator ==(const Shape &s);
    void print() {
        std::cout << Perimiter << " " << Area << std::endl;
    }
private:
    int Perimiter = 0, Area = 0;
};

class Circle : public Shape {
public:
    ~Circle() = default;
    Circle(const int &radius):Shape((2*radius*3),std::pow(radius,2)){}
};

class Rectangle : public Shape {
  public:
    ~Rectangle() = default;
    Rectangle(const int &height,const int &width):Shape((2*height)+(2*width),(height*width)){}
};

class Triangle : public Shape {
  public:
    ~Triangle() = default;
    Triangle(const int &width,const int &height):Shape(3*width,height*width/2){}
};

template<typename T1, class T2>
void compare(T1 &a, T2 &b)
{
    if (a<b) {
        std::cout << "'a' is smaller then 'b'\n";
    } else if (a>b) {
        std::cout << "'a' is larger then 'b'\n";
    } else if (a==b) {
        std::cout << "'a' is equal to 'b'\n";
    } else {
        std::cout << "Can't compare for some reason...\n";
    }
}
#endif // SHAPES_H