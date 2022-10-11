# include <stdio.h>
int addnum(int a,int b);
int main()
{  
  int a,b;
  printf("enter first num\n");
  scanf("%d", &a);
  printf("enter second num\n");
  scanf("%d", &b);
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