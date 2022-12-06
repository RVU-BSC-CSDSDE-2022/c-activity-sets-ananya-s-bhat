# include <stdio.h>
# include <stdlib.h>
int input()
{
 int v;
  printf("enter the numbers");
   if( scanf("%d",&v)!=1)
   {
     printf("error");
     exit(0);
   }
  return v;
}
int sum(int n)
{
   int sum=0;
  for(int i=1;i<=n;i++)
    {
      sum=sum+i;
    }
 
  return sum;

}
 
void output(int n, int add)
{
for(int i=1;i<n;i++)
  {
    printf("%d +",i);
}
  printf("%d = %d",n,add);
  }
  

 int main()
{int a=input();
  int c ;
   c=sum(a);
  output(a,c);
  return 0;
}
