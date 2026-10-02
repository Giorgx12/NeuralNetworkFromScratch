#include "Matrix.h"
#include <iostream>
int main(){
    Matrix mat(0, 1);
    mat(0, 1) = 7.5f;
    std::cout << mat.getRows() << mat.getCols() << mat(0, 1);
    return 0;
}