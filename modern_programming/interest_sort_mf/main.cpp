#include <iostream>
#include "constants.h"
#include "input.h"
#include "sort.h"
#include "output.h"

int a[N];

int main() {
    int n;
    inputArray(a, n);
    interestSort(a, n);
    printArray(a, n);
    return 0;
}
