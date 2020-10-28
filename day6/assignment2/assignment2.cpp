#include "car_info.h"

int main(){

    uint16_t speed=200;
    uint16_t dist_front=500;
    uint16_t dist_rear=300;
    uint16_t dist_right=700;
    uint16_t dist_left=100;

    uint16_t car_info = Encode(speed,dist_front,dist_rear,dist_right,dist_left);
    DetectCrash(car_info);
    
    return 0;
}