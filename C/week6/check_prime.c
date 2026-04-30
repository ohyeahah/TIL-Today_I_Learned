#include <stdio.h>

int check_prime(int n)
{
    int is_prime = 1;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}

int main(void)
{
    int k;
    pritnf("정수를 입력하시오: ");
    scanf("%d", &k);
    if( check_prime(k) == 1 )
        printf("소수입니다. \n");
    else
        printf("소수가 아닙니다. \n");
    return 0;
}