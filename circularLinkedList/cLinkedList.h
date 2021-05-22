#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}; /**
 * @brief creates a circular linked list from an array
 * 
 * @param A array to be converted as linked list
 * @param n size of the linked list
 * @return struct Node* 
 */
struct Node *createCLL(int A[], int n)
{
    int i;
    struct Node *Head; //init nodes

    struct Node *t, *last;
    Head = (struct Node *)malloc(sizeof(struct Node)); //allocate mem
    Head->data = A[0];                                 //assign head first node and never change head
    Head->next = Head;                                 //point next to itself to create a single element circular LL
    last = Head;
    for (i = 1; i < n; i++) // iterate for i in range of n
    {
        t = (struct Node *)malloc(sizeof(struct Node)); // alocate mem
        t->data = A[i];                                 // assign the data
        t->next = last->next;                           // point t next to last next to create loop
                                                        //i.e to head node to create the loop
        last->next = t;                                 //point last created node's next to newly created Node
        last = t;                                       // change the last node to newly created node
    }
    return Head;
}
void Display(struct Node *h)
{
    struct Node *Head;
    while (h != Head)
    {
        printf("%d ", h->data);
        h = h->next;
    }

    printf("%d \n", h->data);
}