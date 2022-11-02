# include <stdio.h>
# include <math.h>
float input()
{
  int a;
  printf(" enter the numbers");
  scanf("%d",&a);
  return a;
}
float sqr_root(float n)
{
  float num=1;
  float x = n;

    while (x> num)
      {
        x= (x + num) / 2;
        num = n / x;
      }
    return x;

}
void output(float n, float sqrroot)
{
  printf("the squarerrot is %f",sqrroot);
}
int main()
{
  float p= input();
  float r= sqr_root(p);
  output(p,r);
  return 0;
}

