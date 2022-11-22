#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct camel {
	float radius, height, length, weight ;
};

typedef struct camel Camel;
Camel input()
{
  Camel a;
   printf("enter the radius");
  if(scanf("%f",&a.radius)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("enter the height");
  if(scanf("%f",&a.height)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("enter the length");
  if(scanf("%f",&a.length)!=1)
  {
    printf("error");
    exit(0);
  }
  return a;
}
float find_weight(Camel a)
{
  const double pi = 22.0 / 7.0;
  a.weight = pi * (a.radius)*(a.radius)*(a.radius) * sqrt(a.height * a.length);
  return a.weight;
}
void output(Camel a )
{
  printf(" weight is %f",a.weight);
}
int main()
{
  Camel a;
  
  a=input();
  find_weight(a);
  output(a);
  return 0;
}