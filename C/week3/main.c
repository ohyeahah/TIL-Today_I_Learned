#include "student.h"

// 이름으로 학생 정보를 출력하는 함수 (구현 대상)
void PrintStudent(const char* name)
{
    int index = GetStudentIndex(name);

    if (index == -1) {
        printf("%s는 존재하지 않는 학생입니다.\n", name);
        return;
    }

    const Student* s = GetStudent(index);
    if (s == NULL) return;

    printf("%s(%d세) : %s지역 %s %s %d학년\n",
        s->name,
        s->age,
        s->city,
        s->university,
        s->major,
        s->year);
}

int main(void)
{
    char data[][64] = {
        "김연성\t대림대학교\tAI시스템\t1\t19\t안양",
        "이대림\t연성대학교\t컴퓨터정보\t2\t20\t안양",
        "정홍심\t중앙대학교\t컴퓨터과학\t2\t22\t서울",
        "박대기\t서강대학교\t기계공학\t3\t23\t서울",
        "강하리\t성균관대학교\t영어영문\t2\t20\t수원"
    };

    InitStudent();

    int num = sizeof(data) / 64;
    for (int i = 0; i < num; i++) {
        InputStudentData(data[i], "\t");
    }

    printf("총 %d명의 학생이 저장되어 있습니다.\n", GetStudentCount());

    PrintStudent("김고려");   // 존재하지 않는 학생
    PrintStudent("정홍심");
    PrintStudent("강하리");

    return 0;
}