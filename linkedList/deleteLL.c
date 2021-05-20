#include "linkedList.h"
struct Node *first;

int delete (struct Node *p, int index)
{
    struct Node *tailNode;
    if (index == 1)
    {
        tailNode = p;
        p = tailNode->next;
        free(tailNode);
    }
    else if (index > 1)
    {

        for (int i = 1; i < index; i++)
        {
            tailNode = p;
            p = tailNode->next;
        }
        tailNode->next=p->next;
        free(p);
    }
}
int main()
{
    int array[8] = {1, 3, 2, 1, 2, 1, 5, 7};
    first = arrayToLL(array, 8);
    delete(first,4);
    displayLL(first);
    return 0;
}
