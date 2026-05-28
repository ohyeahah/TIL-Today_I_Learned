#include "sort3.h"

int list[] = {5, 3, 8, 4, 9, 1, 6, 2, 7};

int main(void)
{
    int length = sizeof(list) / sizeof(int);
    display("배열 초기", list, length);
    bubble_sort(list, length, true);
    bubble_sort(list, length);
    selection_sort(list, length, true);
    selection_sort(list, length);
    insertion_sort(list, length, true);
    insertion_sort(list, length);
    merge_sort(list, length);
}