#include <iostream>
#include "ring_buffer.h"

int main(){

    ring_buffer *ring = new ring_buffer(7);

    ring->Write(1);
    ring->Write(2);
    ring->Write(3);

    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;

    ring->Write(4);
    ring->Write(5);
    ring->Write(6);

    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;

    ring->Write(7);
    ring->Write(8); // FUNKAR INTE!!!!!

    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
   
    delete ring;

    return 0;
}