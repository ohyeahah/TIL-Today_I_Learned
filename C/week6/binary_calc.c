#include <stdio.h>

int main(void)
{
    int i=0,j,num;
    int bnry[100];

    printf("이진수로 바꿀 수를 입력하시오: ");
    scanf("%d", &num);

    while (num > 0){
        bnry[i] = num % 2;
        num /= 2;
        i++;
    }

    for ( j = i - 1 ; j >= 0; j--)
        printf("%d", bnry[j]);
    printf("\n");

    return 0;

}