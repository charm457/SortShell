#include <cmath> 
#include <iostream>

int main(){
    int size1 = 20;
    int size2 = 10;
    int* array1,* array2,* array3;
    array1 = new int[size1];
    array2 = new int[size1];
    array3 = new int[size2];

    int saveValue, index;
    
    const int flag0 = 0, flag1 = 1;

    for (index = 0; index < 20; index++){
        std::cout << "Вывод index элемента: " <<array1[index];
        std::cout << ' ';
    }

    for (index = 0; index < 20; index++){
        array2[index] = rand() % 20;
        std::cout << "Вывод index элемента: " <<array2[index];
        std::cout << ' ';
    }

    std::cout << " Перевод на новую строку " << std::endl;
    for (index = 0; index < 10; index++){
        saveValue = array3[index];
        array3[index] = array3[19 - index];
        array3[19 - index] = saveValue;
    }


    delete[] array1, array2, array3;    
    return 0;
}
