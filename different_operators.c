#include <stdio.h>

int main() {
   int a, b, c;
   
   a = 60;
   b = 30;
   
   c = a + b;   
   printf( "Value of c = %d\n", c);
   
   c = a - b;   
   printf( "Value of c = %d\n", c);
   
   c = a * b;   
   printf( "Value of c = %d\n", c);
   
   c = b / a;   
   printf( "Value of c = %d\n", c);
   
   c = b % a;   
   printf( "Value of c = %d\n", c);
}