#include <stdio.h>

int main() {
   short  s;
   int    i;
   long   l;
   float  f;
   double d;

   s = 92;
   i = 7234;
   l = 14343425;
   f = 43.53;
   d = 54325.657;

   printf( "s: %d\n", s);
   printf( "i: %d\n", i);
   printf( "l: %ld\n", l);
   printf( "f: %.3f\n", f);
   printf( "d: %.3f\n", d);
}