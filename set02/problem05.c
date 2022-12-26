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
  float value;
  int k;
  float sum=1+value;
  for((i=1)&&(j=3)&&(k=1);(value<0.000001)&&(k<j);(i++)&&(j+2))
    {  
      k
      value=(pow(x,i))/(j);
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
