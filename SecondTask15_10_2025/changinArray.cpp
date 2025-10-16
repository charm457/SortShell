#include <cmath>
#include <iostream>

#include "changinArray.hpp"

void changinArray(int *array){
    for (int index = 0; index < 20; index++){
        std::cout << array[index];
        std::cout << ' ';
    }
    std::cout << std::endl;
}