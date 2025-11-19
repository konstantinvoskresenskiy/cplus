#include <iostream>

using namespace std;

namespace ArrayUtils{
    void arr_input(int* const arr,const int size);
    void arr_output(int* const arr,const int size);
    void shaker_sort(int* const arr,const int size);
    int getArraySize();
}

int main(){
    std::cout << "Введите размер массива:";

    const int array_size = ArrayUtils::getArraySize();
    int* array = new int[array_size];
    
    std::cout << "Введите элементы массива:";

    ArrayUtils::arr_input(array,array_size);
    ArrayUtils::shaker_sort(array,array_size);

    std::cout << "Отсортированный массив:";

    ArrayUtils::arr_output(array,array_size);

    delete[] array;

    return 0;
}

void ArrayUtils::arr_input(int* const arr,const int size){
for (int i = 0;i < size;i ++){
    std::cin >> arr[i];
}
}

void  ArrayUtils::arr_output(int* const arr,const int size){
    for (int i = 0;i < size;i ++){
        std::cout << " " << arr[i];
    }
}

int ArrayUtils::getArraySize(){
    int arr_size;
    std::cin >> arr_size;
    return arr_size;
}

void ArrayUtils::shaker_sort(int* const arr,const int size){
    int begin = 0;
    int end = size - 1;
    bool is_swapped = true;

    while (is_swapped){
        is_swapped = false;
        for (int i = begin;i < end;i++) {
            if (arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                is_swapped = true;
            }
        }
        end--;

        if (!is_swapped) break;

        is_swapped = false;

        for (int i = end;i > begin;i--){
            if (arr[i] < arr[i - 1]){
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                is_swapped =true;
            }
        }
        begin++;
    } 
}
