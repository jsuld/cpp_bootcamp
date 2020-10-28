#ifndef CAR_INFO_H
#define CAR_INFO_H

#include<iostream>
#include<bitset>

struct field{
    unsigned speed:4;
    unsigned front:3;
    unsigned rear:3;
    unsigned right:3;
    unsigned left:3;
};

uint16_t Encode(const uint16_t &speed, const uint16_t &dist_front, const uint16_t &dist_rear, const uint16_t &dist_right, const uint16_t &dist_left);

void DetectCrash(const uint16_t &car_info);

#endif //CAR_INFO_H