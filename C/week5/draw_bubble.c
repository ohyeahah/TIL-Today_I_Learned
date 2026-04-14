#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void){
    int i, k;
    int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 39, 99, 66};

    for (k = 0; k < SIZE; k++){
        printf("\033[2J\033[H");          
        for (i = 0; i < SIZE - 1; i++){
            if (list[i] > list[i + 1]){
                int tmp = list[i]; 
                list[i] = list[i + 1]; 
                list[i + 1] = tmp;
            }
        }
        for (i = 0; i < SIZE; i++){
            for (int m = 0; m < list[i] / 10; m++)
                printf("*");
            printf("\n");
        }
        getchar();               
    }
    return 0;
}