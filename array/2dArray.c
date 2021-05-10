#include <stdio.h>
#include <stdlib.h>
int main()
{

    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}}; //  2-d Array completely craeted in stack
    int *B[3];                                                //array of pointer
    int **C;                                                  //double pointer
    int i, j;
    //each pointer in array is pointed to new array
    //partial stack partial heap
    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));
    //double pointer is pointing to an array of pointers which then points to multiple arrays
    //completely in heap memory
    C = (int **)malloc(3 * sizeof(int *));
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}