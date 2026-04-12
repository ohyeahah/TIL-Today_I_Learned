#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 26

int main(void)
{
    int i;
    char codes[SIZE];

    for (i = 0; i < SIZE; i++)
        codes[i] = 'a'+ i;

    for (i = 0; i < SIZE; i ++)
        printf("%c ",codes[i]);
    printf("\n");

    return 0;
}