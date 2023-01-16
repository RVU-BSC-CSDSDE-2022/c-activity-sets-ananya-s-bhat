
#include <stdio.h>
    float input();
    float square_root(float n);
    void output(float n, float sqrroot);
    float input()
    {
      float a;
      printf("enter the number");
      scanf("%f",&a);
      return a;
    }
     float square_root(float n)
    {
      float x=0;
      float s;
      
      if(fabs(s*s)-n)>0.0001)    
        {
          s=(((x+n)/x)/2);
          x=s;
       }
    
  return (s);
      }
void output(float n, float sqrroot)
{
  printf("the square root of %f is %f",n,sqrroot);
}
int main()
{
  float a,b;
  a=input();
  b=square_root(a);
  output(a,b);
  return 0;
}

