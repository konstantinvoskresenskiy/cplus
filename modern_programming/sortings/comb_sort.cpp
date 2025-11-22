#include <iostream>

using namespace std;

namespace ArrayUtils{
    void arr_input(int* const arr,const int size);
    void arr_output(int* const arr,const int size);
    void comb_sort(int* const arr,const int size);
    int getArraySize();
}

int main(){
    std::cout << "Введите размер массива:";

    const int array_size = ArrayUtils::getArraySize();
    int* array = new int[array_size];
    
    std::cout << "Введите элементы массива:";

    ArrayUtils::arr_input(array,array_size);
    ArrayUtils::comb_sort(array,array_size);

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

void ArrayUtils::comb_sort(int* const arr,const int size){
    double factor = 1.25;
    int step = size - 1;
    bool is_swapped = true;
    while(step > 1 || is_swapped) {
        if (step > 1) {
            step /= factor;
            if (step < 1) {
                step = 1;
            }
        }
        is_swapped = false;
        for (int i = 0;i + step < size;i++) {
            if (arr[i] > arr[i + step]){
                int temp = arr[i];
                arr[i] = arr[i + step];
                arr[i + step] = temp;
                is_swapped = true;
            }
        }
    } 
}

int ArrayUtils::getArraySize(){
    int arr_size;
    std::cin >> arr_size;
    return arr_size;
}

