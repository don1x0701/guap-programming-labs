#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int main(void) 
{
    int A[MAX_SIZE];
    int n = 0, P = 0;

    printf("Введите размер массива (<= %d): ", MAX_SIZE - 1);
    if (scanf("%d", &n) != 1 || n <= 0 || n >= MAX_SIZE) return 1;

    printf("Введите %d элементов массива: ", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &A[i]) != 1) return 1;
    }

    printf("Введите число P: ");
    if (scanf("%d", &P) != 1) return 1;

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

        printf("Измененный массив: ");
        for (int i = 0; i < n; i++) 
        {
            printf("%d ", A[i]);
        }
        printf("\n");
    } 
    else 
    {
        printf("В массиве нет отрицательных чисел!\n");
    }

    return 0;
}