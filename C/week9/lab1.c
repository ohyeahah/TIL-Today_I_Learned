#include <stdio.h>

typedef struct {
    char name[15];
    int kor;
    int eng;
    int math;
} score;

int main(void)
{
    score students_score[] = {{"홍길동", 90, 85, 80},
                            {"김철수", 75, 80, 70},
                            {"이명희",85, 90, 95}};
    printf("\t ----- 성적 알림 표 -----\n");
    printf("+----------+-----+-----+------+\n");
    printf("|    이름   | 국어 | 영어  |  수학 |\n ");
    printf("+----------+-----+-----+------+\n");
    int count = sizeof(students_score) / sizeof(score);
    for (int i=0; i < count; i++)
    {
        printf("   %s|  %d|  %d|  %d \n",
            students_score[i].name,
            students_score[i].kor,
            students_score[i].eng,
            students_score[i].math);
    }
    printf("+----------+-----+-----+------+\n");
    return 0;
}