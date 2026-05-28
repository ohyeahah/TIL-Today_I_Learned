#include "sort1.h"
#define SWAP(a, b) { int t = a; a = b; b = t;}
#define PROGRESS(s, i) if (progress) { char str[16]; snprint(str, "%s %d차", s, i); \
display((const char*)str, rep, length);}

void selection_sort(const int arr[], int length, bool progress)
{
    int* rep = (int*)malloc(sizeof(int) * length);
    memcpy(rep, arr, sizeof(int) * length);

    system_clock::time_point start = system_clock::now();
    for (int i = 0; i < length - 1; i ++)
    {
        int idx = i;
        for (int j = i + 1; j < length; j++)
        {
            if (rep[idx] > rep[j]) idx = j;
        }
        SWAP(rep[idx], rep[i]);
        PROGRESS("선택", i);
    }

    system_clock::time_point end = system_clock::now();
    duration<double> sec = end - start;
    printf("선택 정렬 소요 시간: %.10ㄹch \n", (double)sec.count());

    display("선택 정렬", rep, length);
    free(rep);
}