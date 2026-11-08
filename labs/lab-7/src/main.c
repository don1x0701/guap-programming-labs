#include <stdio.h>
#include <string.h>

#define MAX_LEN 1024

int main(void) 
{
    char text[MAX_LEN];
    int count = 0;

    printf("Введите предложение (только на английском): ");
    if (fgets(text, sizeof(text), stdin) == NULL) return 0;

    const char *delim = " \t\r\n";
    char *word = strtok(text, delim);

    while (word != NULL) 
    {
        if (strlen(word) % 2 != 0) 
        {
            count++;
        }
        word = strtok(NULL, delim);
    }

    printf("Количество слов с нечетной длиной: %d\n", count);

    return 0;
}