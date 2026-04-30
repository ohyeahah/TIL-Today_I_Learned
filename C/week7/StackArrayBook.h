#include <stdio.h>

typedef struct {
    char title[20];
    char publisher[20];
} Book;

bool push(Book& book);
bool pop(Book* ptr);
bool empty();
bool full();
int size();