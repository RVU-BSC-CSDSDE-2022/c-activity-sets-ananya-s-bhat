#include <stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int input_array_size()
{
  int a;
  printf("enter the size of array");
  scanf("%d",&a);
  return a;
}
void init_array(int n, int a[n])
{
  for(int i=2;i<=n;i++)
    a[i]=i;
}
void erotosthenes_sieve(int n, int a[n])
{
  for(int i=2;i<=n;i++)
    {
      if((i!=2&&i!=3&&i!=5&&i!=7)&&(a[i]%2==0||a[i]%3==0||a[i]%5==0||a[i]%7==0))
      {
        a[i]=0;
      }
    }
}
void output(int n, int a[n])
{
  printf("the prime numbers are\n");
  for(int i=2;i<=n;i++)
    {
      if(a[i]==0)
        continue;
      else    
        printf("%d\n",a[i]);
    }
}
int main()
{
  int a;
  a=input_array_size();
  int b[a];
  init_array(a,b);
  erotosthenes_sieve(a,b);
  output(a,b);
  return 0;
}