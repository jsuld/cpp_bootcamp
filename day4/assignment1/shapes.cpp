#include "shapes.h"

int Circle::GetArea() {
    return area;
}

int Triangle::GetArea() {
    return area;
}

int Rectangle::GetArea() {
    return area;
}

int Circle::GetPerimiter() {
    return perimiter;
}

int Triangle::GetPerimiter() {
    return perimiter;
}

int Rectangle::GetPerimiter() {
    return perimiter;
}

bool Shape::operator <(Shape& s) {
    std::cout << "Compare area " << this->GetArea() << " < " << s.GetArea() << "\n";
    std::cout << "Compare perimiter " << this->GetPerimiter() << " < " << s.GetPerimiter() << "\n";
    if(this->GetArea()<s.GetArea())
        return true;
    else if (this->GetArea()==s.GetArea() && this->GetPerimiter()<s.GetPerimiter())
        return true;
    else
        return false;
}

bool Shape::operator >(Shape& s) {
    std::cout << "Compare area " << this->GetArea() << " > " << s.GetArea() << "\n";
    std::cout << "Compare perimiter " << this->GetPerimiter() << " > " << s.GetPerimiter() << "\n";
    if(this->GetArea()>s.GetArea())
        return true;
    else if (this->GetArea()==s.GetArea() && this->GetPerimiter()>s.GetPerimiter())
        return true;
    else
        return false;
}

bool Shape::operator ==(Shape& s) {
    std::cout << "Compare area " << this->GetArea() << " == " << s.GetArea() << "\n";
    std::cout << "Compare perimiter " << this->GetPerimiter() << " == " << s.GetPerimiter() << "\n";
    
    if (this->GetArea()==s.GetArea() && this->GetPerimiter()==s.GetPerimiter())
        return true;
    
    return false;
}

Circle::Circle(int radius) {
    area=radius*radius*3;
    perimiter=2*radius*3;
}

Rectangle::Rectangle(int height, int width) {
    area=height*width;
    perimiter=2*width+2*height;
}

Triangle::Triangle(int width) {
    area=width*width/2;
    perimiter=3*width;
}