#include <stdio.h>

int main() {
   int x = 45;
   
   if( x > 95) {
      printf( "Student is brilliant\n");
   } 
   else if( x < 30 || x < 40) {
      printf( "Student is poor\n");
   } 
   else if( x < 95 && x < 30 ) {
      printf( "Student is average\n");
   }
}
