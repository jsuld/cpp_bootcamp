#include "shapes.h"

int main(){

    Shape *circ1 = new Circle(5);
    Shape *circ2 =  new Circle(10);

    Shape *triang1 = new Triangle(2);
    Shape *triang2 = new Triangle(3);

    Shape *rectangle1 = new Rectangle(2,1);
    Shape *rectangle2 = new Rectangle(2,1);

    Shape *shapes [6] ={circ1,circ2,triang1,triang2,rectangle1,rectangle2};

    std::cout << "\n\n-----------------------------\n\n";
    std::cout << "circ1 < circ2: \n" << int(*circ1<*circ2) << std::endl;
    std::cout << "\n\n-----------------------------\n\n";
    std::cout << "circ1 > circ2: \n" << int(*circ1>*circ2) << std::endl;
    std::cout << "\n\n-----------------------------\n\n";
    std::cout << "circ1 < triang1: \n" << int(*circ1<*triang1) << std::endl;
    std::cout << "\n\n-----------------------------\n\n";
    std::cout << "circ1 > triang1: \n" << int(*circ1>*triang1) << std::endl;
    std::cout << "\n\n-----------------------------\n\n";
    std::cout << "triang1 < rectangle1: \n" << int(*triang1<*rectangle1) << std::endl;
    std::cout << "\n\n-----------------------------\n\n";
    std::cout << "circ1 > triang1: \n" << int(*circ1>*triang1) << std::endl;
    std::cout << "\n\n-----------------------------\n\n";
    std::cout << "rectangle2 == rectangle1: \n" << int(*rectangle2==*rectangle1) << std::endl;
    std::cout << "\n\n-----------------------------\n\n";
    std::cout << "circ2 == rectangle1: \n" << int(*circ2==*rectangle1) << std::endl;
    std::cout << "\n\n-----------------------------\n\n";


    for(size_t i=0;i<6;i++)
        delete shapes[i];

    return 0;
}