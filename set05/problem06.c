#include <stdio.h>
#include <stdlib.h>

int input_n()
{
  int a;
  printf("enter the number of values declaring in array");
  if(scanf("%d"&a)!=1)
  {
    printf("error");
    exit(0);
  }
  return a;
}
void input(int n,int a[n]);
{
  printf("enter the numbers")
  for(int i=0;i<n;i++)
    {
      scanf("%d"&a[i]);
    }
}
float average(int n,int a[n])
{
  avg=0;
  for(int i=0;i<n;i++)
    {
      if(i%2!=0)
      {
        avg=a[i-1] +avg;
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
  int p,q;
  float r;
  p=input_n();
  input(p,q[p]);
  r=average(p,q[p]);
  output(r);
  return 0;
}