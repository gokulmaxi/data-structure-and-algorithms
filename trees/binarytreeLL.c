#include <stdio.h>
#include <stdlib.h>

typedef struct tree_node {
  char data;
  struct tree_node *right;
  struct tree_node *left;
  struct tree_node *parent;
} tree_node;

tree_node *new_tree_node(char data) {
  tree_node *n = malloc(sizeof(tree_node));
  n->data = data;
  n->right = NULL;
  n->left = NULL;
  n->parent = NULL;

  return n;
}

typedef struct tree {
  tree_node *root;
} tree;

tree *new_tree(tree_node *n) {
  tree *t = malloc(sizeof(tree));
  t->root = n;

  return t;
}

int main() {
  /*

           D
          / \
         /   \
        /     \
       A       F
      / \     / \
     /   \   /   \
    E     B R     T
   / \     /     / \
  G   Q   V     J   L
  */

  tree_node *d, *a, *f, *e, *b, *r, *t1, *g, *q, *v, *j, *l;
  d = new_tree_node('D');
  a = new_tree_node('A');
  f = new_tree_node('F');
  e = new_tree_node('E');
  b = new_tree_node('B');
  r = new_tree_node('R');
  t1 = new_tree_node('T');
  g = new_tree_node('G');
  q = new_tree_node('Q');
  v = new_tree_node('V');
  j = new_tree_node('J');
  l = new_tree_node('L');

  tree *t = new_tree(d);

  t->root->right = f;
  t->root->left = a;

  /*

         D
        / \
       /   \
      /     \
     A       F
  */

  a->right = b;
  a->left = e;

  f->right = t1;
  f->left = r;

  e->right = q;
  e->left = g;

  r->left = v;

  t1->right = l;
  t1->left = j;

  return 0;
}
