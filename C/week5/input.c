#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int sum;

    printf("Enter the first number:");
    scanf("%d", &x);

    printf("Enter the second number:");
    scanf("%d", &y);

    sum = x + y;
    printf("Sum of two number= %d \n", sum);

    return 0;
}