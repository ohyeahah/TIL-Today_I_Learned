#include <stdio.h>

void difference(int* big, int* small, int* diff);

int main()
{
    int a, b, result;

    printf("두 정수 입력 : ");
    scanf("%d %d", &a, &b);

    difference(&a, &b, &result);
    printf("%d - %d = %d\n", a, b, result);

    return 0;
}

void difference(int* big, int* small, int* diff)
{
    int tmp;
    if (*big < *small)
    {
        tmp = *big;
        *big = *small;
        *small = tmp;
    }
    
    *diff = *big - *small;
}