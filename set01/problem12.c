#include <stdio.h>
#include <stdlib.h>
struct _complex{
float real;
float imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int a;
  printf("enter the number of arrays");
  if(scanf("%d",&a)!=1) {
    printf("Error in user input no point continuing\n");
    exit(0);
  }
    
  return a;
    

}
Complex input_complex()
{
  Complex b;
  printf("enter the complex numbers");
  if(scanf("%f  %f",&b.real,&b.imaginary)!=1);
  return b;
}
void input_n_complex(int n ,Complex c[n])
{
  for(int i=0;i<n;i++)
    {
       c[i]=input_complex();
      }
  }
Complex add(Complex a,Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
  
}
 Complex add_n_complex(int n , Complex c[n]) 
{
  Complex sum={0,0};
  for(int i=0;i<n;i++)
    {
      sum=add(sum,c[i]);
    }
  return sum;
}
void output(Complex result)
{
  printf("%f%f",result.real,result.imaginary);
  }

int main()
{
  int p;
  p=get_n();
  Complex q[p],r;
  input_n_complex(p,q);
  r=add_n_complex(p,q);
  output(r);
  return 0;
  
}
