#include <iostream>

int main()
{
    size_t dimension_i=8;
    size_t dimension_j=9;
    size_t dimension_k=11;
    int array[dimension_i][dimension_j][dimension_k];
    int input_number = -1;
    
    std::cout<<"Array dimension (i,j,k) = (8,9,11)" << std::endl;

    do {
        std::cout << "Enter max value, must be positive number: ";
        std::cin >> input_number;
    } while (input_number<1);
    
    // Fill array with random numbers
    for(size_t i=0;i<dimension_i;i++){
        for(size_t j=0;j<dimension_j;j++){
            for(size_t k=0;k<dimension_k;k++){
                array[i][j][k]=std::rand() % input_number;
            }
        }
    }
    
    // Print array
    for(size_t k=0;k<dimension_k;k++){
        std::cout<<"k = "<<k<<std::endl;
        for(size_t j=0;j<dimension_j;j++){
            for(size_t i=0;i<dimension_i;i++){
                std::cout << array[i][j][k] << "\t";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}