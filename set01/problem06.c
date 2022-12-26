# include <stdio.h>
# include <stdlib.h>
int input()
{
  int a;
  printf("enter the number");
  if(scanf("%d",&a)!=1)
  {
    printf("error");
    exit(0);
  }
  return a;
  
  
}
int compare(int a, int b, int c, int *largest)
{
  
  if(a>b)
  {
    *largest=a;
    
  }
  else if(a>c)
  {
    *largest=a;
  }
  
  else if (b>c)
  {
    *largest=b;
  }
  else
  {
     *largest=c;
  }
 
    return *largest; 
}
void output( int a , int b ,int c, int largest)
{
  printf("%d is the largest number \n",largest);
  
}
int main()
{
  int p,q,r,s;
  
  p=input();
  q=input();
  r=input();
  
  compare(p,q,r,&s);
  output(p,q,r,s);
  return 0;
  
  
}
