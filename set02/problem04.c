#include <stdio.h>
#include <stdlib.h>


void input_camel_details(float *radius, float *height, float *length)
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
int find_mood(float radius, float height, float length)
{
  if((radius < height)&&(radius<length))
  
    return 1;
  
  else if((radius > height)&&(height<length))
  
    return 2;
  
  else
  
    return 3;
  }
  
  void output(float radius, float height, float length, int mood)
  {
    if(mood==1)
    {
      printf("camel is sick");
    }
    else if(mood==2)
    {
      printf("camel is happy");
    }
    else
    {
      printf("camel is tense");
    }
  }
  int main()
  {
   float a,b,c;
    int d;
  input_camel_details(&a,&b,&c);
  d=find_mood(a,b,c);
  output(a,b,c,d);
    return 0;
   
  }
  
  
