
#include "linkedList.h"
struct Node *first=NULL;
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
    first=arrayToLL(array,8);
    display(first);
    return 0;
}
