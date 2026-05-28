#include <stdio.h>
#include <string.h>

typedef struct{
    char title[20];
    char writer[20];
    char publish[20];
    int page;
    int price;
} book;

void SearchBook(book books[],int size, char* title){
    int i;
    printf("도서명   저자  출판사  쪽수  가격   ");
    printf("------------------------------\n");
    for(i = 0; i < size ; i++){
        if (strcmp(title, books[i].title) == 0){
        printf("%4s %4s %4s %6d %8d\n",
             books[i].title, 
             books[i].writer,
             books[i].publish,
             books[i].page,
             books[i].price);
        }
    }
    if (i == size) printf("보유하지 않음\n");
}

int main(void)
{
        book books[] = {
        {"진실", "존", "세기", 300, 20000},
        {"사랑", "폴", "명품", 200, 15000},
        {"기쁨", "제임스", "쿠키", 250, 18000}
    };

    int size = sizeof(books) / sizeof(book);

    char title[10];
    printf("찾는 도서명을 입력 : ");
    scanf("%s", title);
    SearchBook(books, size, title);

    return 0;
}