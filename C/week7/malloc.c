#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p_num_list, count = 0, sum = 0, limit = 0, i;
    
    printf("사용할 최대 개수(더할 정수의 개수)를 입력 :");
    scanf("%d", &limit);

    p_num_list = (int*)malloc(sizeof(int) * limit); //입력한 개수만큼 정수를  저장할 수 있는 메모리 할당

    while (count < limit)
    {
        printf("숫자를 입력하세요 (0000)를 누르면 종료: ");
        scanf("%d", p_num_list + count);

        if (*(p_num_list + count) == 0000)
            break; // 0000을 입력하면 종료
        
        count++;
    }

    for (i = 0; i < count; i++) // 입력한 횟수만큼 숫자 출력
    {
        if (i > 0) printf("+ ");
        printf("%d ", *(p_num_list + i));
        sum = sum + *(p_num_list + i);
    }
    printf("= %d\n", sum);
    free(p_num_list);
}
