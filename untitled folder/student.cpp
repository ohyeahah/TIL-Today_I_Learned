#include "student.h"

#define MAX_STUDENT_NUM 10

Student students[MAX_STUDENT_NUM];
int count;

void InitStudent(void)
{
    memset(students, 0, sizeof(Student) * MAX_STUDENT_NUM);
    count = 0;
}

void InputStudentData(char* data, const char* delimiter)
{
    if (count >= MAX_STUDENT_NUM) return; // 배열 초과 방지

    // strtok 함수를 사용하여 구분자를 기준으로 문자열 분리
    char* token = strtok(data, delimiter);
    if (token != NULL) strcpy(students[count].name, token);

    token = strtok(NULL, delimiter);
    if (token != NULL) strcpy(students[count].university, token);

    token = strtok(NULL, delimiter);
    if (token != NULL) strcpy(students[count].major, token);

    // 정수형 데이터는 atoi를 사용하여 변환
    token = strtok(NULL, delimiter);
    if (token != NULL) students[count].year = atoi(token);

    token = strtok(NULL, delimiter);
    if (token != NULL) students[count].age = atoi(token);

    token = strtok(NULL, delimiter);
    if (token != NULL) strcpy(students[count].city, token);

    count++; // 학생 수 증가
}

int GetStudentCount(void)
{
    return count;
}

int GetStudentIndex(const char* name)
{
    for (int i = 0; i < count; i++)
    {
        // 이름이 일치하면 해당 인덱스 반환
        if (strcmp(students[i].name, name) == 0)
        {
            return i;
        }
    }
    return -1; // 찾지 못한 경우
}

const Student* GetStudent(int index)
{
    // 인덱스 범위 검사
    if (index < 0 || index >= count)
    {
        return NULL;
    }
    return &students[index];
}