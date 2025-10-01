#include <iostream>
#include "input.h"
#include "constants.h"

void inputArray(int a[], int& n) {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
}
