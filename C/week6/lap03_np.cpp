#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_negative_positive(int number)
{
    int result;
    if (number = 0)
        result = 0;
    else if (number < 0)
        result = 1;
    else
        result = -1;
    return result;
}

int main(void)
{
    int number;
    printf("정수 입력 : ");
    scanf("%d", &number);
    switch(check_negative_positive(number))
    {
        case 0:
            printf("0 입니다.\n");
            break;
        case 1:
            printf("양수입니다.\n");
            break;
        case -1:
            printf("음수입니다.\n");
            break;
    }
    return 0;
}