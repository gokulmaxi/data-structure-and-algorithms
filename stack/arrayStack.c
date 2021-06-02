#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // macro to define the max size of structure

int count = 0;


 
/**
 * @brief structure to the stack 
 */
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st; // type def for easy and clean code

/**
 * @brief creates an empty stack (initialises)
 *
 * @param s pointer to the stack
 */
void createEmptyStack(st *s) {
  s->top = -1;
}

/**
 * @brief check whether the check whether the stack is full or not
 *
 * @param s pointer to the stack
 *
 * @return 1 if true and 0 if false
 */
int isfull(struct stack *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

/**
 * @brief checks if the given stack is empty
 *
 * @param s pointer to stack 
 *
 * @return 1 if true and 0 if false 
 */
int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

/**
 * @brief adds an element in one end of stack 
 *
 * @param s pointer to the stack
 * @param newitem value of the new item 
 */
void push(st *s, int newitem) {
  if (isfull(s)) {
    printf("STACK FULL");
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  count++;
}

/**
 * @brief pops an element from the end of the stack 
 *
 * @param s pointer to the stack
 */
int pop(st *s) {
  int data;
  if (isempty(s)) {
    printf("\n STACK EMPTY \n");
  } 
  else {
  data = s->items[s->top];
  s->top--;
  }
  count--;
  return data;
  printf("\n");
}

/**
 * @brief prints the whole stack
 *
 * @param s pointer to the stack 
 */
void printStack(struct stack  *s) {
  printf("Stack: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);
  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);
  printStack(s);
  isfull(s); 
  pop(s);

  printf("\nAfter popping out\n");
  printStack(s);
}
