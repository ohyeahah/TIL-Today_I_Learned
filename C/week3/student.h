#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENT_NUM 10

typedef struct {
    char name[10];      // 이름
    char university[20]; // 대학명
    char major[20];     // 전공
    int year;           // 학년
    int age;            // 나이
    char city[10];      // 소재지
} Student;

// 초기화 함수
void InitStudent(void);

// 한 줄 텍스트 및 구분자 입력
void InputStudentData(char* data, const char* delimiter);

// 입력된 학생 수 반환
int GetStudentCount(void);

// 입력 인덱스를 찾아 인덱스 반환, 없으면 -1 반환
int GetStudentIndex(const char* name);

// 해당 인덱스에 해당하는 구조체 포인터 반환, 인덱스가 NULL이면 NULL 반환
const Student* GetStudent(int index);
