#include "StackArrayBook.h"
#define MAX_STACK_SIZE 5

Book stack[MAX_STACK_SIZE];
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

bool push(Book& book)
{
    if (top < MAX_STACK_SIZE - 1)
    {
        top++;
        stack[top] = book;
        return true;
    }
    else
    {
        printf("push() : overflow!\n");
        return false;
    }
}

bool pop(Book* ptr)
{
    if (top == -1 || ptr == NULL)
    {
        printf("pop() : empty!\n");
        return false;
    }
    else
    {
        *ptr = stack[top];
        top--;
        return true;
    }
}