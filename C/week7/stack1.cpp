#include "StackArrayInt.h"

int main(void)
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    if (full()) printf("stack is full. size : %d\n", size());

    int n = 0;
    n = pop();
    n = pop();
    n = pop();
    printf("stack data size : %d\n", size());
    pop();
    pop();
    pop();
    printf("stack data size : %d\n", size());
    if (empty()) printf("stack is empty\n");

    return 0;
}