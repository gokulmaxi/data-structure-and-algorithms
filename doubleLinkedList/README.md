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
>
>  use a double pointer since head is only equal to the value of global head but
>  does not changes the value as like reference which change the actual value passed
>  for better understand analyse the below code
  <details>
  <summary>code example to explain above statement</summary>

  ```c
/* function definition to swap the actual  values passed */
void swap(int *x, int *y) {

   int temp;
   temp = *x;    /* save the value at address x */
   *x = *y;      /* put y into x */
   *y = temp;    /* put temp into y */
  
   return;
}

/* function definition to swap the values but only inside the function
 * not globally
*/
void swap(int x, int y) {

   int temp;
   temp = x;    /* save the value at address x */
   x = y;      /* put y into x */
   y = temp;    /* put temp into y */
  
   return;
}
  ```
  
  </details>
  
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
#### similar algorithms
* for deleting the end node traverse to the end of dll and use the above algorithm Accordingly
* for deleting node before specified pointer inside ddl set a tempNode 
 as p->prev and delete accordingly.
* set tempnode as p->next for deleting node after specified pointer
* for deleting node at specified index traverse through list until specified index and use the above algorithm accordingly.
* for deleting a node by specified value use search algorithm to return address of the node and use the algorithm accordingly. 
 -------
##some important points 

  * time complexity for insertion and deletion in O(1) as there is no movements of nodes
  * time complexity of traversal is O(n)
  * **circular double linked list**- head->prev = tail and tail->next = head
  * dll consumes more mem for address storage
  * direct access is not possible only through traversal
  * searching is slow as only linear search is possible
 
