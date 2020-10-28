#include <iostream>

int main()
{
    size_t dimension_i=0;
    size_t dimension_j=0;
    size_t dimension_k=0;
    size_t input_number = -1;

    do {
        std::cout << "Enter max value, must be positive number: ";
        std::cin >> input_number;
    } while (input_number<1);

    std::cout << "Creating an array of dimensions i,j,k:\n";

    std::cout << "Enter dimension i: ";
    std::cin >> dimension_i;
    std::cout << "Enter dimension j: ";
    std::cin >> dimension_j;
    std::cout << "Enter dimension k: ";
    std::cin >> dimension_k;

    int ***arr3D = new int**[dimension_i];
    
    for(int i =0; i<dimension_i; i++){
        arr3D[i] = new int*[dimension_j];
        for(int j =0; j<dimension_j; j++){
            arr3D[i][j] = new int[dimension_k];
            for(int k = 0; k<dimension_k;k++){
                *(*(*(arr3D+i)+j)+k) = std::rand() % input_number;
            }
        }
    }

    // Print array
    for(size_t k=0;k<dimension_k;k++){
        std::cout<<"k = "<<k<<std::endl;
        for(size_t j=0;j<dimension_j;j++){
            for(size_t i=0;i<dimension_i;i++){
                std::cout << arr3D[i][j][k] << "\t";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    // Delete pointers
    for(int i =0; i<dimension_i; i++){
        for(int j =0; j<dimension_j; j++){
            delete [] arr3D[i][j];
        }
        delete [] arr3D[i];
    }

    return 0;
}