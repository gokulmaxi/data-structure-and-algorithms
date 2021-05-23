/**
 * @file countLL.c
 * @author gokulakrishnan D P (dpgokulakrishnan.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
    1. If HEAD = NULL then
        i) Print: “The linked list is empty”
       ii) Return
    2. Temp = HEAD
    3. Repeat while Temp ≠ NULL
        i) Print: Temp→DATA
        ii) Set Temp = Temp→LINK
        iii)i++
    [End of Loop]
    4. Return
    
 */
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
struct Node *first;
int count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}
/**
 * @brief recursive way to count of elements in linked list 
 * 
 * @param p pointer to the linked list head node
 * @return int length of linked list 
 */
int countR(struct Node *p){
    if (p==0)
    {
        return 0;
    }
    else
    {
        return countR(p->next)+1;
    }
    
}
/**
 * @brief adds up all the values in a linked list
 * 
 * @param p pointer to the linked list head node
 * @return int 
 */
int sum(struct Node *p)
{
    int sum  = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int array[8]={1,3,2,1,2,1,5,7};
    first=arrayToLL(array,8);
    printf("%d",sum(first));
    return 0;
}
