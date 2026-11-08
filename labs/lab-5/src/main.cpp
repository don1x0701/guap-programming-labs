#include <iostream>

using namespace std;

int main() 
{
    const int MAX_SIZE = 100;
    int A[MAX_SIZE];
    int n = 0, P = 0;

    cout << "Введите размер массива (<= " << MAX_SIZE - 1 << "): ";
    cin >> n;

    cout << "Введите " << n << " элементов массива: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> A[i];
    }

    cout << "Введите число P: ";
    cin >> P;

    int max_neg = 0;
    int index_max_neg = -1;
    bool first = true;

    for (int i = 0; i < n; i++) 
    {
        if (A[i] < 0 && (first || A[i] > max_neg)) 
        {
            max_neg = A[i];
            index_max_neg = i;
            first = false;
        }
    }

    if (index_max_neg != -1) 
    {
        for (int i = n; i > index_max_neg + 1; i--) 
        {
            A[i] = A[i - 1];
        }
        A[index_max_neg + 1] = P;
        n++;

        cout << "Измененный массив: ";
        for (int i = 0; i < n; i++) 
        {
            cout << A[i] << " ";
        }
        cout << endl;
    } 
    else 
    {
        cout << "В массиве нет отрицательных чисел!" << endl;
    }

    return 0;
}