#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int find_fibo(int n)
{
  if(n>=1)
  {
    int a=0,b=1,c=0;  
    for (int i=1;i<=n;i++)
    {
      a=b;
      b=c;
      c=a+b;
    }
  return c;
    
  }
    
  else
   return 0;
  
}
void output(int n, int fibo)
{
  printf("fibo(%d)=%d",n,fibo);
}
int main()
{
  int a,b;
  a=input();
  b=find_fibo(a);
  output(a,b);  
}

