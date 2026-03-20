#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
    char sample[] = "String can, be.separated by/delimiter";
    char delimiter[] = " ,./";
    char* token = strtok(sample, delimiter);
    while (token)
    {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }
}