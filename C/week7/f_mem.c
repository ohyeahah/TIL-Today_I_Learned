#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char daelim[][12] = { "Daelim", "University", "College"};
    char *p = (char*)daelim, *mem = NULL, *ptr = NULL;

    mem = (char*)malloc(sizeof(daelim) + 1);
    ptr = mem;
    for (int i = 0; i < sizeof(daelim); i++)
    {
        if (p[i] != '\0')
        {
            *ptr = p[i];
            ptr++;
        }
    }

    printf("%s\n", mem);
    return 0;
}