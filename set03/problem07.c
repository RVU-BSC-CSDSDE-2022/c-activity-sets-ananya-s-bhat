#include <stdio.h>
typedef struct _triangle{
float base,height,area;
} Tri;
Tri input()
{
  Tri a;
  printf("enter the height");
  scanf("%f",&a.height);
  printf("enter the base");
  scanf("%f",&a.base);
  return a;
}
void area(Tri *a)
{
  a->area=0.5 * a->height * a->base;
}
void output(Tri a)
{
  printf("the area is %f",a.area);
}
int main()
{
  Tri a;
  a=input();
  area(&a);
  output(a);
  return 0;
}