// Created by alicee on 02.10.2023.
//main.cpp
#include <iomanip>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
typedef long long ll;
typedef std::vector<int> vec;

//Consts
#define PI 3.1415926535897932384626433832795l
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// FUNC DECLARATION
void merge_rec(std::vector<int> &v, int left, int right, int m);
void rnd_v(std::vector<int> &out, int sz, int max_el_size);
std::vector<int> inp(int vec_size);
void out(std::vector<int> &v);
void merger(vec &v, int left, int middle, int right);

void rnd_v(std::vector<int> &out, int sz, int max_el_size) { // max_el_size = 1eX - максимальная длина элемента
    std::mt19937 rnd(time(NULL));
    for (int i = 0; i < sz; i++) {
        out.push_back(rnd() % max_el_size);
    }
}

std::vector<int> inp(int vec_size) {
    std::vector<int> v(vec_size);
    for (int i = 0; i < vec_size; i++) {
        std::cin >> v[i];
    }
    return v;
}

void out(std::vector<int> &v) {
    for (auto i: v) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

void insertionSort(vec &v,int left, int right){
    vec arr;
    for(int k = left;k < right + 1;k++){
        arr.push_back(v[k]);
    }
    int n = arr.size();
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for(int k = 0;k<n;k++){
        v[left+k] = arr[k];
    }
}

// MAIN PART
void merger(vec &v, int left, int middle, int right) {
    // arr1 & arr2 - creation (split V in half)
    int arr1_size, arr2_size;
    arr1_size = middle - left + 1;
    arr2_size = right - middle;
    vec arr1(arr1_size + 1);
    vec arr2(arr2_size + 1);
    arr1[arr1_size] = INF;
    arr2[arr2_size] = INF;
    // arr1 & arr2 forming
    for (int i = 0; i < arr1_size; i++) {
        arr1[i] = v[left + i];
    }
    for (int i = 0; i < arr2_size; i++) {
        arr2[i] = v[middle + i + 1];
    }

    //MERGING BACK
    int k = left, i = 0, j = 0; // k - main, i - arr1,j - arr2
    // k = left - ОБЯЗАТЕЛЬНО, ТК МЫ МАССИВ ДЕЛИМ ПРИ РЕКУРСИИ И РАБОТАЕМ ТОЛЬКО С ПОЛОВИНОЙ
    while (i < arr1_size && j < arr2_size) {
        if (arr1[i] < arr2[j]) {
            v[k] = arr1[i];
            i++;
        } else {
            v[k] = arr2[j];
            j++;
        }
        k++; // next main_v elem
    }
    while (i < arr1_size) {
        v[k] = arr1[i];
        i++;
        k++;
    }
    while (j < arr2_size) {
        v[k] = arr2[j];
        j++;
        k++;
    }
}

void merge_rec(vec &v, int left, int right, int m) {
    if (left < right) {
        if(right - left <= m){
            insertionSort(v,left,right);
        }else{
            int middle = (left + right) / 2;
            merge_rec(v, left, middle, m);
            merge_rec(v, middle + 1, right, m);
            merger(v, left, middle, right);
        }
    }
}

int main() {
    // CPP SPEEDUP
    setlocale(LC_ALL, "Russian");
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    
    // Демонстрация работы гибридной сортировки
    std::vector<int> numbers;
    int size, max_value, threshold;
    
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    std::cout << "Введите максимальное значение элемента: ";
    std::cin >> max_value;
    std::cout << "Введите порог для сортировки вставками: ";
    std::cin >> threshold;
    
    // Генерация случайного массива
    rnd_v(numbers, size, max_value);
    
    std::cout << "Исходный массив:" << std::endl;
    out(numbers);
    
    // Сортировка
    merge_rec(numbers, 0, numbers.size() - 1, threshold);
    
    std::cout << "Отсортированный массив:" << std::endl;
    out(numbers);
    
    return 0;
}