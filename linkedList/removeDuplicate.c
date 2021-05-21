#include "linkedList.h"
struct Node *first;

int removeDuplicate(struct Node *node)
{
    struct Node *tailNode = node;
    struct Node *tempNode = tailNode->next;
    while (tempNode != NULL)
    {
        if (tempNode->data !=tailNode->data)
        {
            tailNode=tempNode;
            tempNode=tailNode->next;
        }
        else
        {
            tailNode->next=tempNode->next;
            free(tempNode);
            tempNode=tailNode->next;
        }

    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int array[8] = {1, 1, 3, 4, 5, 5, 6, 8};
    first = arrayToLL(array, 8);
    removeDuplicate(first);
    displayLL(first);
    return 0;
}
