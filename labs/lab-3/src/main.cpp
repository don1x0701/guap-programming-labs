#include <iostream>

using namespace std;

int main() 
{
    int season = 0;

    cout << "Введите номер времени года (1-4): ";
    cin >> season;

    switch (season) 
    {
        case 1:
            cout << "Зима:\nДекабрь (31), Январь (31), Февраль (28)" << endl;
            break;
        case 2:
            cout << "Весна:\nМарт (31), Апрель (30), Май (31)" << endl;
            break;
        case 3:
            cout << "Лето:\nИюнь (30), Июль (31), Август (31)" << endl;
            break;
        case 4:
            cout << "Осень:\nСентябрь (30), Октябрь (31), Ноябрь (30)" << endl;
            break;
        default:
            cout << "Ошибка: введено неверное число" << endl;
            break;
    }

    return 0;
}