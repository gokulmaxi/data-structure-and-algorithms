# Stack 

## Introduction
  1. non-primitive linear data structure
  2. similar to stack of books
  3. last in first out
  4. ***Definition***-sequential collection of elements into which new elements are inserted and deleted only at one end

## operations on stack 
  1. creation - creates and initialize the stack
  2. isEmpty - checks whether the stack is empty or not
  3. isFull - check whether the stack is full or not 
  4. Insertion(push) - insert an item to top of the stack
  4. deletion (pop) - delete an item at the top of the stack
  5. peek - returns the value of top of the stack without removing the element
>  stack can be implemented using both array and linked list

```c
struct stack 
{
        int a[MAXSIZE]; // array of size MAXSIZE macro
        int top;  // count of element in stack
}
```
## algorithm for push
  1. check for stack overflow
        * if top = maxsize -1 then 
          * print overflow
          * return
  2. increase top by 1 [top+1]
  3. insert the item to stack at position top
  4. return

## algorithm for pop
        1. check for empty stack
          * if true
            * print underflow
            * return
        2. set item = stack[top]
        3. decrease top by 1
        4. return
