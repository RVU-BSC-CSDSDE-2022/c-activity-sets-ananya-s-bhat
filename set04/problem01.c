#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("enter the 1 point ");
  scanf("%d%d",x1,y1);
  printf("enter the 2 point ");
  scanf("%d%d",x2,y2);
  
}
float find_distance(float x1, float y1, float x2, float y2)
{
  float a,b;
  b=(((y2-y1)*(y2-y1))
  a=sqrt(b);
  
}
void output(float x1, float y1, float x2, float y2, float distance);