#include<stdio.h>
int main()
{
  int i,n=1,m,a;
  printf("\nEnter the limit:");
  scanf("%d",&i);
  printf("\nEnter the table's number:");
  scanf("%d",&a);
  for(i;i>=n;i--)
  {
    printf("\n%d*%d=%d",i,a,i*a);
  }
  return 0;
}
