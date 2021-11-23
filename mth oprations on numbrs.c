#include <stdio.h>
#include <math.h>

int main() {
   short  s;
   int    i;
   long   l;
   float  f;
   double d;

   printf( "sin(s): %f\n", sin(10));
   printf( "abs(i): %f\n", abs(1000));
   printf( "floor(f): %f\n", floor(230.47));
   printf( "sqrt(l): %f\n", sqrt(1000000));
   printf( "pow(d, 2): %f\n", pow(2.374, 2));
}
