#include <iostream>

using namespace std;

int main() 
{
    double M = 0.0, N = 0.0, t = 0.0, temp = 0.0;
    int time = 0;

    cout << "Введите начальную температуру M: ";
    cin >> M;

    cout << "Введите опасную температуру N: ";
    cin >> N;

    cout << "Введите повышение температуры за минуту t: ";
    cin >> t;

    temp = M;

    if (t <= 0) 
    {
        cout << "Некорректное значение t" << endl;
        return 0;
    }

    while (temp + t < N) 
    {
        temp = temp + t;
        time++;
    }

    cout << "Предельно допустимое время нагрева: " << time << " мин." << endl;

    return 0;
}