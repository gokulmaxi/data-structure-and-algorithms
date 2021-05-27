#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *prev;
    struct node *next;
};

void Display (struct node *head){
    struct node * temp;
    while (temp != NULL){
    printf("%d ,",temp->data);
    temp=temp->next;
    }
}



