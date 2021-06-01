#include "doublelinkedlist.h"

#include <stdio.h>
struct node * headDll,*gLoc;
/**
 * @breif searches the specified item through dll head
 * @param head pointer to the head node of the dll
 * @param item item to be found in dll
 * @return pointer of the node with data item
 */
struct node * search(struct node * head,int item){
        struct node * tempNode, * location;
        tempNode= head;
        location=NULL;
        if (tempNode==NULL)
        {
         printf("the linked list is empty");
         return NULL;
        }
        while (tempNode!=NULL)
        {
                if (tempNode->data==item)
                {
                        location=tempNode;
                        return location;
                }
                else{
                        tempNode=tempNode->next;
                }
        }
        return NULL;
}

void main(){
        int arr[]={1,2,3,4,5,6};
        headDll=createDDL(arr,6);
        gLoc=search(headDll,4);
        printf("%d",gLoc->data);
}
