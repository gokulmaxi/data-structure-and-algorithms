#include "doublelinkedlist.h"
#include <stdio.h>
#include <stdlib.h>
struct node * head;
/**
 * @brief add a data before the specified node p 
 * @param head head node of the dobly linked list
 * @param item data of the new node
 * @param p pointer to node for adding before
 */
void add_before_dll(struct node * head, int item , struct node *p){
        struct node * prevNode,*newNode;
        prevNode= p->prev;
        newNode=(struct node *)malloc(sizeof(struct node));
        if(!newNode){
                printf("memory not allocated ");
                return;
        }
        newNode->data=item;
        newNode->prev=prevNode;
        newNode->next=p;
        prevNode->next=newNode;
        p->prev=newNode;
}
int main (){
        int arr[]={1,3,4,5,6};
        head=createDDL(arr,5);
        Display(head);
        add_before_dll(head,2,head->next);
        Display(head);
}

