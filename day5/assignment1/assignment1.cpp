#include "shapes.h"


int main(){

    Shape *circ1 = new Circle(5);
    Shape *circ2 =  new Circle(10);

    Shape *triang1 = new Triangle(2,3);
    Shape *triang2 = new Triangle(3,4);

    Shape *rectangle1 = new Rectangle(2,1);
    Shape *rectangle2 = new Rectangle(2,1);

    Shape *shapes [6] ={circ1,circ2,triang1,triang2,rectangle1,rectangle2};
 
    for (auto a : shapes) {
        for(auto b : shapes){
            std::cout << "Comparing 'a': ";
            a->print();
            std::cout << "With 'b': ";
            b->print();
            compare<>(*a,*b);
            std::cout << "\n------------\n";
        }
    }
   
    for(size_t i=0;i<6;i++)
        delete shapes[i];

    return 0;
}