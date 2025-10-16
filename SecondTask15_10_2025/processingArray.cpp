#include <cmath>
#include <iostream>

#include "processingArray.hpp"

void processingArray(int *array){
    int saveValue;
    for (int index = 0; index < 10; index++){
        saveValue = array[index];
        array[index] = array[19 - index];
        array[19 - index] = saveValue;
    }
}