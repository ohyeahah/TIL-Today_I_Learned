#include "StackArrayChar.h"
#include <string.h>

bool CheckBracket(char* exp)
{
    while (*exp != '\0')
    {
        char ch = *exp;

        switch (ch)
        {
            case '(': case '[': case '{':
                push(ch);
                break;

            case ')': case ']': case '}':
                if (empty()) 
                    return false;
                else
                {
                    char st = pop();
                    if ((ch == ')' && st != '(') ||
                        (ch == ']' && st != '[') ||
                        (ch == '}' && st != '{'))
                        return false; 
                }
                break;
        }
        exp++; 
    }

    if (!empty())
        return false;

    return true;
}

int main(void)
{
    char codes[][64] = {
        "(a(b(c))",
        "a(b(c))",
        "a[b(c(d)e)f]",
        "a(b(c)[d]e(f))",
        "(a(b)",
        "a(b)b)",
        "a[b(c[d]e)f",
        "(a[(i+1)]=0;",
        "if ((i==0) && (j==0))",
        "a[(i+1)] = 0;"
    };

    for (char* str : codes)
    {
        printf("수식 : %s ", str);
        printf("-> %s\n", CheckBracket(str) ? "정상" : "오류");
    }

    return 0;
}