#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char gender[5];
    int age;
    char phone[20];
} Person;

Person SetPerson(char* name, char* gender, int age, char* phone) {
    Person p;
    strcpy(p.name, name);
    strcpy(p.gender, gender);
    p.age = age;
    strcpy(p.phone, phone);
    return p;
}

void PrintPerson(Person p) {
    printf("%s(%s %d세) : %s\n", p.name, p.gender, p.age, p.phone);
}

void main(void)
{
    Person people[4];
    people[0] = SetPerson("정지희", "여", 19, "011-388-3031");
    people[1] = SetPerson("박하영", "여", 19, "02-445-5059");
    people[2] = SetPerson("김무성", "남", 19, "031-330-6432");
    people[3] = SetPerson("정건호", "남", 19, "019-301-3001");

    for (int i = 0; i < 4; i++) PrintPerson(people[i]);
}
