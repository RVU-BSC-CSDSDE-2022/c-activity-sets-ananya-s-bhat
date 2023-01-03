#include <stdio.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int find_gcd(int a,int b)
{
  int gdb=0;
  for(int i=1;i<=a&&i<=b;i++)
    {
      if(a%i==0&&b%i==0)
        gdb=i;
    }
  return gdb;
}
void output(int gcd)
{
  printf("the gcd of 2 numbers is %d",gcd);
}
int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=find_gcd(a,b);
  output(c);
  return 0;
}