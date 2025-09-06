//#include <iostream>
//#include <string>
///#include <cmath>
//int main()
//{
    //std::cout << "Hello World$%$%$%$" << std::endl;
    //std::cout << "Hello World\n";
    //std::string a="Hello",b="c++",name,dop;
    //std::cout << a << b << std::endl;
 //   std::cout << "Введите имя\n";
   // std::cin >> name;
    //std::cout << "Введите сообщение\n";
    //std::getline(std::cin, dop);
    //std::cout << a << " " << name << dop << std::endl;
    //char c='A';
    //int d;
    //int f;
    //std::cin >>c>>d>>f;
    //std::cout <<c<<d<<f;
    //std::cout <<sizeof(long double);
    //int q=6,w=4;
    //double e=static_cast<double>(q)/w;//если хотим получить при делении обычное частное то нужно привести один из аргументов в вещественный тип с помощью static_cast
    //double y=q/w;//неполное частное ВМЕСТО СТАТИК КАСТ МОЖНО ПРОСТО УМНЖИТЬ Q НА 1.0
    //c+=25;
    //std::cout << e << " " << y << c << "\n";
    //++x увеличение х на еденицу -- уменьшение на единицу
    //auto pi=3.1415926;//компилятор сам распознает тип

    //сравнение чисел с плавающей точкой нужно сравнить модуль с малой погрешностью
   // double delta = 0.000001;
//
  //  double m = 0.1, n = 0.2;
    //double sum = m + n;
//
  //  if (std::abs(sum - 0.3) < delta) {
    //    std::cout << "EQUAL ";
    //} else {
      //  std::cout << "NOT EQUAL ";
    //}

    //std::cout << sum << "\n";
     //int u = 1;
    //while (u <= 10) {
      //  std::cout << u << "\t" << u * u << "\n";  // выводим число и его квадрат через табуляцию \t позволяет вывести столбцами
        //++u;
    //}
//}
#include <iostream>
const int N = 1001;
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