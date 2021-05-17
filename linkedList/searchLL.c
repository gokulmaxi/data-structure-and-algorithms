#include "linkedList.h"
struct Node *first;

struct Node *search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

struct Node *searchOptimised(struct Node *p, int key)
{
    struct Node *tailNode = NULL;

    while (p != NULL)
    {
        if (key == p->data)
        {
            tailNode->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        tailNode = p;
        p = p->next;
    }
    return NULL;
}
int main(int argc, char const *argv[])
{
    int array[8] = {1, 3, 2, 1, 2, 1, 5, 7};
    first = arrayToLL(array, 8);

    printf("%d", searchOptimised(first, 2));

    displayLL(first);
    return 0;
}
