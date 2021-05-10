#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
/**
 * display all the values of an array
 * @param array structure of the array to be printed
*/
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
/**
 * appends an integer to an array
 * @param arr pointer to the structure of Array
 * @param x value of integer to be apended
*/
void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
/**
 * inserts an integer to an array at specific position 
 * @param arr pointer to the structure of Array
 * @param index position to be inserted at
 * @param x value of integer to be apended
*/
void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)//make sure the index is not of bound
    {
        for (i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];   //shifts the value towards the right 
        arr->A[index] = x; //changes the value 
        arr->length++; //increases the length of the array
    }
}
int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    Append(&arr1, 10);
    Insert(&arr1, 0, 12);
    Display(arr1);
    return 0;
}