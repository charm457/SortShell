#include <cmath>
#include <iostream>

void generateArray(int *array, int index){
    
    for (index = 0; index < 20; index++){
        array[index] = rand() % 20;
        std::cout << "Вывод элемента: "<<array[index];
        std::cout << ' ';
    }
}

void processingArray(int *array, int index, int saveValue){
    std::cout << std::endl;
    for (index = 0; index < 10; index++){
        saveValue = array[index];
        array[index] = array[19 - index];
        array[19 - index] = saveValue;
    }
}

void changinArray(int *array, int index){
    for (index= 0; index < 20; index++){
        std::cout << array[index];
        std::cout << ' ';
    }

}
int main(){
    int size = 20;
    int* array = new int[size];

    int index, saveValue;
    generateArray(array, index);
    processingArray(array, index, saveValue);
    changinArray(array, index);

    return 0;
}
