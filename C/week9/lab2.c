#include <stdio.h>

typedef struct {
    char name[15];
    int kor;
    int eng;
    int math;
} score;

score students_score[] = {{"홍길동", 90, 85, 80},
                        {"김철수", 75, 80, 70},
                        {"이명희",85, 90, 95}};

void print_name_list(){
    printf("1. 홍길동\n");
    printf("2. 김철수\n");
    printf("3. 이영희\n");
}
void print_score(int number){
    printf(" %s 학생의 점수\n", students_score[number- 1].name);
    printf(" 국어 : %d\n", students_score[number - 1].kor);
    printf(" 영어 : %d\n", students_score[number - 1].eng);
    printf(" 수학 : %d\n", students_score[number - 1].math);
    int mean = (students_score[number - 1].kor + students_score[number - 1].eng + students_score[number - 1].math) /3;
    printf(" 평균 : %d\n", mean);
}

int main(void)
{
    int selected = 0;

    print_name_list();
    printf("학생 번호를 입력 : ");
    scanf("%d", &selected);
    printf("----------------\n");
    print_score(selected);
    return 0;
}

                    