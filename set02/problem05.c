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
  float i,j;
  float value;
  float k;
  float sum=1;
  i=1;
  j=3;
  while(value>0.000001);
    {
      for (int m=1;m<=j;m++)
        {
          k=k*m;
        }
      value=((pow(x,i))/(k));
      sum=sum+value;
      i++;
      j+2; 
      
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
