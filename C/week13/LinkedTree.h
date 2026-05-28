typedef struct treeNode {
    char data;
    struct treeNode* left;
    struct treeNode* right;
} NODE;

NODE* insert_root(char data);
NODE* insert_left_child(NODE* parent, char data);
NODE* insert_right_child(NODE* parent, char data);
void remove_tree(void);