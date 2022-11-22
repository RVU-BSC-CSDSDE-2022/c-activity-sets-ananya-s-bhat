# include <stdio.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
  
  
}
int compare(int a, int b, int c, int *largest)
{
  
  if(a>b && a>c)
  {
    *largest=a;
    
  }
  else if (b>a && b>c)
  {
    *largest=b;
  }
 else
    *largest=c;
   return *largest; 
}
void output( int a , int b ,int c, int largest)
{
  printf("%d is the largest number ",largest);
  
}
int main()
{
  int p,q,r,s;
  
  p=input();
  q=input();
  r=input();
  
  compare(p,q,r,s);
  output(p,q,r,s);
  return 0;
  
  
}
