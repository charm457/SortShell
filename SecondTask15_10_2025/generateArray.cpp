#include <cmath>
#include <cstdlib> // for rand
#include <iostream>

#include "generateArray.hpp"

void generateArray(int *array){
    for (int index = 0; index < 20; index++){
        array[index] = rand() % 20;
        std::cout << array[index]; // вывод всех элементов массива
        std::cout << ' ';
    }

    std::cout << std::endl;
}