#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cout << "Введите в одну строчку стороны прямоугольника: ";
    cin >> a >> b;
    int per, pl, d;
    per = 2 * a + 2 * b;
    pl = a * b;
    d = sqrt(a*a + b*b);
    cout << "Периметр: " << per << "\n";
    cout << "Площадь: " << pl << "\n";
    cout << "Длина диагонали: " << d << "\n";
}
