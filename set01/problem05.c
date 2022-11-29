# include <stdio.h>
#include <stdlib.h>
int input()
{
  int a;
  printf("enter the number");
  if(scanf("%d",&a)!=1)
  {
    printf("error");
    exit(0);
  }
  return a;
  
  
}
int compare(int a, int b, int c)
{
  int largest;
  if(a>b && a>c)
  {
    largest=a;
    
  }
  else if (b>a && b>c)
  {
    largest=b;
  }
 else
    largest=c;
   return largest; 
}
void output( int a , int b ,int c, int largest)
{
  printf("%d is largest number ",largest);
  
}
int main()
{
  int p,q,r,s;
  
  p=input();
  q=input();
  r=input();
  
  s=compare(p,q,r);
  output(p,q,r,s);
  return 0;
  
  
}