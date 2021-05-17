#include "linkedList.h"
struct Node *first;
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
int max(struct Node *p)
{
    int max = INT32_MIN;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
int main()
{
    int array[8] = {1, 3, 2, 1, 2, 1, 5, 7};
    arrayToLL(array,8);
    printf("%d",max(first));
    return 0;
}
