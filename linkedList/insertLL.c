#include "linkedList.h"
struct Node *first;
/**
 * @brief add a linked node to the linked list
 * 
 * @param pos position of the value to be added in
 * @param data data to be added
 * @param p head node of the linked list
 */
void insertLL(struct Node *p, int pos, int data)
{
    struct Node *tempNode, *tailNode;
    /**
     *  1. [Create the new node at begining]
            a) Allocate memory for NEW node.
            b) IF NEW = NULL then Print: “Memory not Available” and Return
            c) Set NEW→DATA = ITEM
            d) Set NEW→LINK = HEAD
        2. [Make the HEADER to point to the NEW node]
            Set HEAD = NEW
        3. Return
     * 
     */
    if (pos == 0)
    {
        tempNode = (struct Node *)malloc(sizeof(struct Node)); //1.a
        if (tempNode = NULL)    //1.b
        {
            printf("memory not available");
        }

        tempNode->data = data;  //1.c
        tempNode->next = first; //1.d
        first = tempNode;
    }
    else if (pos > 0)
    {
 
        
        tailNode = first;
        for (int i = 0; i < pos - 1; i++)
        {
            tailNode = tailNode->next;
        }
        tempNode = (struct Node *)malloc(sizeof(struct Node));
        tempNode->data = data;
        tempNode->next = tailNode->next;
        tailNode->next = tempNode;
    }
}
int main()
{
    int array[8] = {1, 3, 2, 1, 2, 1, 5, 7};
    first = arrayToLL(array, 8);
    insertLL(first, 4, 10);
    displayLL(first);
    return 0;
}
