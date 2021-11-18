#include <stdio.h>

main() {
   char ch[5] = {'H', 'e', 'l', 'l', 'o'};
   int i = 0;
        
   while( i < 5 ) {
      printf("ch[%d] = %c\n", i, ch[i] );
      i = i + 1;
   }
}
