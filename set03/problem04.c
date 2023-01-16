#include <stdio.h>
int input()
{
  int a;
  printf("enter the size of array");
  scanf("%d",&a);
  return a;
}
void input_array(int n,int a[n])
{
  printf("enter the numbers");
  for(int i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    
    }
}
int check(int n)
{
  int count=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        count++;
      }
      if(count==3){
        return(1);
      }
    }
  return(0);
}
int sum(int n,int a[n])
{
  int s=0;
  for(int i=1;i<=n;i++)
    {
     int k= check(a[i]);
      if(k==1)
        s=s+a[i];
    }
  return s;
}
void output(int sum)
{
  printf("%d",sum);
}
int main()
{
  int a;
  a=input();
  int b[a],c;
  input_array(a,b);
  c=sum(a,b);
  output(c);
  return 0;
  
}
