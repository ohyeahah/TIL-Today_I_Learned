#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int sum = 0, i, j, n;
    printf("숫자를 입력하시오: ");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    printf("%d\n", sum);
    return 0;
}