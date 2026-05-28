#include <stdio.h>

void ConvertUpperAndLower(char* str, int size);
void PrintReverseString(char* str, int size);

int main(void)
{
    char inString[] = "Daelim University College!!!";
    int size = sizeof(inString) / sizeof(char);
    printf("%s\n", inString);
    ConvertUpperAndLower(inString, size);
    PrintReverseString(inString, size);

    return 0;
}

void ConvertUpperAndLower(char* str, int size)
{
    for(int i = 0; i < size; i++)
    {
        if (str[i] >= 'a' && str[i] <='z')
            str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <='Z')
            str[i] = str[i] + 32;
    }
       
}

void PrintReverseString(char* str, int size)
{
    for (int i = size - 2 ; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}