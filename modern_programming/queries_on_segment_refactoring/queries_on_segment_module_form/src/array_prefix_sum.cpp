#include "array_prefix_sum.h"
void prefix_sum_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (i != 0) {
            arr[i] += arr[i - 1];
        }
    }
}
