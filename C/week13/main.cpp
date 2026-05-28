#include <stdio.h>
#include <stdlib.h>
#include "LinkedTree.h"

int main(void)
{
    // Level 0 : Root node
    NODE* node_root = insert_root('A');
    //Level 1
    NODE* node_B = insert_left_child(node_root, 'B');
    NODE* node_C = insert_right_child(node_root, 'C');
    //Level 2
    NODE* node_D = insert_left_child(node_B, 'D');
    NODE* node_E = insert_right_child(node_B, 'E');
    NODE* node_F = insert_left_child(node_C, 'F');
    NODE* node_G = insert_right_child(node_C, 'G');
    //Level 3
    NODE* node_H = insert_left_child(node_D, 'H');
    NODE* node_I = insert_left_child(node_E, 'I');
    NODE* node_J = insert_right_child(node_E, 'J');
    NODE* node_K = insert_right_child(node_G, 'K');

    remove_tree();

    return 0;
}

