#include <stdio.h>

void PrintArray(char* str, int* array, int size);
void SwapArray(int *array1, int *array2, int size);
int main(void)
{
    int nums1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int nums2[] = {10 ,20, 3, 7, 4, 30, 11, 21, 8};
    int size = sizeof(nums1)/ sizeof(int);
    printf("***교환 전 배열 ***\n");
    PrintArray("Array1 : ", nums1, size);
    PrintArray("Array2 : ", nums2, size);
    SwapArray(nums1, nums2, size);
    printf("*** 교환 후 배열 ***\n");
    PrintArray("Array1 : ", nums1, size);
    PrintArray("Array2 : ", nums2, size);

    return 0;
}

void PrintArray(char* str, int* array, int size)
{   
    printf("%s", str);
    for (int i = 0; i < size ; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void SwapArray(int *array1, int *array2, int size)
{
    for (int i = 0; i < size; i++)
    {
        int tmp = array1[i];
        array1[i] = array2[i];
        array2[i] = tmp;
    }
}