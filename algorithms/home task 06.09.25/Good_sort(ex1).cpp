#include <iostream>
#include <vector>
int main() {
int n;
std :: cout << "Введите размер массива ";
std :: cin >> n;
if (n <= 2) {
   std :: cout << "При n<=2 алгоритм работает верно для любого массива." << std :: endl;
} else {
  std :: vector<int> a;
  for (int i = 2; i <= n; i++) {
    a.push_back(i);
}
  a.push_back(1);
  std :: cout << "Контрпример: ";
  for (int i = 0; i < n; i++) {
     std :: cout << a[i] << " ";
}
}
return 0;
}