#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i, k;
    int list[SIZE] = { 16, 7, 9, 1, 3 };

    for (k = 0; k < SIZE; k++){
        for (i = 0; i < SIZE-1; i++){
            if (list[i] > list[i + 1]){
                int tmp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = tmp;
            }
        }
    }
    for (i = 0; i < SIZE; i++){
        printf("%d ", list[i]);
    }
    return 0;
}