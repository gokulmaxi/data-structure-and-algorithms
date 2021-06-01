#include "linkedList.h"
struct Node *first = NULL, *second = NULL, *third = NULL;

/**
 * @brief reverses a linked list through swaping data from nodes
 * 
 * @param p pointer to the head node of linked list
 */
void Reverse1(struct Node *p)
{
    int *A, i = 0;
    struct Node *q = p;

    A = (int *)malloc(sizeof(int) * count(p));
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}
/**
 * @brief reverses an linked list through sliding pointer technique
 * 
 * @param p pointer to the linked list
 */
void Reverse2(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
/**
 * @brief reverses linked list using recursion 
 * 
 * @param q 
 * @param p 
 */
void Reverse3(struct Node *q, struct Node *p)
{
    if (p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
        first = q;
}
/**
 * method used in geeks for geeks sliding pointer
 */
struct Node* reverseList(struct Node *head)
    {
        struct Node* prev = NULL; // init required node pointers
        struct Node* current = head;
        struct Node* next = NULL;
        while (current != NULL) {
       
            next = current->next; // set next as currents next 
 
            current->next = prev; // 
 
            prev = current;
            current = next;
    }
    return prev;
    }

int main()
{

    int A[] = {10, 20, 40, 50, 60};
    first=arrayToLL(A, 5);

    // Reverse2(first);
    Reverse3(NULL,first);
    displayLL(first);
    return 0;
}
