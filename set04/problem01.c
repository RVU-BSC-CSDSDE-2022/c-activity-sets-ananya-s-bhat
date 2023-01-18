#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("enter the 1 point ");
  scanf("%f%f",x1,y1);
  printf("enter the 2 point ");
  scanf("%f%f",x2,y2);
  
}
float find_distance(float x1, float y1, float x2, float y2)
{
  float a,b;
  b=((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
  a=sqrt(b);
  return a;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("the distance between two points is%f",distance);
}
int main()
{
  float a1,a2,b1,b2,d;
  input(&a1,&a2,&b1,&b2);
  d=find_distance(a1,a2,b1,b2);
  output(a1,a2,b1,b2,d);
  return 0;
}