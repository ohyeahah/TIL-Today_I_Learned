#include <stdio.h>

int main(void)
{
    int number = 10;
    int *p;

    p = &number;

    printf("parameter number's address = %p\n", &number);
    printf("pointer value : %p\n", p);
    printf("parameter number's value: %d\n", number);
    printf("what pointer points : %d\n" );

    return 0;
}