#include <iostream>
const int N = 1000;
int a[N];
int main() {
    int n,znach1,znach2;
    std :: cin >> n;
    for (int i = 0;i < n;i++) {
        std :: cin >> a[i]; 
    }
    for (int i = 0;i < n;i++) {
        for (int j = 1;j < n;j++) {
            if ((j % 2 == 0) && (a[j] >= a[j - 1])) {
                znach1 = a[j - 1];
                a[j - 1] = a[j];
                a[j] = znach1;
            }
            if ((j % 2 != 0) && (j != 1) && (a[j] <= a[j - 1])) {
                znach2 = a[j - 1];
                a[j - 1] = a[j];
                a[j] = znach2;
            }
        }
    }
for (int i = 0;i < n; i++) {
    std:: cout << a[i] << " "<< std::endl;
}
return 0;
}
