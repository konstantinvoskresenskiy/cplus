#include <iostream>
int main() {
    int n;
    std :: cin >> n;
    int a[n];
    if (n <= 2) {
   std :: cout << "При n<=2 алгоритм работает верно для любого массива." << std :: endl;
} else {
    for (int i = 0; i < n; i++) {
        std :: cin >> a[i];
    }
      std :: cout << "Контрпример: " << std :: endl;
    for (int i = n - 1; i >= 0; i--) {
        std :: cout << a[i] << " "<< std :: endl;
    }
}
    return 0;
}