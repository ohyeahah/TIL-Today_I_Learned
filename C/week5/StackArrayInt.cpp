#include "StackArrayInt.hpp"
#define MAX_STACK_SIZE 5

int stack[MAX_STACK_SIZE];
int top = -1;


bool empty()
{
    return (top == -1);
}

bool full()
{
    return (top == MAX_STACK_SIZE - 1);
}

int size()
{
    return (top + 1);
}

bool push(int n)
{
    if (top < MAX_STACK_SIZE - 1)
    {
        top++;
        stack[top] = n;
        printf("push(%d)\n", n);
        return true;
    }
    else
    {
        printf("push(%d) : overflow !!!\n", n);
        return false;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("pop() : empty\n");
        return -1;
    }
    else
    {
        int ret = stack[top];
        top--;
        printf("pop() --> %d\n", ret);
        return ret;
    }
}