#include <stdio.h>
/**
 * calculates the total no of combination possibilites gives n possiblities
 * @param n total number of objects in the set 
 * @param r number of choosing objects from the set 
*/
int NCR(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
int main()
{
    printf("%d \n", NCR(5, 3));
    return 0;
}