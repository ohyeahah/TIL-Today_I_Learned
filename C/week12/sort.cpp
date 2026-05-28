#include "sort.h"
#include <stdlib.h>
#include <memory.h>
#include <chrono>

using namespace std;
using namespace chrono;

void display(const char* str, const int arr[], int length)
{
    printf("%s : ", str);
    for (int i = 0; i < length; i++) printf("%d ", arr[i]);
    printf("\n");
}

void bubble_sort(const int arr[], int length, bool progress)
{
    int* rep = (int*)malloc(sizeof(int) * length);
    memcpy(rep, arr, sizeof(int) * length);

    system_clock::time_point start = system_clock::now();
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (rep[j] > rep[j + 1])
            {
                int temp = rep[j];
                rep[j] = rep[j + 1];
                rep[j + 1] = temp;
            }
        }
        if (progress)
        {
            char str[16]; snprintf(str, sizeof(str), "버블 %d차:", i);
            display((const char*)str, rep, length);
        }
    }

    system_clock::time_point end = system_clock::now();
    duration<double> sec = end - start;
    printf("버블 정렬 소요시간 : %.10f초\n", (double)sec.count());

    display("버블 정렬", rep, length);
    free(rep);
}