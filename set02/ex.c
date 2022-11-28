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
int input(int n,int a[])
{
  printf("enter the numbers");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  return a;
}
float average(int n,int a[])
{
   float avg=0;
  for(int i=0;i<n;i++)
    {
      if(i%2!=0)
      {
        avg=a[i]+avg;
        printf("%f",avg);
      }
      
    }
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
  int q[p]=input(p,q);
  r=average(p,q);
  output(r);
  return 0;
}
