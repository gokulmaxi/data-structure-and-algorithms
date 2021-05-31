#include"doublelinkedlist.h"
struct node * doublelink;
/**
 * @brief converts the given array to doublylinked list
 * @param array the array to be coverted into doublylinked list
 * @param length length of the array
 * @return doublylinked list of the array
 */
struct node * createDDL(int array[],int length){
        struct node * head = (struct node *)malloc(sizeof(struct node));
        struct node *last,*temp;
        if (!head)
        {
                printf("memeory not allocated properly");
        }
        head->data=array[0];
        head->next=NULL;
        head->prev=NULL;
        last=head;
        for (int i = 1; i < length; i++)
        {
                temp= (struct node *)malloc(sizeof(struct node));
                temp->data=array[i];
                last->next = temp;
                temp->prev=last;
                temp->next=NULL;
                last=temp;
        }
        return head;
}

int main(){
        int arr[]={1,2,3,4,5};
        doublelink=createDDL(arr,5);
        Display(doublelink);               
}



