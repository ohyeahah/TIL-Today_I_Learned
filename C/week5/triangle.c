#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, j, n;
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);

    for (i = 1; i < n + 1 ; i++)
    {
        for (j = 0; j < i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}