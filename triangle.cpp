#include <iostream>
#include <cmath>

using namespace std;

// вычисление периметра треугольника
double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}
// вычисление площади треугольника по формуле Герона
double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0; // полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
// проверка на равнобедренность треугольника
bool isIsosceles(double a, double b, double c) {
    return (a == b) || (b == c) || (a == c);
}
// hello everubody, my name is Artem // комментарий для проверки как я работал с репозиторием
int main() {
    double a, b, c;
    cout << "Введите стороны треугольника через пробел: ";
    cin >> a >> b >> c;
    
    // проверка существования треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Некорректные стороны треугольника." << endl;
        return 1;
    }
    cout << "Периметр треугольника: " << trianglePerimeter(a, b, c) << endl;
    cout << "Площадь треугольника (формула Герона): " << triangleArea(a, b, c) << endl;
    
    if (isIsosceles(a, b, c)) {
        cout << "Треугольник является равнобедренным." << endl;
    } else {
        cout << "Треугольник не является равнобедренным." << endl;
    }
    
    return 0;
}
