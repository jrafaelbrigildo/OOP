#include <iostream>

void printPyramid(int rows){
    int space = rows - 1; //define the number of space

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < space; ++j){
            std::cout << " ";
        }
        for(int k = 0; k <= i * 2; ++k){
            std::cout << "*";
        }
        std::cout << std::endl;
        //decrease the number of space
        --space;
    } 
}
int main(){
    int rowNum;
    std::cout << "Input number of rows: ";
    std::cin >> rowNum;
    printPyramid(rowNum);
    return 0;
}