#include <cmath>
#include <iostream>

void cinArray(int* arr, int size, int index, int saveValue,int flag){
    if(flag != 3){
        for (index = 0; index < size; index++){
            if(flag = 2){
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
    int size2 = 20;
    int size3 = 10;
    int* array1,* array2,* array3;
    array1 = new int[size1];
    array2 = new int[size2];
    array3 = new int[size3];
    int saveValue, index;
    
    
    const int flag1 = 1, flag2 = 2, flag3 = 3;

    cinArray(array1, size1, index, saveValue, flag1);
    cinArray(array2, size2, index, saveValue, flag2);
    cinArray(array3, size3, index, saveValue, flag3);

    delete[] array1, array2, array3;    
    return 0;
}
