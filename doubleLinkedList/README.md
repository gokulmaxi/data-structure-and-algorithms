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
## algorithm for adding node before any given node
>  **add_before_dll(head,item,p)**
  
  adds a single node with data item before p one given dll head
  1. set prev = p->prev
  2. [create new node ]
        1. allocate memeory for new node
        2. check if null on new node -true overflow err and return 
        3. set new->data = item
        4. set new ->prev = prev
        5. set new ->next = pointer p
 3. set prev->next = new
 4. set p->prev = new
 5. return
### similar algorithms
  * invert the above algorithm to get insert after p in given dll
  * use prev of head to insert at end of given ddl

## ddl forward traverse
>  dll_fTraverse(head)

  1. [check for empty list]
        * if head == NULL then 
          * print "ddl is empty"
          * return
  2. set temp = head
  3. while temp = null
    1. print temp->data
    2. set temp= temp->next
    3. continue to loop
  4. return

## search in doubly linked list
> dll_search(head,item)

  1. set tempNode = head and loc node to null
  2. [check for empty list]
        * if p = NULL then
          * print linked list is empty 
          * return
  3. while tempNode != NULL 
        * if tempNode->data = item 
          * set loc = tempNode 
          * return loc
        * else
          * tempNode = tempNode->next
  4. [end of while loop]
  5. print element not found 
  6. return

## deleting node form doubly linked list

### delete at beginning of the node
> dll_delete_head(head)

  1. [check for empty list]
    * if head =  NULL then 
        * print list is empty
        * return
  2. set temp = head
  3. set head = temp->next
  4. set head->prev = NULL
  5. set temp->prev and temp->next = NULL
  6. deallocate temp 
  7. return
