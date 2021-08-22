#include <iostream>
#include <ctime>
#include <fstream>

int main() {
    std::ofstream txtFile("../pic.txt");
     if(!txtFile.is_open()){
         std::cout << "Can't open file pic.txt" << std::endl;
         return -1;
     }
    int length, width;
    std::srand(std::time(nullptr));
    std::cout << "Input the width: ";
    std::cin >> width;
    std::cout << "Input the length: ";
    std::cin >> length;
    for(int i=0; i < length; i++){
        for(int j=0; j < width; j++){
            txtFile << std::rand() % 2;
        }
        txtFile << std::endl;
    }
    txtFile.close();
    return 0;
}
