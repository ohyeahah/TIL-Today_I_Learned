#include "sort.h"

int list[] = {5, 3, 8, 4, 9, 1, 6, 2, 7};

int main(void)
{
    int length = sizeof(list) / sizeof(int);
    display("배열 초기", list, length);
    bubble_sort(list, length, true);
    bubble_sort(list, length, true);
}