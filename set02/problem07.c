#include <stdio.h>
int add(int x, float y);
int main()
{
   int x=9, y=8, sum;
   sum=add(x,y);
   return 0;
}

int add(int x, int y)
{
   int sum=x+y;
   return sum;
}    