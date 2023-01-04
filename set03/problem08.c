#include <stdio.h>
typedef struct _triangle {
	float base,height, area;
} Tri;
int input()
{
  int a;
  printf("enter the number of triangles");
  scanf("%d",&a);
  return a;
}
Tri input_tri()
{
  Tri a;
  printf("enter the height");
  scanf("%f",&a.height);
  printf("enter the base");
  scanf("%f",&a.base);
  return a;
}
void input_tris(int n,Tri t[n])
{
  for (int i=0;i<n;i++)
    {
      t[i]=input_tri();
    }
}
void area(Tri *t)
{
  t->area=0.5*t->base*t->height;
}
void areas(int n,Tri t[n])
{
  for(int i=0;i<n;i++)
    {
      area(&t[i]);
    }
}
Tri small(int n,Tri t[n])
{
  Tri smallest=t[0];
  for(int i=0;i<n;i++)
    {
      if(t[i].area<smallest.area)
      {
        smallest.area=t[i].area;
        smallest.base=t[i].base;
        smallest.height=t[i].height;
      }            
    }
  return smallest; 
}
void output(Tri smallest)
{
  printf("the smallest among triangle is the triangle having height of %f,%f is %f",smallest.height,smallest.base,smallest.area);
}
int main()
{
  int a;
  a=input();
  Tri b[a],c;
  input_tris(a,b);
  areas(a,b);
  c=small(a,b);
  output(c);
  return 0;
}