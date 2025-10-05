#include <iostream>
#include <vector>
#include <string>
std::vector<int> data = {1,2,3,4,5};
std::vector<std::string> v(5);//вектор из 5 пустых строк
int main() {
    int x;
    std::vector<int> data;
    while (std::cin >> x) {  // читаем числа, пока не закончится ввод
        data.push_back(x);  // добавляем очередное число в вектор
    }

    while (!data.empty() && data.back() == 0) {
        // Пока вектор не пуст и последний элемент равен нулю
        data.pop_back();  // удаляем этот нулевой элемент
    }
    size_t m, n;
    std::cin >> m >> n;  // число строк и столбцов

    // создаём матрицу matrix из m строк, каждая из которых — вектор из n нулей
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));

    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // напечатаем матрицу, выводя элементы через табуляцию
    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::string s = "Some string functions";

    // вставка подстроки
    s.insert(5, "std::");
    std::cout << s << "\n";  // Some std::string functions

    // замена указанного диапазона на новую подстроку
    s.replace(0, 4, "Special");
    std::cout << s << "\n";  // Special std::string functions

    // удаление подстроки
    s.erase(8, 5);  // Special string functions
}
