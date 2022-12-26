#include <stdio.h>
int add(int x, int y);
int main()
{
      int x=8,y=9, sum=0;
      sum=x+y;
      sum= add(x,y);
      printf("sum is %d", sum);
      return 0;
}
   int  add(int x, int y)
   {
        int sum=x+y;
        return sum;
         
    }