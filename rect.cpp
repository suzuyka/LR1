#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b;
    cout << "Введите в одну строчку стороны прямоугольника: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Сторона не может быть отрицательной" << endl;
    }
    else {
        float per, pl, d;
        per = 2 * a + 2 * b;
        pl = a * b;
        d = sqrt(a*a + b*b);
        cout << "Периметр: " << per << "\n";
        cout << "Площадь: " << pl << "\n";
        cout << "Длина диагонали: " << d << "\n";
    }
    
}
