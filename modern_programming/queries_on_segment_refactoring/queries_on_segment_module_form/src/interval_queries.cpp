#include "interval_queries.h"

int interval(int* prefix_sum_arr, int l, int r) {
    int left;
    if (l == 0) {
        left = 0;
    } else {
        left = prefix_sum_arr[l - 1];
    }
    int right = prefix_sum_arr[r];
    return right - left;
}
