#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    int arr[1000];

    printf("숫자의 개수를 입력하시오: ");
    scanf("%d", &n);

    printf("입력할 숫자들을 입력하시오: ");
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j <n; j++)
        {
            printf("%d ", arr[(i +j) % n]);
        }
        printf("\n");
    }
    return 0;
}