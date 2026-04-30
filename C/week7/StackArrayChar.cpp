#include "StackArrayChar.h"
#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];
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

bool push(char ch)
{
    if (top < MAX_STACK_SIZE - 1)
    {
        top++;
        stack[top] = ch;
        return true;
    }
    printf("push() : overflow!\n");
    return false;
}

char pop()
{
    if (top == -1)
    {
        printf("pop() : empty!\n");
        return '\0';
    }
    char ret = stack[top];
    top--;
    return ret;
}