#include <stdio.h>

typedef struct{
    char name[20];
    char writer[20];
    char publish[20];
    int page;
    int price;
} book;

void PrintBooks(book books[], int size){
    printf("도서명   저자  출판사  쪽수  가격   ");
    printf("------------------------------\n");
    for (int i=0; i <size ; i++)
    {
        printf("%s   %s  %s  %d  %d\n",books[i].name, books[i].writer, books[i].publish, books[i].page, books[i].price);

    }

}

int main(void)
{
    book books[] = {
        {"진실", "존", "세기", 300, 20000},
        {"사랑", "폴", "명품", 200, 15000},
        {"기쁨", "제임스", "쿠키", 250, 18000}
    };

    int size = sizeof(books) / sizeof(book);
    PrintBooks(books, size);

    return 0;

}
