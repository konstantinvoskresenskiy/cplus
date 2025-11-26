 #include <iostream>

using namespace std;

namespace ArrayUtils{
    void arr_input(int* const arr,const int size);
    void arr_output(int* const arr,const int size);
    int getArraySize();
    void insertion_sort(int* const arr,const int size);
}

int main(){
    std::cout << "Введите размер массива:";

    const int array_size = ArrayUtils::getArraySize();
    int* array = new int[array_size];
    
    std::cout << "Введите элементы массива:";

    ArrayUtils::arr_input(array,array_size);
    ArrayUtils::insertion_sort(array,array_size);

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

void ArrayUtils::insertion_sort(int* const arr,const int size){
    for(int i = 1; i < size;i++){
        int j = i;
        int x = arr[j];
        while (j > 0 && x < arr[j - 1]){
            arr[j] = arr[j - 1];
            j --;
        }
        arr[j] = x;
    }
}

