# include <stdio.h>
#include <stdlib.h>
int addnum(int a,int b);
int main()
{  
  int a,b;
  printf("enter first num\n");
  if(scanf("%d", &a)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("enter second num\n");
  if(scanf("%d", &b)!=1)
  {
    printf("error");
    exit(0);
  }
  int c;
  c=addnum(a,b);
  
  printf("the sum is %d",c);
  return 0;
  
}
int addnum(int a,int b)
{
  int c;
 c=a+b; 
 return c;
  
}