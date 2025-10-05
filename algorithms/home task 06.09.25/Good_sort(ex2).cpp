#include <iostream>
#include <vector>
int main() 
    int n;
    std :: cin >> n;
    if (n <= 2) {
   std :: cout << "При n<=2 алгоритм работает верно для любого массива." << std :: endl;
} else {
   std :: vector<int> a;
  for (int i = 1; i <= n; i++) {
    a.push_back(i);
    }
      std :: cout << "Контрпример: " << std :: endl;
    for (int i = n - 1; i >= 0; i--) {
        std :: cout << a[i] << " "<< std :: endl;
    }
}
    return 0;
