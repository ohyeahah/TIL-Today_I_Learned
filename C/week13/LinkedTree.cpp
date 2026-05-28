#include <stdio.h>
#include <stdlib.h>
#include "LinkedTree.h"

void remove_node(NODE* node);

NODE* root = NULL;

NODE* insert_root(char data)
{
    if (root)
    {
        remove_tree();
    }

    NODE* node = (NODE*)malloc(sizeof(NODE));
    if (node)
    {
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        root = node;
        printf("insert root : %c\n", node->data);
    }

    return node;
}

NODE* insert_left_child(NODE* parent, char data)
{
    NODE* node = NULL;
    if (parent)
    {
        node = (NODE*)malloc(sizeof(NODE));
        if(node)
        {
            node->data = data;
            node->left = NULL;
            node->right = NULL;
            parent-> left = node;
            printf("insert '%c' <- %c\n", node->data, parent->data);
        }
    }
    return node;
}

NODE* insert_right_child(NODE* parent, char data)
{
    NODE* node = NULL;
    if(parent)
    {
        node = (NODE*)malloc(sizeof(NODE));
        if (node)
        {
            node->data = data;
            node->left = NULL;
            node->right = NULL;
            parent->right = node;
            printf("insert %c -> '%c'\n", parent->data, node->data);
        }
    }
    return node;
}

void remove_node(NODE* node)
{
    if (node==NULL) return;

    remove_node(node->left);
    if (node->left)
    {
        printf("remove left : %c\n", node->left->data);
        free(node->left);
        node->left = NULL;
    }

    remove_node(node->right);
    if (node->right)
    {
        printf("remove right : %c\n", node->right->data);
        free(node->right);
        node->right = NULL;
    }

    if (root==node)
    {
        printf("remove root : %c\n", root->data);
        free(root);
        root = NULL;
    }
}

void remove_tree(void)
{
    if (root)
    {
        remove_node(root);
    }
}
