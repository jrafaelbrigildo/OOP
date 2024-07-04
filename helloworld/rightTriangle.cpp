#include <iostream>

void rightTriangle(int rows){
    for(int i = 0; i <= rows; ++i){
        for(int j = 1; j <= i; ++j){
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void rightTriangleNum(int rows){
    for(int i = 0; i <= rows; ++i){
        for(int j = 1; j <= i; ++j){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int rowNum;
    std::cout << "Input number of rows: ";
    std::cin >> rowNum;
    rightTriangle(rowNum);
    rightTriangleNum(rowNum);
    
    return 0;
}