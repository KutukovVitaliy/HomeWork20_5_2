#include <iostream>
#include <ctime>
#include <fstream>

int main() {
    std::ofstream TxtFile("../pic.txt");
    int Length, Width;
    std::srand(std::time(nullptr));
    std::cout << "Input the width: ";
    std::cin >> Width;
    std::cout << "Input the length: ";
    std::cin >> Length;
    for(int i=0; i<Length; i++){
        for(int j=0; j<Width; j++){
            TxtFile << std::rand() % 2;
        }
        TxtFile << std::endl;
    }
    TxtFile.close();
    return 0;
}
