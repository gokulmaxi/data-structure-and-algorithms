#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
/**
 * linear search optimisation with transposition
*/
int LinearSearchT(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i-1]); // moves the key to i-1 position
            return i;
        }
    }
    return -1;
}
/**
 * linear search optimisation with move to head
*/
int LinearSearchH(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);// moves the position to start of the array
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr1 = {{2, 23, 14, 5, 6, 9, 8, 12}, 10, 8};
    printf("%d", LinearSearch(&arr1, 14));
    Display(arr1);
    return 0;
}