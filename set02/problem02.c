#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input(float *radius,float *height,float *length)
{
  printf("enter the radius");
  if(scanf("%f",&*radius)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("enter the height");
  if(scanf("%f",&*height)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("enter the length");
  if(scanf("%f",&*length)!=1)
  {
    printf("error");
    exit(0);
  }
  
}
float weight(float radius, float height, float length)
{
 double weight;
const double pi = 22.0 / 7.0;
 weight = pi * (radius)*(radius)*(radius) * sqrt(height * length);
 return weight; 
  
}
void output(float radius, float height, float length, 
 float weight)
{
  printf("the weight is %f",weight);
  
}
int main()
{
  float a,b,c,d;
  input(&a,&b,&c);
  d=weight(a,b,c);
  output(a,b,c,d);
  
  
}