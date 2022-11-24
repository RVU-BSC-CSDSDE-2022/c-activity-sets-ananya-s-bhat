#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int a;
  float sum=0;
  printf("enter x");
  scanf("%d",&a);
  for(int i=1;i<a;i++)
    {
      if(i%2==0)
      {
       sum=200/(i+3); 
      }
      sum=200/(i+2);
      printf("%f",sum);
    }
  return 0;
}