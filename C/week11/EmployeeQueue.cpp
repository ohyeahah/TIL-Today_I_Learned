#include "EmployeeQueue.h"

#define MAX_QUEUE_SIZE 5
Employee* emp_queue[MAX_QUEUE_SIZE];
int emp_front = 0, emp_rear = 0;


bool employee_enqueue(Employee& employee)
{
    if (employee_full())
        return false;
    emp_rear = (emp_rear + 1) % MAX_QUEUE_SIZE;
    emp_queue[emp_rear] = &employee;
    return true;
}

Employee* employee_dequeue()
{
    if (employee_empty())
    {
        return 0;
    }
    emp_front = (emp_front + 1) % MAX_QUEUE_SIZE;
    Employee* ret = emp_queue[emp_front];
    return ret;
}

Employee* employee_get_front()
{
    if (employee_empty()) return NULL;
    return emp_queue[(emp_front + 1) % MAX_QUEUE_SIZE]; 
}

bool employee_empty()
{
    return(emp_front == emp_rear);
}

bool employee_full()
{
    return ((emp_rear + 1) % MAX_QUEUE_SIZE == emp_front);
}

int employee_size()
{
    return (emp_rear - emp_front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}