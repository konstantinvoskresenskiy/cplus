#include <random>
#include "array_generator.h"

void random_arr(int* &out, int sz, int max_el_size) {
    out = new int[sz];
    std::mt19937 rnd(time(NULL));
    for (int i = 0; i < sz; i++) {
        out[i] = rnd() % max_el_size;
    }
}
