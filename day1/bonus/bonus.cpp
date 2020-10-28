#include <iostream>

int main(){
    int min=1;
    int max=128;
    int value;

    do {
        std::cout<<"Enter value between " << min << " and " << max <<": ";
        std::cin>>value;
    } while (value < min || value > max);

    for(int i=0; i<7;i++){
    
        int guess = min + (max-min)/2;
        std::cout<<"Is the value larger than "<<guess<<"? ";

        if(value>guess){
            std::cout<<"Yes!\n";
            min=guess;
            if(min==127){
                std::cout << "Then the number must be 128!\n";
                break;
            }
        } else if (value<guess) {
            std::cout <<"No!\n";
            max=guess;
        } else {
            std::cout << "No, " << guess << " is the correct number!\n";
            break;
        }

        if(i==6)
            std::cout<<"Something went wrong...\n";
    }
}