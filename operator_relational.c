#include <stdio.h>

int main() {
   int a, b;
   
   a = 70;
   b = 10;
   
   if( a == 70 ) {

      printf( "a is equal to 10\n");
   }
   
   if( b == 70 ) {

      printf( "b is equal to 10\n");
   }
   
   if( a < b ) {

      printf( "a is less than b\n");
   }
   
   if( a != b ) {
	
      /* If a is not equal to b then the value will be true i.e. 1 else false i.e. 0 */
      printf( "a is not equal to b\n");
   }
}