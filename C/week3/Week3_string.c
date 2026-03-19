#define _CRT_SECURE_DEINFE_WARNINGS
#include <stdio.h>
#include <string.h>

void main(void)
{
    char sample[] = "Daelim University College";    // 기본 문자열
    char preposition[] = " in ";                    // 전치사
    char city[] = "Anyang";                         // 지명
    char result[128];
    // char * strcpy ( chat * destination, const char * source );
    strcpy(result, sample);
    printf("%s\n", result);
    // char * strcat ( char * destination, const chat * source);
    strcat(result, preposition);
    printf("%s\n", result);
    printf("%s\n", strcat(result,city));
}