#include <iostream>
using namespace std;

int main()
{
    double m, v, r; // Инициализирую переменные

    cout << "Введите массу m (кг): ";
    cin >> m;

    cout << "Введите скорость v (м/с): ";
    cin >> v;

    cout << "Введите расстояние r (м): ";
    cin >> r;

    double F = m * v * v / r; // Произвожу вычисления

    cout << "F = " << F << endl; // Вывожу результат

    return 0;
}
