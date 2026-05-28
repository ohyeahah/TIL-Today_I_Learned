#include <string.h>
#include "EmployeeQueue.h"
#include "CompanyQueue.h"

bool InsertEmployee(const char* name, const char* gender, int age);
bool InsertCompany(const char* name, int number);
void matching();

int main(void)
{
    InsertEmployee("홍길동", "남", 21);
    InsertEmployee("전우치", "남", 22);
    InsertCompany("대림산업", 3);
    InsertEmployee("황진이", "여", 20);
    InsertEmployee("황대림", "남", 63);
    InsertCompany("대림건설", 2);
    InsertEmployee("멍지효", "여", 23);
    return 0;
}

bool InsertEmployee(const char* name, const char* gender, int age)
{
    Employee* employee = new Employee();  // 동적 할당!
    strcpy(employee->name, name);
    strcpy(employee->gender, gender);
    employee->age = age;
    bool ret = employee_enqueue(*employee);
    printf("구직 대기자 : %d명\n", employee_size());
    while (!employee_empty() && !company_empty())
        matching();
    return ret;
}

bool InsertCompany(const char* name, int number)
{
    Company* company = new Company();  // 동적 할당!
    strcpy(company->name, name);
    company->number = number;
    bool ret = company_enqueue(*company);
    printf("모집 회사 : %d개\n", company_size());
    while (!employee_empty() && !company_empty())
        matching();
    return ret;
}

void matching()
{
    Employee* employee = employee_get_front();
    Company* company = company_get_front();

    company->number--;

    printf("회사:%s(모집:%d명) - %s(%s성:%d) 매칭\n",
        company->name, company->number,
        employee->name, employee->gender, employee->age);

    employee_dequeue();
    printf("구직대기자 : %d명\n", employee_size());

    if (company->number == 0)
        company_dequeue();
}