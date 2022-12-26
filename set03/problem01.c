#include <stdio.h>
void input(float *base,float *height)
{
  printf("enter the height");
  scanf("%f",&*height);
  printf("enter the base");
  scanf("%f",&*base);
  
}
void find_area(float base , float height, float *area)
{
  *area=base*height*0.5;
  printf("%f",base);
}
void output(float base, float height, float area)
{
  printf("the area of height %f and base %f is %f",height,base,area);
}
int main()
{
  float b,h;
  input(&b,&h);
  float a;
  find_area(b,h,&a);
  output(b,h,a);
  return 0;
      
}
