#include <stdio.h>
#include <stdlib.h>

typedef struct tree_node {
  int data;
  struct tree_node *right;
  struct tree_node *left;
  struct tree_node *parent;
} tree_node;

/**
 * @brief creates a new tree node 
 *
 * @param data data to be stored in the node 
 *
 * @return pointer to the new node 
 */
tree_node *new_tree_node(int data) {
  tree_node *n = malloc(sizeof(tree_node));
  n->data = data;
  n->right = NULL;
  n->left = NULL;

  return n;
}

int main() { return 0; }
