#include <iostream>

using namespace std;

namespace ArrayUtils{
    void arr_input(int* const arr,const int size);
    void arr_output(int* const arr,const int size);
    void bubble_sort_no_swap(int* const arr,const int size);
    int getArraySize();
}

int main(){
    std::cout << "Введите размер массива:";

    const int array_size = ArrayUtils::getArraySize();
    int* array = new int[array_size];
    
    std::cout << "Введите элементы массива:";

    ArrayUtils::arr_input(array,array_size);
    ArrayUtils::bubble_sort_no_swap(array,array_size);

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

void ArrayUtils::bubble_sort_no_swap(int* const arr,const int size){
    bool is_swapped;
    int i = 0;
    do {
        is_swapped = false;
        for (int j = 0;j < size - i - 1;j++) {
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_swapped = true;
            }
        }
        i++;
    } while (is_swapped);
}

int ArrayUtils::getArraySize(){
    int arr_size;
    std::cin >> arr_size;
    return arr_size;
}

