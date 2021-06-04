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

## evaluation of arithmetic expression
**expression** - data items combined with several operators
  
**arithmetic expression** - expression with arithmetic operators
  
  There are three arithmetic notations 
  1. Infix
  2. Prefix 
  3. postfix

#### Infix notations
  binary operators appears b/w two operands  
        
        op1 operator op2
         a     +      b

#### Prefix notations
  binary operator  appear before operands

        operator op1 op2 
           +      a   b
#### postfix notations 
  binary operator appear after operands

        op1 op2 operator
         a   b     +
### Pros and cons
  * Cons of Infix 
    *  evaluated with more than one traversal 
    *  does not define proper order to calculate
    *  parenthesis is used to increase the priority. Therefore causing change of order in calculation
    *  also parenthesis is not resource efficient as it is required to store seperately and calculate seperately
  * pros of postfix
    * calculates in one pass Therefore faster than infix
    * already arranged in order and no need of extra operators like parenthesis 

### converting infix to postfix
  * order is evaluated using fixed priority to each operator
  * the operator inside parenthesis are given high priority 
  * when two operator with same priority then order is calculated using associativity order
  * priorities are given in below table

   | **operator**    | **description**    | **priority**    |
   |---------------- | ---------------  | --------------- |
   | + -             | unary operator   | 5    |
   | ^               | power operator   | 4    |
   |* / %            | multiplication,division,remainder | 3 |
   | + -             | addition and subtraction | 2 |
   | < <= > >= == != | relational operator | 1 | 

##Algorithm to convert an infix to postfix notation
        
        Postfix(q) // q = infix expresion        
