#include <stdio.h>

int main(void)
{
    int a = 10;
    int* ptr = &a;

    *ptr = a +20;
    printf("a 값 : %d \n", a);

    a = a + 20;
    printf("a 값 : %d \n", *ptr);

    return 0;
}