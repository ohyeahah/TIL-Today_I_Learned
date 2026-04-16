#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


bool is_odd(int number)
{
    return number % 2 != 0;
        
}

int main(void)
{
    int number;
    printf("숫자 입력 : ");
    scanf("%d", &number);
    if (is_odd(number))
        printf("홀수입니다.\n");
    else
        printf("짝수입니다. \n");

    return 0;
}
