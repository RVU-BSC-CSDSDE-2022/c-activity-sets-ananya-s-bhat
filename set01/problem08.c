# include<stdio.h>
int size()
{
  int a;
  printf("enter the total number of values entered");
  scanf("%d",&a);
  return a;
}
void input(int n,int arr[n])
{
  for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    
}
int sum( int n,int arr[n])
{
  for(int i=0;i<n;i++)
    {
      int sum=0;
      sum=sum+*arr[i];
      
    }
  return n;
}
void output( int n, int arr[n],int sum)
{
  printf("%d",sum);
}
int main()
{
  int b;
  int p=size();
  input(p,b);
  int r=sum(p,b);
  output(p,b,r);
  return 0;

}
