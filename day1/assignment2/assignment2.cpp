#include <iostream>

int main() {
    int key;
    std::string cipher;
    do {
        std::cout << "Enter key between 0 and 26: ";
        std::cin >> key;
    } while (key < 0 || key > 26);

    std::cout << "\nEnter cipher text in capital letters (A-Z): "; 
    std::cin >> cipher;
    
    std::cout << "\nDecryption: ";
    for(char letter : cipher){
        if(letter < 'A' || letter > 'Z'){
            std::cout << "ERROR That's not a capital letter between A and Z";
            break;
        }
        char decipher_char = letter-key;
        if(decipher_char < 'A')
            decipher_char = 'Z'-('A'-decipher_char-1);
        std::cout << decipher_char;
    }
    std::cout << std::endl;
}