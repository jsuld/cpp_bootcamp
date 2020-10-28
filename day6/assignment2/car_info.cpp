#include "car_info.h"

uint16_t Encode(const uint16_t &speed, const uint16_t &dist_front, const uint16_t &dist_rear, const uint16_t &dist_right, const uint16_t &dist_left){
    
    uint16_t encoded=0;
    field bit_data;

    bit_data.speed=speed/20;
    bit_data.front=dist_front/150;
    bit_data.rear=dist_rear/150;
    bit_data.right=dist_right/150;
    bit_data.left=dist_left/150;

    encoded+=bit_data.speed<<12;
    encoded+=bit_data.front<<9;
    encoded+=bit_data.rear<<6;
    encoded+=bit_data.right<<3;
    encoded+=bit_data.left;

    std::bitset<16> set_encoded(encoded);
    std::cout << "encoded " <<  set_encoded << std::endl;

    return encoded;
}

void DetectCrash(const uint16_t &car_info){
    
    uint16_t speed = 20*(car_info & 0b1111000000000000)>>12;
    uint16_t dist_front = 150*(car_info & 0b0000111000000000)>>9;    
    uint16_t dist_rear = 150*(car_info & 0b0000000111000000)>>6;
    uint16_t dist_right = 150*(car_info & 0b0000000000111000)>>3;
    uint16_t dist_left = 150*(car_info & 0b0000000000000111);

    std::cout << "speed: " << speed << " front: "  << dist_front << " rear: " 
        << dist_rear << " right: " << dist_right << " left: " << dist_left << std::endl;

    if (dist_front==0 && speed>0)
        std::cout << "Front crash\n";
    else if (dist_rear==0 && speed>0)
        std::cout << "Rear crash\n";        
    else if (dist_right==0 && speed>0)
        std::cout << "Right side crash\n";
    else if (dist_left==0 && speed>0)
        std::cout << "Left side crash\n";
    else
        std::cout << "No crash\n";
    
    return;
}