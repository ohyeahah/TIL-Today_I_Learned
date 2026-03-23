#include "student.h"

void main(void) {
    char data[][64] = {
        "김연성\t대림대학교\tAI시스템\t1\t19\t안양",
        "이대림\t연성대학교\t컴퓨터정보\t2\t20\t안양",
        "정중심\t중앙대학교\t컴퓨터과학\t2\t22\t서울",
        "박대기\t서강대학교\t기계공학\t3\t23\t서울",
        "강하리\t성균관대학교\t영어영문\t2\t20\t수원"
    };

    InitStudent();
    int num = sizeof(data) / 64;
    for (int i = 0; i < num; i++) {
        InputStudentData(data[i], "\t");
    }

    printf("총 %d명의 학생이 저장되어 있습니다.\n", GetStudentCount());
    PrintStudent("김고려");
    PrintStudent("정중심");
    PrintStudent("강하리");
}