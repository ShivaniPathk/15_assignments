	#include <stdio.h>  
int main() 
{
int i=5, j;   
 j=i++;    
printf ("\nafter postfix increment i=%d j=%d", i,j);  
  i=5;  
  j=++i;    
printf ("\n after prefix increment i=%d j=%d",i,j);    
return 0;
 }
