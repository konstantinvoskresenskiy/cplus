#include <iostream>
#include <iomanip>
#include <math.h>
#include <random>

typedef long long ll;

void arr_in(int* &v, int n);
int arr_max(int* v, int size);
void arr_out(int* v, int size);
int* count_sort(int* v, int size);
int interval(int* v, int l, int r);
void prefix_sum_arr(int* v, int size);
void random_arr(int* &out, int sz, int max_el_size);

int main(){
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
        std::cout << "Количество чисел в промежутке [l;r] равно: " << interval(sorted, left, right) << std::endl;
    }

    delete[] arr;
    delete[] sorted;
    
    return 0;
}
void arr_in(int* &arr, int n) {
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}
int arr_max(int* arr, int size) {
    int n = -1;
    for (int i = 0; i < size; i++) {
        n = std::max(n, arr[i]);
    }
    return n;
}
void arr_out(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std :: cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int* count_sort(int* arr, int size) {
    int max_val = arr_max(arr, size);
    int* out = new int[max_val + 1]();
    for (int i = 0; i < size; i++) {
        out[arr[i]] += 1;
    }
    return out;
}
int interval(int* arr, int l, int r) {
    int left;
    if (l == 0) {
        left = 0;
    } else {
        left = arr[l-1];
    }
    int right = arr[r];
    return right - left;
}
void prefix_sum_arr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        if(i != 0) {
            arr[i] += arr[i-1];
        }
    }
}

void random_arr(int* &out, int sz, int max_el_size) {
    out = new int[sz];
    std::mt19937 rnd(time(NULL));
    for (int i = 0; i < sz; i++) {
        out[i] = rnd() % max_el_size;
    }
}

