#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>

using namespace std;

const int a = 3, b = 4;

// Скелеты функций
void create_arr_k(int arr[a][b]);
void printArr(int arr[a][b]);
int find_minStr(int arr[a][b]);
void endf(int arr[a][b]);
void create_arr_R(int arr[a][b]);

int main() 
{
    // Инициализирую массив
    int arr[a][b];

    create_arr_k(arr);
    cout << "Изначальный массив: " << endl;
    printArr(arr);

    endf(arr);
    cout << "Полученный массив: " << endl;
    printArr(arr);

    return 0;
}

// Функция заполнения массива (рандом)
void create_arr_R(int arr[a][b]) 
{
    srand(time(NULL));
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            arr[i][j] = 1 + rand() % 25;
        }
    }
}

// Функция вывода массива
void printArr(int arr[a][b]) 
{
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция поиска строки, в которой находится минимальный элемент
int find_minStr(int arr[a][b]) 
{
    int min = arr[0][0], min_inxStr = 0;
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            if (arr[i][j] < min) 
            {
                min = arr[i][j];
                min_inxStr = i;
            }
        }
    }
    return min_inxStr;
}

// Замена строк массива
void endf(int arr[a][b]) 
{
    int min_inxStr = find_minStr(arr);
    if (min_inxStr == 2) 
    {
        cout << endl;
        printArr(arr);
    } 
    else 
    {
        for (int i = 0; i < b; i++) 
        {
            swap(arr[min_inxStr][i], arr[2][i]);
        }
    }
}

// Функция заполнения массива (клавиатура)
void create_arr_k(int arr[a][b]) 
{
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            cout << "arr [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> arr[i][j];
        }
    }
}