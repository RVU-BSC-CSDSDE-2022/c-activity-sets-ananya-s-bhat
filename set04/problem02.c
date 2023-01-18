#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the first point");
  scanf("%f%f",x1,y1);
  printf("enter the second point");
  scanf("%f%f",x2,y2);
  printf("enter the third point");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int r= x1 * (y2 - y3)+ x2 * (y3 - y1)+ x3 * (y1 - y2);
  if(r==0)
    return 1;
  return 0;
 
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if(result==0)
  {
    printf("the points form triangle");
  }
   else
     printf("the points does not form triangle");  
}
int main()
{
  float x1,x2,y1,y2,z1,z2;
  int r;
  input_triangle(&x1,&x2,&y1,&y2,&z1,&z2);
  r=is_triangle(x1,x2,y1,y2,z1,z2);
  output(x1,x2,y1,y2,z1,z2,r);
  return 0;
  
  
}