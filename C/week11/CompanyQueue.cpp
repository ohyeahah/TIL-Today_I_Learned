#include "CompanyQueue.h"

#define MAX_QUEUE_SIZE 5
Company* c_queue[MAX_QUEUE_SIZE];
int c_front = 0, c_rear = 0;


bool company_enqueue(Company& company)
{
    if (company_full())
    {
        return false;
    }
    c_rear = (c_rear + 1) % MAX_QUEUE_SIZE;
    c_queue[c_rear] = &company;
    return true;
}

Company* company_dequeue()
{
    if (company_empty())
    {
        return 0;
    }
    c_front = (c_front + 1) % MAX_QUEUE_SIZE;
    Company* ret = c_queue[c_front];
    return ret;
}

Company* company_get_front()
{
    if (company_empty()) return NULL;
    return c_queue[(c_front + 1) % MAX_QUEUE_SIZE]; 
}

bool company_empty()
{
    return(c_front == c_rear);
}

bool company_full()
{
    return ((c_rear + 1) % MAX_QUEUE_SIZE == c_front);
}

int company_size()
{
    return (c_rear - c_front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}