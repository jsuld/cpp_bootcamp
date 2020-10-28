#include "ring_buffer.h"

int main(){

    ring_buffer *ring = new ring_buffer(7);

    std::cout << "Writing: 1 2 3"<<std::endl;

    ring->Write(1);
    ring->Write(2);
    ring->Write(3);

    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;

    std::cout << "Writing: 4 5 6"<<std::endl;

    ring->Write(4);
    ring->Write(5);
    ring->Write(6);

    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;

    std::cout << "Writing: 7 8 9"<<std::endl;

    ring->Write(7);
    ring->Write(8);
    ring->Write(9);

    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
    std::cout << "Read: " << ring->Read() << std::endl;
   
    delete ring;

    return 0;
}