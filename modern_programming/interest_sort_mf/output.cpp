#include <iostream>
#include "output.h"

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " "<< std::endl;
    }
}
