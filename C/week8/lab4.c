#include <stdio.h>

int calculate(int a, int b, int* add, int* sub, int* multi, double* div);

int main()
{
    int a, b, add, sub, multi;
    double div;

    printf("사칙연산 수행할 두 정수 : ");
    scanf("%d %d", &a, &b);

    int ret = calculate(a, b, &add, &sub, &multi, &div);
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, multi);
    printf("%d / %d = %.2f\n", a, b, div);

    if (ret)printf("%.2f\n", div);
    else printf("0으로 나눌 수 없음\n");
    
    return 0;
}

int calculate(int a, int b, int* add, int* sub, int* multi, double* div)
{
    *add = a + b;
    *sub = a - b;
    *multi = a * b;
    if (b == 0)
    {
        return 0;
    }
    *div =(double) a / b;
    return 1;
}