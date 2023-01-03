#include <stdio.h>
#include <math.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
float borga(int x)
{
  int i,j;
  float value=1;
  int k;
  float sum=1;
  for((i=1)&&(j=3);value>0.000001;(i++)&&(j+2))
    {
      int b=1;
      for( k=1;k<=j;k++)
        {
        b=b*k;
        }
       
      value=(pow(x,i))/(b);
      printf("%f",value);
      sum=sum+value;
    }
  return sum;
}
void output(int x, float sum)
{
  printf("%f",sum);
} 
int main()
{
  int a;
  a=input();
  float b;
  b=borga(a);
  output(a,b);
  return 0;
}