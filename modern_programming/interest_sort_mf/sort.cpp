#include "sort.h"

void interestSort(int a[], int n) {
    int znach1, znach2;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if ((j % 2 == 0) && (a[j] >= a[j - 1])) {
                znach1 = a[j - 1];
                a[j - 1] = a[j];
                a[j] = znach1;
            }
            if ((j % 2 != 0) && (j != 1) && (a[j] <= a[j - 1])) {
                znach2 = a[j - 1];
                a[j - 1] = a[j];
                a[j] = znach2;
            }
        }
    }
}
