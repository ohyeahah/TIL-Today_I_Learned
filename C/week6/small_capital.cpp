#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

bool is_capital_letter(char ch){
    return (ch >= 'A' && ch <= 'Z');
}

bool is_small_letter(char ch){
    return (ch >= 'a' && ch <= 'z');
}

int main(void)
{
    char ch;
    printf("문자입력 : ");
    scanf("%c", &ch);
    if (is_capital_letter(ch))
        printf("대문자입니다.\n");
    else if (is_small_letter(ch))
        printf("소문자입니다.\n");
    else
        printf("대/소문자가 아닙니다.\n");

    return 0;
}