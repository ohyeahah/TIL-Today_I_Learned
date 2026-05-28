#include <stdio.h>

typedef struct{
    char name[20];
    int number;
} Company;

bool company_enqueue(Company& company);
Company* company_dequeue();
Company* company_get_front();
bool company_empty();
bool company_full();
int company_size();
