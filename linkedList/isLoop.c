#include "linkedList.h"
struct Node *first = NULL;
/**
 * @brief checks whether linked list has loop or not 
 *        using double pointer
 * 
 * @param node pointer to head of linked list
 * @return int 
 */
int isLoop(struct Node *node)
{
    struct Node *head = NULL, *tail = NULL;
    head = tail = node;
    do
    {
        tail = tail->next; //move to next 
        head = head->next; //move to next
        head = head ? head->next : head; //if not null move to next again
    } while (head && tail && head != tail);
    return tail == head ? 1 : 0;
}
int main()

{
    struct Node *t1, *t2;
    int A[] = {10, 20, 30, 40, 50};
    first=arrayToLL(A, 5);
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;
    printf("%d\n", isLoop(first));

    return 0;
}       