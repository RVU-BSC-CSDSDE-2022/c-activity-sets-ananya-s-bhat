#include <stdio.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int composite(int n)
{
   int count=0;
  for(int i=1;i<=n;i++)
    if(n%i==0)
      count++;
  return count;      
}
void output(int n,int result)
{
  if(result>2)
    printf("%d is composite num",n);
  else
    printf("%d is not a composite number",n);
}
int main()
{
  int a,b;
  a=input();
  b=composite(a);
  output(a,b);
  return 0;
  
}