#include <iostream>
#include <bitset>

void printWithMask(const uint16_t &inp){
    
    uint16_t mask_belts =   0b1111100000000000;
    uint16_t mask_windows = 0b0000011110000000;
    uint16_t mask_doors =   0b0000000001111000;
    uint16_t mask_lights =  0b0000000000000111;

    std::bitset<16> set_inp(inp);
    std::bitset<16> set_belts(mask_belts);
    std::bitset<16> set_windows(mask_windows);
    std::bitset<16> set_doors(mask_doors);
    std::bitset<16> set_lights(mask_lights);
 
    size_t belt_nr=0,window_nr=0,door_nr=0,light_nr=0;

    for(size_t i=0; i<16; i++){
        if(set_belts[i] == 1){
            belt_nr++;
            std::cout << "Belt number " << belt_nr << " is " << ((set_inp[i]==1) ? "used" : "not used") << std::endl;
        } else if(set_windows[i] == 1){
            window_nr++;
            std::cout << "Window number " << window_nr << " is " << ((set_inp[i]==1) ? "up" : "down") << std::endl;
        } else if(set_doors[i] == 1){
            door_nr++;
            std::cout << "Door number " << door_nr << " is " << ((set_inp[i]==1) ? "open" : "closed") << std::endl;
        } else if(set_lights[i] == 1){
            light_nr++;
            std::cout << "Light number " << light_nr << " is " << ((set_inp[i]==1) ? "on" : "off") << std::endl;
        }
    }
}

int main(){

    uint16_t status = 0b1011101001011011;
    printWithMask(status);

    return 0;
}