#include "linkedList.h"
struct Node *first;

int max(struct Node *p)
{
    int max = INT32_MIN;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
int main()
{
    int array[8] = {1, 3, 2, 1, 2, 1, 5, 7};
    first=arrayToLL(array, 8);
    printf("%d", max(first));
    return 0;
}
