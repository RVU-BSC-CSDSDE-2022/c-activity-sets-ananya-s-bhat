#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int input_number()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
   int count=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
        count++;
    }
  if(count==2)
    return 0;
}
void output(int n, int result)
{
  if(result==0)
    printf("%d is prime number",n);
  else
    printf("%d is not a prime number",n);
  
}
int main()
{
  int a,b;
  a=input_number();
  b=is_prime(a);
  output(a,b);
  return 0;
}