#include <stdio.h>

bool is_prime(int number)
{
    int i;
    for (i = 2; i <= number - 1; i++)
    {
        if (number % i == 0)
            return 0; 
    }
    return 1;  
}

int main(void)
{
    int number;
    printf("정수 입력 : ");
    scanf("%d", &number);
    if (number <= 2)
        printf(" 2이하의 수는 입력할 수 없습니다.");
    switch(is_prime(number))
    {
        case 0:
            printf("%d는 소수(prime)가 아닙니다.\n", number);
            break;
        case 1:
            printf("%d는 소수(prime)입니다.\n", number);
            break;
    }
   return 0;     
}