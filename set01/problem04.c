# include <stdio.h>
int addnum(int *a,int *b, int *sum)
{
  
  *sum= *a+*b;

}
int main()
{
  int a,b,sum;
  
  printf("enter first num");
  scanf("%d",&a);
  printf("enter second num");
  scanf("%d",&b);
  addnum(&a,&b, &sum);
  printf("sum is %d", sum);
  return 0;
  
  
}