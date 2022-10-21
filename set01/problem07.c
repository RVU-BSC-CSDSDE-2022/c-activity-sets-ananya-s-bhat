# include <stdio.h>
int input()
{
 int v;
  printf("enter the numbers");
    scanf("%d",&v);
  return v;
}
int sum(int n)
{
  int ;
 n=(n*(n+1))/2;
  return n;

}
 
void output(int n, int add)
{
  printf("sum of n numbers is%d",add);
}

 int main()
{int a=input();
  int c ;
   c=sum(a);
  output(a,c);
  return 0;
}
