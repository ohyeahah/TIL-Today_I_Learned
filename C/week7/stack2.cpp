#include <string.h>
#include "StackArrayBook.h"

bool PutBook(const char* title, const char* publisher);
Book PickBook();

int main(void)
{
    PutBook("C 프로그래밍", "생능 출판사");
    PutBook("데이터베이스", "한빛 출판사");
    PutBook("컴퓨터 그래픽스", "길벗 출판사");
    PutBook("전산 수학", "대학출판사");
    PutBook("자료구조", "O'reilly");
    printf("%d개의 도서가 샇여있습니다.\n",size());
    PickBook();
    printf("%d개의 도서가 샇여있습니다.\n",size());
    PutBook("알고리즘", "홍릉 출판사");
    printf("%d개의 도서가 샇여있습니다.\n",size());

    return 0;
}

bool PutBook(const char* title, const char* publisher)
{
    Book book;
    strcpy(book.title, title);
    strcpy(book.publisher, publisher);
    bool ret = push(book);
    if(ret) printf("%s의 %s 도서를 쌓았습니다.\n", publisher, title);
    return ret;
}

Book PickBook()
{
    Book book;
    if (pop(&book)) printf("집어 들은 도서는 %s의 %s입니다.\n", book.publisher, book.title);

    return book;
}