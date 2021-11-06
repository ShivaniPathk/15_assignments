#include <stdio.h>

int main() {
   int a = 2;
   int b = 1;

   if ( a && b ) { /* Both have to be True */
	
      printf("This will never print because condition is false\n" );
   }
   if ( a || b ) { /* Only one has to be true */
	
      printf("This will be printed print because condition is true\n" );
   }
   if ( !(a && b) ) { /* Opposite or Not of what will be the result of Initial Bracket*/
	
      printf("This will be printed print because condition is true\n" );
   }
}