#include <iostream>
#include "output.h"

void printArray(int a[], int n) {
    std::cout << "Массив после обработки:";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ' ';
    }
}
