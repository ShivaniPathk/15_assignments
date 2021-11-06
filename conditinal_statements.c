#include <stdio.h>

int main() {
   int i = 0;
   do {
      if( i == 3 ) {
         i = i + 1;
         continue;
      }
      printf( "Hello, World!\n");
      i = i + 1;
   }
   while ( i < 5 );
}
