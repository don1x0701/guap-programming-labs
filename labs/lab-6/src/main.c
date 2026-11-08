#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 3
#define B 4

void create_arr_k(int arr[A][B]);
void printArr(int arr[A][B]);
int find_minStr(int arr[A][B]);
void endf(int arr[A][B]);

int main(void) 
{
    int arr[A][B];

    create_arr_k(arr);
    printf("Изначальный массив:\n");
    printArr(arr);

    endf(arr);
    printf("Полученный массив:\n");
    printArr(arr);

    return 0;
}

void printArr(int arr[A][B]) 
{
    for (int i = 0; i < A; i++) 
    {
        for (int j = 0; j < B; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int find_minStr(int arr[A][B]) 
{
    int min = arr[0][0], min_inxStr = 0;
    for (int i = 0; i < A; i++) 
    {
        for (int j = 0; j < B; j++) 
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

void endf(int arr[A][B]) 
{
    int min_inxStr = find_minStr(arr);
    if (min_inxStr == 2) 
    {
        printf("\n");
        printArr(arr);
    } 
    else 
    {
        for (int i = 0; i < B; i++) 
        {
            int temp = arr[min_inxStr][i];
            arr[min_inxStr][i] = arr[2][i];
            arr[2][i] = temp;
        }
    }
}

void create_arr_k(int arr[A][B]) 
{
    for (int i = 0; i < A; i++) 
    {
        for (int j = 0; j < B; j++) 
        {
            printf("arr [%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &arr[i][j]) != 1) exit(1);
        }
    }
}