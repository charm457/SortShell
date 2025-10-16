#include <cmath>
#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include "changinArray.hpp"
#include "generateArray.hpp"
#include "processingArray.hpp"

int main(){
    int size = 20;
    int* array = new int[size];
    
    srand(time(0));

    
    generateArray(array);
    processingArray(array);
    changinArray(array);
    
    delete[] array;
    return 0;
}