#include <iostream>
#include <iomanip>
#include <math.h>
#include <random>

typedef long long ll;

namespace ArrayUtils {
    void inputArray(int* &array, int size);
    int findMaxElement(int* array, int size);
    void printArray(int* array, int size);
    int* countingSort(int* array, int size);
    int countInRange(int* prefixSumArray, int leftBound, int rightBound);
    void prefixSum(int* array, int size);
    void randomArray(int* &outputArray, int size, int maxElementValue);
}

int main(){
    int* array = nullptr;
    int arraySize, maxElementValue;
    std::cout << "Введите размерность и максимальный элемент случайного вектора: ";
    std::cin >> arraySize >> maxElementValue;
    ArrayUtils::randomArray(array, arraySize, maxElementValue);
    std::cout << "Сгенерированный вектор: ";
    ArrayUtils::printArray(array, arraySize);
    
    int* frequencyArray = ArrayUtils::countingSort(array, arraySize);
    int frequencyArraySize = ArrayUtils::findMaxElement(array, arraySize) + 1;
    std::cout << "Отсортированный вектор(вектор частот): ";
    ArrayUtils::printArray(frequencyArray, frequencyArraySize);
    
    std::cout << "Вектор префиксных сумм: ";
    ArrayUtils::prefixSum(frequencyArray, frequencyArraySize);
    ArrayUtils::printArray(frequencyArray, frequencyArraySize);
    
    int queryCount;
    std::cout << "Введите количество будущих запросов: ";
    std::cin >> queryCount;
    std::cout << std::endl;
    
    for (int queryIndex = 0; queryIndex < queryCount; queryIndex++) {
        std::cout << "Введите левую и правую границы через пробел: ";
        int leftBound, rightBound;
        std::cin >> leftBound >> rightBound;
        std::cout << "Количество чисел в промежутке [l;r] равно: " 
                  << ArrayUtils::countInRange(frequencyArray, leftBound, rightBound) << std::endl;
    }

    delete[] array;
    delete[] frequencyArray;
    
    return 0;
}

void ArrayUtils::inputArray(int* &array, int size) {
    array = new int[size];
    for (int index = 0; index < size; index++) {
        std::cin >> array[index];
    }
}

int ArrayUtils::findMaxElement(int* array, int size) {
    int maxElement = -1;
    for (int index = 0; index < size; index++) {
        maxElement = std::max(maxElement, array[index]);
    }
    return maxElement;
}

void ArrayUtils::printArray(int* array, int size) {
    for (int index = 0; index < size; index++) {
        std::cout << array[index] << " ";
    }
    std::cout << std::endl;
}

int* ArrayUtils::countingSort(int* array, int size) {
    int maxValue = findMaxElement(array, size);
    int* frequencyArray = new int[maxValue + 1]();
    for (int index = 0; index < size; index++) {
        frequencyArray[array[index]] += 1;
    }
    return frequencyArray;
}

int ArrayUtils::countInRange(int* prefixSumArray, int leftBound, int rightBound) {
    int leftPrefixSum;
    if (leftBound == 0) {
        leftPrefixSum = 0;
    } else {
        leftPrefixSum = prefixSumArray[leftBound - 1];
    }
    int rightPrefixSum = prefixSumArray[rightBound];
    return rightPrefixSum - leftPrefixSum;
}

void ArrayUtils::prefixSum(int* array, int size) {
    for(int index = 0; index < size; index++) {
        if(index != 0) {
            array[index] += array[index - 1];
        }
    }
}

void ArrayUtils::randomArray(int* &outputArray, int size, int maxElementValue) {
    outputArray = new int[size];
    std::mt19937 randomGenerator(time(NULL));
    for (int index = 0; index < size; index++) {
        outputArray[index] = randomGenerator() % maxElementValue;
    }
}