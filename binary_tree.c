#include <stdio.h>
#include <stdlib.h>

typedef struct tree_s {

    int value;
    struct tree_s *left;
    struct tree_s *right;

} tree_t;

void insert(tree_t** tree, int value);
void inOrder(tree_t* tree);

int main(int argc, char *argv[]) {

    tree_t *tree = NULL;

    insert(&tree, 2);
    insert(&tree, 1);
    insert(&tree, 4);
    insert(&tree, 3);
    inOrder(tree);

    return 0;
}


void insert(tree_t** tree, int value) {


    if(*tree == NULL) {

        *tree = malloc(sizeof(tree_t));
        (*tree)->value = value;
        (*tree)->left = NULL;
        (*tree)->right = NULL;
        printf("Value %d set as root.\n", value);
    }
    else if(value < (*tree)->value) {

        insert(&(*tree)->left, value);
        printf("Value %d added to the left node!\n", value);
    }
    else {

        insert(&(*tree)->right, value);
        printf("Value %d added to the right node!\n", value);
    }

}

void inOrder(tree_t* tree) {
    if(tree != NULL) {
        inOrder(tree->left);
        printf("%d\n", tree->value);
        inOrder(tree->right);
    }
}
