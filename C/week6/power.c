#include <stdio.h>

int get_integer()
{
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}

int power(int x, int y)
{
    int i, result = 1;

    for (i = 0; i < y; i++)
        result *= x;
    
    return result;
}

int main(void)
{
    int x, y;
    x = get_integer();
    y = get_integer();
    int result = power(x,y);
    printf("%d의 %d승 = %d \n", x, y, result);

    return 0;
}

