#define _CRT_SECURE_NO_WARNINGS
#include "StackArrayChar.h"
#define MAX_STACK_SIZE 60

char stack[MAX_STACK_SIZE];
int top = -1;

int push(char ch)
{
    if (top < MAX_STACK_SIZE - 1)
    {
        top++;
        stack[top] = ch;
        return 1;
    }
    else
        return 0;
}

char pop()
{
    if (top == -1)
        return '\0';
    else
    {
        char ret = stack[top];
        top--;
        return ret;
    }
}

int empty()
{
    return (top == -1);
}

int full()
{
    return (top == MAX_STACK_SIZE - 1);
}

int size()
{
    return (top + 1);
}