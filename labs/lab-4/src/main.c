#include <stdio.h>

int main(void) 
{
    double M = 0.0, N = 0.0, t = 0.0, temp = 0.0;
    int time = 0;

    printf("Введите начальную температуру M: ");
    if (scanf("%lf", &M) != 1) return 1;

    printf("Введите опасную температуру N: ");
    if (scanf("%lf", &N) != 1) return 1;

    printf("Введите повышение температуры за минуту t: ");
    if (scanf("%lf", &t) != 1) return 1;

    temp = M;

    if (t <= 0) 
    {
        printf("Некорректное значение t\n");
        return 0;
    }

    while (temp + t < N) 
    {
        temp = temp + t;
        time++;
    }

    printf("Предельно допустимое время нагрева: %d мин.\n", time);

    return 0;
}