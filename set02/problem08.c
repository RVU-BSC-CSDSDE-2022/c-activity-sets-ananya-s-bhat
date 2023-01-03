#include <math.h>
#include <stdio.h>
typedef struct _camel {
    float radius, height, length, weight;
} Camel;
void input(int n,Camel c[n],float *totalweight)
{
  printf("enter the number of camels");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      printf("enter the height of camel %d",i);
      scanf("%f",&c[i].height);
      printf("enter the radius of camel %d",i);
      scanf("%f",&c[i].radius); 
      printf("enter the length of camel %d",i);
      scanf("%f",&c[i].length);
      
    }
  printf("enter the truck weight");
  scanf("%f",totalweight);
  float total_weight = tw(n,c,*totalweight);
  output(total_weight);
}
void find_camel_weight(int n,Camel *c[n])
{
  c[n]->weight=3.14*c[n]->radius*sqrt(c[n]->length*c[n]->height);
  
}
float tw(int n,Camel c[n],float truckw)
{
  for(int i=0;i<n;i++)
    {
      find_camel_weight(i,&c);
      truckw=truckw+c[i].weight;
    }
  return truckw;
}
void output(float tw)
{
  printf("the total weight of truck is %f",tw);
}
int main()
{
  int a=0;
  Camel b[a];
  float c=0.0;
  input(a,b,&c);
  return 0;
}