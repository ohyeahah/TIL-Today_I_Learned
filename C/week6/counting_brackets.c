#include <stdio.h>
#define BRACKET 100001

int main(void)
{
    int i,open = 0,close = 0;
    char str[BRACKET];
    printf("괄호 문자열을 입력하시오:");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++){
        if(str[i] == '(')
            open += 1;
        else if(str[i] == ')')
            close += 1;
    }
    printf("%d %d\n", open, close);

    return 0;
}