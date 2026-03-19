#include <stdio.h>

void hanoi(int n, char from, char by, char to);

void main(void)
{
    hanoi(3, 'A', 'B', 'C');
}

void hanoi(int n, char from, char by, char to)
{
    if (n == 1)
        printf("원판1: %c --> %c\n",from, to);
    else
    {
        hanoi(n - 1, from , to, by);
        printf("원판%d: %c --> %cn", n, from, to);
        hanoi(n - 1, by, from, to);
    }
}