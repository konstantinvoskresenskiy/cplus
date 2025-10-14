#include <iostream>
#include "input.h"
#include "constants.h"

void inputArray(int a[], int& n) {
    std::cout << "Введите размер массива:";
    std::cin >> n;
    std::cout << "Введите элементы массива:";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
}
