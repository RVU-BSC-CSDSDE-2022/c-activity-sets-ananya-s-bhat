#include <stdio.h>
#include <stdlib.h>

int input_n()
{
  int a;
  printf("enter the number of values declaring in array");
  if(scanf("%d",&a)!=1)
  {
    printf("error");
    exit(0);
  }
  return a;
}
void input(int n,int a[n])
{
  printf("enter the numbers");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
float average(int n,int a[n])
{
  float sum=0;
  int count=0;
  for(int i=0;i<n;i++)
    {
      if(a[i]%2!=0)
      {
        sum=a[i]+sum;
        count++;
      }
      
    }
  float avg=sum/count;
  return avg;
}
void output(float avg)
{
  printf("the average is %f",avg);
}
int main()
{
  int p;
  float r;
  p=input_n();
  int q[p];
  input(p,q);
  r=average(p,q);
  output(r);
  return 0;
}
