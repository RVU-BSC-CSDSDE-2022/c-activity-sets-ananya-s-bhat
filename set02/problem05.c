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
  int i;
  float value=1;
  
  float sum=1;
  for(i=2;value>0.000001;i += 2)
    {
      
      value= (x * value)/(i*(i+1));
      sum = sum+value;
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
