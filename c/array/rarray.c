#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* function to generate and return random numbers */
int * getRandom( ) {
   static int  r[10];
   int i;

   /* set the seed */
   srand( (unsigned)time( NULL ) );
   for ( i = 0; i < 10; ++i) {
      r[i] = i;
   }
   
   return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p;
   int i;
   p = getRandom();
   
   for ( i = 0; i < 10; i++ ) {
      printf( "r[%d]=  %d  *(p + %d) : %p\n",i,p[i], i, (p + i));
   }
   return 0;
}