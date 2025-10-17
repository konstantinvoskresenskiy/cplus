#include "counting_sort.h"
#include "array_max.h"
#include "array_prefix_sum.h"

int* count_sort(int* arr, int size) {
    int max_val = arr_max(arr, size);
    int* out = new int[max_val + 1]();
    for (int i = 0; i < size; i++) {
        out[arr[i]] += 1;
    }
    return out;
}
