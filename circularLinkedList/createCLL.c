#include "cLinkedList.h"
struct Node *linkedlist;
struct Node *create(int A[], int n)
{
    int i;
    struct Node *Head;

    struct Node *t, *last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
    return Head;
}
int main(int argc, char const *argv[])
{
    int A[] = {2, 3, 4, 5, 6};
    linkedlist=create(A, 5);
    Display(linkedlist);
    return 0;
}
