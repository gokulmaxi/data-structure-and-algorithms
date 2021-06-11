#include <stdio.h>
int complete_node = 15;

// array to store the tree
char tree[] = {'\0', 'D', 'A',  'F',  'E', 'B',  'R', 'T',
               'G',  'Q', '\0', '\0', 'V', '\0', 'J', 'L'};

int get_right_child(int index) {
  if (tree[index] != '\0' && ((2 * index) + 1) <= complete_node)
    return (2 * index) + 1;
  return -1; // right child doesn't exist
}

int get_left_child(int index) {
  if (tree[index] != '\0' && (2 * index) <= complete_node)
    return 2 * index;
  return -1;
}

int get_parent(int index) {
  if (tree[index] != '\0' && index / 2 != '\0')
    return index / 2;
  else
    return -1;
}

int main() { printf("%c", tree[get_left_child(3)]); }
