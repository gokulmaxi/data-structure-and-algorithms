#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // for using pre defined int (max/min)

struct Node
{
    int data;
    struct Node *next;
};

/**
 * @brief copies the array to linked list  
 * 
 * @param a array to be copied
 * @param n total length to be copied
 * 
 * @return returns the head node pointer
 */
struct Node * arrayToLL(int a[],int n){
    struct Node *firstNode,*tempNode,*lastNode;
    firstNode=(struct Node*)malloc(sizeof(struct Node)); //type casting the void pointer to node pointer and malloc
    firstNode->data=a[0];
    firstNode->next=NULL; //assgning null to avoid garbage easy termination of linked list
    lastNode=firstNode;     //copy the pointer to another pointer to avoid loss address
    for (int i = 1; i < n; i++)
    {
        tempNode=(struct Node*)malloc(sizeof(struct Node));
        tempNode->data=a[i];
        tempNode->next=NULL;
        lastNode->next=tempNode;
        lastNode=tempNode;
    }
    return firstNode;
}
/**
 * @brief displays a linked list 
 * 
 * @param p pointer to the starting point of linked list
 */
void displayLL(struct Node *p){
    while (p!=NULL)
    {
       printf("%d,",p->data);
       p=p->next;
    }
    
}