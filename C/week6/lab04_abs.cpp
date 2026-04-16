#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int abs(int number){
    if (number < 0)
        number = -number;
    return number;
}


int main(void)
{
    int number;
    printf("숫자 입력 : ");
    scanf("%d", &number);
    printf("절대값은 %d입니다. \n", abs(number));

    return 0;
}