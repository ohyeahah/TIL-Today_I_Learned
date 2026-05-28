#include "LinearQueue.h"
#include <stdio.h>

#define MAX_QUEUE_SIZE 5
char queue[MAX_QUEUE_SIZE];
int front = - 1, rear = - 1;

void move();

bool is_empty()
{
    return(front == rear);
}

bool is_full()
{
    return (front == -1 && rear == MAX_QUEUE_SIZE - 1);
}

int get_size()
{
    return (is_empty() ? 0 : rear - front);
}

bool enqueue(char ch)
{
    if (is_full() == false)
    {
        if (rear == MAX_QUEUE_SIZE - 1)
            move();
        queue[++rear] = ch;
        printf("enqueue(%c), front:%d, rear:%d\n", ch, front, rear);
        return true;
    }
    else
    {
        printf("enqueue(%c) : overflow !!!\n", ch);
        return false;
    }
}

char dequeue()
{
    if (is_empty())
    {
        printf("dequeue() : emtpy\n");
        return 0;
    }
    else{
        char ret = queue[++front];
        printf("dequeue():%c, front:%d, rear:%d\n", ret, front, rear);
        return ret;
    }
}

void move()
{
    if (front == -1) return;
    int count = get_size();
    for (int i = front + 1; i <=rear; i++)
    {
        printf("move(): %d <-- %d : %c\n", i, front + 1, queue[front + 1]);
        queue[i] = queue[++front];
    }

    rear = count - 1;
    front = -1;
}
