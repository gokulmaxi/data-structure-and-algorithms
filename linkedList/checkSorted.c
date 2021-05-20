#include "linkedList.h"
struct Node *first;
/**
 * @brief checks if an array is sorted or not
 * 
 * @param node pointer the node to be checked
 * @return int true or false
 */
int checkSorted(struct Node *node)
{
    int x = INT32_MIN;
    struct Node *tempNode = node;
    while (tempNode != NULL)
    {
        if (tempNode->data < x)
        {
            return 0;
        }
        x=tempNode->data;
        tempNode = tempNode->next;

    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int array[8] = {1, 2, 3, 1, 5, 6, 7, 8};
    first = arrayToLL(array, 8);
    printf("%d", checkSorted(first));
    return 0;
}
