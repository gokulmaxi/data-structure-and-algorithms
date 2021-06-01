#include "doublelinkedlist.h"

struct node *gHead; // pointer to global double linked list head
/**
 * @brief deletes the head of the given doble linked list
 * @param pointer to the head pointer of the doublelinkedlist
 */
void deleteHeadDll(struct node **head) // use a double pointer to change global pointer
{
        struct node *tempNode; // temporary node to store the head node to deallocate
        tempNode = *head;
        if (tempNode == NULL)
        {
                printf("list is empty");
                return;
        }
        *head = tempNode->next;
        (*head)->prev = NULL;
        tempNode->next = NULL; 
        tempNode->prev = NULL;
        free(tempNode);
        return;
}

int main()
{
        int arr[] = {1, 2, 3, 4, 5};
        gHead = createDDL(arr, 5);
        deleteHeadDll(&gHead);
        Display(gHead);
}
