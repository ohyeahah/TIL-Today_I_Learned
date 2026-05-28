#include "sort2.h"
#include <stdlib.h>
#include <memory.h>
#include <chrono>

#define SWAP(a, b) { int t = a; a = b; b = t;}
#define PROGRESS(s, i) if (progress) { char str[16]; snprintf(str, sizeof(str), "%s %d차", s, i); \
display((const char*)str, rep, length);}

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
    printf("선택 정렬 소요 시간: %.10f초 \n", (double)sec.count());

    display("선택 정렬", rep, length);
    free(rep);
}

void insertion_sort(const int arr[], int length, bool progress)
{
    int* rep = (int*)malloc(sizeof(int) * length);
    memcpy(rep, arr, sizeof(int) * length);

    system_clock::time_point start = system_clock::now();
    for (int i = 1; i < length; i++)
    {
        int insert = rep[i];
        int j = 0;
        for (j = i - 1; j >=0 && insert < rep[j]; j--)
            rep[j + 1] = rep[j];
        rep[j + 1] = insert;

        PROGRESS("삽입", i);
    }
    system_clock::time_point end = system_clock::now();
    duration<double> sec = end - start;
    printf("삽입 정렬 소요시간 : %.10f초\n", (double)sec.count());

    display("삽입 정렬", rep, length);
    free(rep);
}

void merge_sort(int arr[], int length)
{
    int* rep = (int*)malloc(sizeof(int) * length);
    memcpy(rep, arr, sizeof(int) * length);

    system_clock::time_point start = system_clock::now();
    merge_recursive(rep, 0 , length - 1);
    system_clock:: time_point end = system_clock:: now();
    duration<double> sec = end - start;
    printf("병합 정렬 소요시간 : %.10f초\n", (double)sec.count());

    display("병합 정렬", rep, length);
    free(rep);
}

void merge_recursive(int list[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;
        merge_recursive(list, left, mid);
        merge_recursive(list, mid + 1, right);
        merge(list, left, mid, right);
    }
}

void merge(int list[], int left, int mid, int right)
{
    int first = left, last = mid + 1, index = left;
    int* sorted = (int*)malloc(sizeof(int) * (right + 1));
    while (first <= mid && last <= right)
    {
        if (list[first] <= list[last]) sorted[index++] = list[first++];
        else sorted[index++] = list[last++];
    }

    if (first > mid)
    {
        for (int i = right; i <= right; i++, index++)
            sorted[index] = list[i];
    }
    else{
        for (int i = first; i <= mid; i++, index++)
        sorted[index] = list[i];
    }

    for (int i = left; i <= right; i++) list[i] = sorted[i];

    free(sorted);
    
}