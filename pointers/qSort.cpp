#include <stdio.h>
#include <stdlib.h>

int values[] = { 'b', 'a', 'd', 'e', 'z' };

int cmpfunc (const void * a, const void * b) {
   return ( *(char*)a - *(char*)b );
}

int main () {
   int n;

   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%c ", values[n]);
   }

   qsort(values, 6, sizeof(char), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {   
      printf("%c ", values[n]);
   }
  
   return(0);
}