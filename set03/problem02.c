#include <stdio.h>
int input()
{
  int a;
  printf("enter the sides");
  scanf("%d",&a);
  return a;    
}
int check(int a,int b,int c)
{
  if(a==b||a==c||b==c)
    return 1;
}
void output(int a,int b,int c ,int isscalene)
{
  if(isscalene==1)
    printf("the triangle of sides %d,%d and %d is scalene",a,b,c);
  else
    printf("the triangle of sides %d,%d and %d is not scalene",a,b,c);   
  
}
int main()
{
  int a,b,c,d;
  a=input();
  b=input();
  c=input();
  d=check(a,b,c);
  output(a,b,c,d);
  return 0;
  
  
}