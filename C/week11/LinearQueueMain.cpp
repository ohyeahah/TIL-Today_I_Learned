#include "LinearQueue.h"
#include <stdio.h>

int main(void)
{
    char ch;
    enqueue('A');
    enqueue('B');
    enqueue('C');
    printf("큐의 요소 %d개\n", get_size());
    dequeue();
    dequeue();
    dequeue();
    printf("큐의 상태 : %s\n", is_empty() ? "비었음" : "요소 있음");
    enqueue('D');
    enqueue('E');
    enqueue('F');
    printf("큐의 요소 %d개\n", get_size());
    enqueue('G');
    enqueue('H');
    printf("큐의 상태 : %s\n", is_full() ? "만땅" : "공간 있음");
    return 0;
}