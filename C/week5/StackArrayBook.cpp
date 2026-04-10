#include <stdio.h>
#include "StackArrayBook.hpp"
#define MAX_STACK_SIZE 5

Book stack[MAX_STACK_SIZE];
int top = -1;

bool push(Book& book)
{
    if (top < MAX_STACK_SIZE - 1)
    {
        top++;
        stack[top] = book;
        return true;
    }
    else
        return false;
}

bool pop(Book* ptr)
{
    if (top == -1 || ptr == NULL)
        return false;
    else
    {
        *ptr = stack[top];
        top--;
        return true;
    }
}

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