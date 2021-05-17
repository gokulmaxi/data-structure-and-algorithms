#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
/**
 * @brief copies the array to linked list  
 * 
 * @param a array to be copied
 * @param n total length to be copied
 */
void arrayToLL(int a[],int n){
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node)); //type casting the void pointer to node pointer and malloc
    first->data=a[0];
    first->next=NULL; //assgning null to avoid garbage easy termination of linked list
    last=first;     //copy the pointer to another pointer to avoid loss address
    for (int i = 1; i < n; i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}
/**
 * @brief displays a linked list 
 * 
 * @param p pointer to the starting point of linked list
 */
void display(struct Node *p){
    while (p!=NULL)
    {
       printf("%d,",p->data);
       p=p->next;
    }
    
}
int main(int argc, char const *argv[])
{
    int array[8]={1,3,2,1,2,1,5,7};
    arrayToLL(array,8);
    display(first);
    return 0;
}
