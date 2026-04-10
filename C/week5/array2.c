#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int scores[SIZE];
    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;

    for (i = 0; i < SIZE; i++)
        printf("scores[%d]=%d\n", i, scores[i]);

    return 0;
}