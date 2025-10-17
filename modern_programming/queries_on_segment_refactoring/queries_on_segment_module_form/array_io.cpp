#include <iostream>
#include "array_io.h"

void arr_out(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void arr_in(int* &arr, int n) {
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}
