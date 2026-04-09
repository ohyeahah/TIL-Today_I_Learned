#include "student.h"

#define MAX_STUDENT_NUM 10

static Student students[MAX_STUDENT_NUM];
static int count;

void InitStudent(void)
{
    memset(students, 0, sizeof(Student) * MAX_STUDENT_NUM);
    count = 0;
}

// data 예시: "김연성\t대림대학교\tAI시스템\t1\t19\t안양"
// delimiter: "\t"
void InputStudentData(char* data, const char* delimiter)
{
    if (count >= MAX_STUDENT_NUM) return;

    char buf[256];
    strncpy(buf, data, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';

    Student* s = &students[count];

    char* token = strtok(buf, delimiter);
    if (token) strncpy(s->name,       token, sizeof(s->name) - 1);

    token = strtok(NULL, delimiter);
    if (token) strncpy(s->university, token, sizeof(s->university) - 1);

    token = strtok(NULL, delimiter);
    if (token) strncpy(s->major,      token, sizeof(s->major) - 1);

    token = strtok(NULL, delimiter);
    if (token) s->year = atoi(token);

    token = strtok(NULL, delimiter);
    if (token) s->age  = atoi(token);

    token = strtok(NULL, delimiter);
    if (token) strncpy(s->city,       token, sizeof(s->city) - 1);

    count++;
}

int GetStudentCount(void)
{
    return count;
}

int GetStudentIndex(const char* name)
{
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0)
            return i;
    }
    return -1;
}

const Student* GetStudent(int index)
{
    if (index < 0 || index >= count)
        return NULL;
    return &students[index];
}
