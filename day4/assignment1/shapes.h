#ifndef SHAPES_H
#define SHAPES_H
#include<iostream>

class Shape {
  public:
    Shape() = default;
    virtual ~Shape() = default;
    virtual int GetArea() = 0;
    virtual int GetPerimiter() = 0;
    bool operator <(Shape &s);
    bool operator >(Shape &s);
    bool operator ==(Shape &s);
};

class Circle : public Shape {
  public:
    ~Circle() = default;
    Circle(int radius);
    int GetArea();
    int GetPerimiter();
  private:
    int area=0, perimiter=0;  
};

class Rectangle : public Shape {
  public:
    ~Rectangle() = default;
    Rectangle(int height, int width);
    int GetArea();
    int GetPerimiter();
  private:
    int area=0, perimiter=0;  
};

class Triangle : public Shape {
  public:
    ~Triangle() = default;
    Triangle(int width);
    int GetArea();
    int GetPerimiter();
  private:
    int area=0, perimiter=0;  
};

#endif // SHAPES_H