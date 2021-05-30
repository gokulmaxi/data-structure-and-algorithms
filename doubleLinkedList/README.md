# double linked list
## introduction    
collection of node with three parts

        1. data  - contains the data
        2. right-link - address of the right node
        3. left-link - address of the left nodes 
A generic double list code

```c
struct node 
{
    int data ;
    struct node* next;
    struct node* prev;
}
```

## algorithm for creating double linked list

    1. create a new node
        1. allocate memory for new node
        2. if null print error "no memory"
        3. set new->data = data
        4. set new->prev = null 
        5. set new->next = null
    2. set last = head and traverse through list and append 
        1. for i in list size  
            * allocate memeory to temp node
            * set temp->data = a[i]
            * set last->next=temp
            * set temp->prev=last
            * set last = temp
            * continue till i > list size
