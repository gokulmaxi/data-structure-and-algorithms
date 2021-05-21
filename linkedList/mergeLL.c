#include "linkedList.h"
struct Node *first = NULL, *second = NULL, *third = NULL;
/**
 * @brief merges two linked list as one 
 * 
 * @param firstLL pointer to the first linked list
 * @param secondLL pointer to the second linked list
 * @return struct Node* pointer to the merged linked list
 */
struct Node *mergeLL(struct Node *firstLL, struct Node *secondLL)
{
    struct Node *head = NULL, *tail = NULL;
    
    if (firstLL->data < secondLL->data)
    {
        head = tail = firstLL;   //assign all to first node and never change the head 
        firstLL=firstLL->next;   //move to next link
    }
    else
    {

        head = tail = secondLL; // assign  all to second node
        secondLL=secondLL->next; //move only second link
    }
    while (firstLL&&secondLL) // while both are not null
    {
        if (firstLL->data<secondLL->data)
        {
            tail->next=firstLL; // point the tail node next link to first link
            tail=firstLL; // point the tail node to first node to keep the last changed link
            firstLL=firstLL->next; // move the first node
        }
        // same as the above but use second linked list
        else
        {
            tail->next=secondLL; 
            tail=secondLL;
            secondLL=secondLL->next;
        }
        
    }
    return head;
}

int main()
{

    int A[] = {10, 20, 40, 50, 60};
    first = arrayToLL(A, 5);
    int B[] = {1, 30, 45, 55, 66};
    second = arrayToLL(B, 5);
    third=mergeLL(first,second);
    displayLL(third);
    return 0;
}