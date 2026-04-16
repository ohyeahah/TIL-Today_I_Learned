#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char to_capital(char ch){
    if (ch >= 'a' && ch <='z')
        ch = ch - 32;
    return ch;
}
char to_small(char ch){
    if(ch >= 'A' && ch <='Z')
        ch = ch + 32;
    return ch;
}

int main(void)
{
    char ch;
    printf("문자입력 : ");
    scanf("%c", &ch);
    printf("대문자 : %c\n 소문자 : %c\n", to_capital(ch), to_small(ch));

    return 0;
}