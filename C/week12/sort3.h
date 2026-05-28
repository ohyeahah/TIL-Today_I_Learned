#include <stdio.h>

void display(const char* str, const int arr[], int length);
void bubble_sort(const int arr[], int length, bool progress = false);
void selection_sort(const int arr[], int length, bool progress = false);
void insertion_sort(const int arr[], int length, bool progress = false);
void merge_recursive(int list[], int left, int right);
void merge_sort(int arr[], int length);
void merge(int list[], int left, int mid, int right);