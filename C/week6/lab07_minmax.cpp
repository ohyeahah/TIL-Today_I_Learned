#include <stdio.h>

int min(int arr[], int size)
{
    int i, Min = arr[0];
    for (i = 0; i < size; i++){
        if (arr[i] < Min)
            Min = arr[i];
    }
    return Min;
}

int max(int arr[], int size)
{
    int i, Max = arr[0];
    for (i = 0; i < size ; i++){
        if (arr[i] > Max)
            Max = arr[i];
    }
    return Max;
}

float average(int num1, int num2)
{
    float avg;
    avg = (num1 + num2) / 2.0;
    return avg;
}

int main(void)
{
    int a[10] = { 15, 12, 3, 35, 78, 22, 11, 2, 49, 19,};
    printf("최소값 : %d\n", min(a, 10));
    printf("최대값 : %d\n", max(a, 10));
    printf("최소~최대 평균 : %.2f\n", average(min(a, 10), max(a, 10)));

    return 0;
}