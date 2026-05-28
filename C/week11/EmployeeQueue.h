#include <stdio.h>

typedef struct{
    char name[10];
    char gender[5];
    int age;
} Employee;

bool employee_enqueue(Employee& employee);
Employee* employee_dequeue();
Employee* employee_get_front();
bool employee_empty();
bool employee_full();
int employee_size();