
#include <stdio.h>
#include <string.h>
void input(char *a)
{
  printf("enter the string");
  scanf("%s",a);
}
void strr(char *a,char *r)
{
  int i,j,k;
   k=strlen(a);
  for(i=0,j=(k-1);i<=k&&j>=0;i++,j--)
  {
    r[j]=a[i];
    
  }
  
}
void output(char *r)
{
  for(int i=0;r[i]!='\0';i++)
    {
      printf("%c",r[i]);
    }
}
int main()
{
  char a[100],b[100];
  input(a);
  strr(a,b);
  output(b);
  return 0;
}

