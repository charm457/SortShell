#include <cmath>
#include <iostream>

void cinArray(int* arr, int size, int index, int saveValue,int flag){
    if(flag != 3){
        for (index = 0; index < size; index++){
            if(flag = 1){
                arr[index] = rand() % 20;
            }
            std::cout << "Вывод index элемента: " <<arr[index];
            std::cout << ' ';
        }
    }else{
        std::cout << " Перевод на новую строку " << std::endl;
        for (index = 0; index < 10; index++){
            saveValue = arr[index];
            arr[index] = arr[19 - index];
            arr[19 - index] = saveValue;
        }
    }
}


int main(){
    int size1 = 20;
    int size2 = 10;
    int* array1,* array2,* array3;
    array1 = new int[size1];
    array2 = new int[size1];
    array3 = new int[size2];

    int saveValue, index;
    
    const int flag0 = 0, flag1 = 1;

    

    std::cout << " Перевод на новую строку " << std::endl;
    

    delete[] array1, array2, array3;    
    return 0;
}
