# include <stdio.h>
struct complex
{
  float real;
  float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

Complex input_complex()
{
  Complex a;
  printf("enter the complex number");
  scanf("%f%f",&a.real,&a.imaginary);
  return a;
}
Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary= a.imaginary + b.imaginary;
  return sum;
}
void output(Complex a,Complex b,Complex sum)
{
  printf("the sum of complex numbers is %f %f", sum.real,sum.imaginary);
}
int main()
{
  Complex a,b,sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
  return 0;
}
