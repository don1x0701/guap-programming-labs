#include <stdio.h>

int main(void) 
{
    int season = 0;

    printf("Введите номер времени года (1-4): ");
    if (scanf("%d", &season) != 1) 
    {
        printf("Ошибка: некорректный ввод\n");
        return 1;
    }

    switch (season) 
    {
        case 1:
            printf("Зима:\nДекабрь (31), Январь (31), Февраль (28)\n");
            break;
        case 2:
            printf("Весна:\nМарт (31), Апрель (30), Май (31)\n");
            break;
        case 3:
            printf("Лето:\nИюнь (30), Июль (31), Август (31)\n");
            break;
        case 4:
            printf("Осень:\nСентябрь (30), Октябрь (31), Ноябрь (30)\n");
            break;
        default:
            printf("Ошибка: введено неверное число\n");
            break;
    }

    return 0;
}