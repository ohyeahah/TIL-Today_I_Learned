#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];          // 이름
    char university[20];    // 대학명
    char major[20];         // 전공
    int year;               // 학년
    int age;                // 나이
    char city[10];          // 소재 도시
} Student;

// 구조체 초기화
void InitStudent(void);

// 한줄 텍스트 및 구분자 입력
void InputStudentData(char* data, const char* delimiter);

// 입력된 학생 수
int GetStudentCount(void);

// 이름으로 학생 찾아 배열 인덱스 반환
// 찾는 학생이 없을 경우 -1 반환
int GetStudentIndex(const char* name);

// 배열 인덱스에 해당하는 학생 구조체 포인터 반환
// 인덱스 범위 오류시 NULL 반환
const Student* GetStudent(int index);