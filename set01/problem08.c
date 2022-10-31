# include<stdio.h>
int input_array_size()
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
  int sum=0;
  for(int i=0;i<n;i++)
    {
    
      sum=sum+(int)arr[i];
  
      
    }
  return sum;
}
void output( int n, int arr[n],int sum)
{
 
  printf("%d",sum);
}
int main()
{

  int p=input_array_size();
  int b[p];
  input(p,b);
  int r=sum(p,b);
  output(p,b,r);
  return 0;

}
