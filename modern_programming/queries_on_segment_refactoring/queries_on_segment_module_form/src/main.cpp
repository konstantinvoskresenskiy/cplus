#include "array_io.h"
#include "array_generator.h"
#include "array_max.h"
#include "array_prefix_sum.h"
#include "counting_sort.h"
#include "interval_queries.h"
#include <iostream>

int main() {
    int* arr = nullptr;
    int size, max_el;

    std::cout << "Введите размерность и максимальный элемент случайного вектора: ";
    std::cin >> size >> max_el;

    random_arr(arr, size, max_el);
    std::cout << "Сгенерированный вектор: ";
    arr_out(arr, size);

    int* sorted = count_sort(arr, size);
    int sorted_size = arr_max(arr, size) + 1;
    std::cout << "Отсортированный вектор(вектор частот): ";
    arr_out(sorted, sorted_size);

    std::cout << "Вектор префиксных сумм: ";
    prefix_sum_arr(sorted, sorted_size);
    arr_out(sorted, sorted_size);

    int queries;
    std::cout << "Введите количество будущих запросов: ";
    std::cin >> queries;
    std::cout << std::endl;
    
    for (int i = 0; i < queries; i++) {
        std::cout << "Введите левую и правую границы через пробел: ";
        int left, right;
        std::cin >> left >> right;
        std::cout << "Количество чисел в промежутке [l;r] равно: " 
                  << interval(sorted, left, right) << std::endl;
    }

    delete[] arr;
    delete[] sorted;

    return 0;
}
