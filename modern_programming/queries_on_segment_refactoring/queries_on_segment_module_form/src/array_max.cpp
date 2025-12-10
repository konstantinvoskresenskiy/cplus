#include <algorithm>
#include "array_max.h"
int arr_max(int* arr, int size) {
    int n = -1;
    for (int i = 0; i < size; i++) {
        n = std::max(n, arr[i]);
    }
    return n;
}
