#include <stdio.h>

int main()
{
    double m, v, r; // Инициализирую переменные
    double F;       // Переменная для результата

    printf("Введите массу m (кг): ");
    scanf("%lf", &m);

    printf("Введите скорость v (м/с): ");
    scanf("%lf", &v);

    printf("Введите расстояние r (м): ");
    scanf("%lf", &r);

    F = m * v * v / r; // Произвожу вычисления

    printf("F = %lf\n", F); // Вывожу результат

    return 0;
}
