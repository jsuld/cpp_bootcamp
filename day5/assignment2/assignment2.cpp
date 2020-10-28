#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <functional>

class compare_1 { // simple comparison function
   public:
      bool operator()(const int x,const int y) { return y<x; } 
};

int main(){
    std::vector<int> vec;
    std::map<int,int,compare_1> count_map1;
    std::map<int,int> count_map2;
    std::map<int,int> count_map;
    std::unordered_map<int,int> count_umap;
    

    int arr[34] = {0};
    int num;

    for(size_t i = 0; i<10000;i++){
        num=std::rand() % 34;
        count_map[num]++;
        count_map1[num]++;
        count_umap[num]++;
        vec.push_back(num);
        arr[num]++;
        //int num=std::rand() % 33;
    }

    //for (int i =0; i<34; i++)
    int max;
    for(int i =0; i<34; i++){
        max=0;
        for(int j=0; j<34; j++ ){
         }
    }

    


    for (auto &e: count_map){
        std::cout << e.first << " " << e.second << std::endl;
    }

    std::cout << std::endl;

    for (auto &e: count_map1){
        std::cout << e.first << " " << e.second << std::endl;
    }

    std::cout << std::endl;

    for (auto &e: count_umap){
        std::cout << e.first << " " << e.second << std::endl;
    }

    //count_map.begin();

    return 0;

    for(size_t i =0; i<34; i++){
        std::cout << i << " occurs " <<std::count(vec.begin(), vec.end(),i) << " times" << std::endl;
        std::cout << "count_map[i] = " << count_map[i] << std::endl;
        std::cout << "arr[i] = " << arr[i] << std::endl;
    }


    return 0;   
}