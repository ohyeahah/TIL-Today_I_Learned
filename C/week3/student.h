#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    char university[20];
    char major[20];
    int grade;
    int age;
    char region[20];
} Student;

Student students[100];
int studentCount = 0;

void InitStudent() {
    studentCount = 0;
}

void InputStudentData(char* data, const char* delimiter) {
    char temp[64];
    strcpy(temp, data);

    char* token;
    token = strtok(temp, delimiter);
    strcpy(students[studentCount].name, token);

    token = strtok(NULL, delimiter);
    strcpy(students[studentCount].university, token);

    token = strtok(NULL, delimiter);
    strcpy(students[studentCount].major, token);

    token = strtok(NULL, delimiter);
    students[studentCount].grade = atoi(token);

    token = strtok(NULL, delimiter);
    students[studentCount].age = atoi(token);

    token = strtok(NULL, delimiter);
    strcpy(students[studentCount].region, token);

    studentCount++;
}

int GetStudentCount() {
    return studentCount;
}

void PrintStudent(const char* name) {
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("%s(%d세) : %s지역 %s %s과 %d학년\n",
                students[i].name,
                students[i].age,
                students[i].region,
                students[i].university,
                students[i].major,
                students[i].grade);
            return;
        }
    }
    printf("%s는 존재하지 않는 학생입니다.\n", name);
}