#include <iostream>

using namespace std;

struct Matrix2x2 {
    long long a, b, c, d;
    
    Matrix2x2(long long a, long long b, long long c, long long d) 
        : a(a), b(b), c(c), d(d) {}
};

// Умножение двух матриц 2x2
Matrix2x2 multiply(const Matrix2x2& A, const Matrix2x2& B) {
    return Matrix2x2(
        A.a * B.a + A.b * B.c,
        A.a * B.b + A.b * B.d,
        A.c * B.a + A.d * B.c,
        A.c * B.b + A.d * B.d
    );
}

// Возведение матрицы в степень
Matrix2x2 matrixPower(const Matrix2x2& M, int power) {
    if (power == 0) {
        return Matrix2x2(1, 0, 0, 1); // Единичная матрица
    }
    if (power == 1) {
        return M;
    }
    
    Matrix2x2 halfPower = matrixPower(M, power / 2);
    Matrix2x2 temp = multiply(halfPower, halfPower);
    
    if (power % 2 == 0) {
        return temp;
    } else {
        return multiply(temp, M);
    }
}

// Вычисление n-го числа Фибоначчи
long long fibonacci(int n) {
    if (n == 0) return 0;
    
    Matrix2x2 baseMatrix(1, 1, 1, 0);
    Matrix2x2 resultMatrix = matrixPower(baseMatrix, n - 1);
    
    return resultMatrix.a;
}

int main() {
    int n;
    cout << "Введите номер числа Фибоначчи: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Номер должен быть неотрицательным!" << endl;
        return 1;
    }
    
    long long result = fibonacci(n);
    cout << "F(" << n << ") = " << result << endl;
    
    return 0;
}