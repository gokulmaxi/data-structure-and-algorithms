#include "linkedList.h"
struct Node *first;
/**
 * @brief add a linked node to the linked list
 * 
 * @param pos position of the value to be added in
 * @param data data to be added
 * @param p head node of the linked list
 */
void insertLL(struct Node *p,int pos ,int data)
{
    struct Node *tempNode,*tailNode;
  if (pos==0)
  {
        tempNode = (struct Node*)malloc(sizeof(struct Node));
        tempNode->data=data;
        tempNode->next=first;
        first=tempNode;
  }
  else if (pos>0)
  {
      tailNode=first;
      for (int i = 0; i < pos-1; i++)
      {
          tailNode=tailNode->next;
      }
      tempNode = (struct Node*)malloc(sizeof(struct Node));
      tempNode->data=data;
      tempNode->next=tailNode->next;
      tailNode->next=tempNode;
  }
     
}
int main()
{
    int array[8] = {1, 3, 2, 1, 2, 1, 5, 7};
    first = arrayToLL(array, 8);
    insertLL(first,4,10);
    displayLL(first);
    return 0;
}
