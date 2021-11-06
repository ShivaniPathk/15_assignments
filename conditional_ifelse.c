#include <stdio.h>

int main() {
   int x = 49;
   
   if( x > 87) {
      printf( "Student is brilliant\n");
   } 
   else if( x < 34) {
      printf( "Student is poor\n");
   } 
   else if( x < 87 && x > 34 ) {
      printf( "Student is average\n");
   }
}
