#include <stdio.h>
void input(char *name)
{
  
  printf("enter the name of camel");
  scanf("%s",name);
    
}
int name(char *c)
{
  int count1=0,count2=0;
  for(int i=0;c[i]!='\0';i++)
    if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
      count1++; 
    else
      count2++;
  if((count1>=2)&&(count2>=2))
    return 1;
  
}
void output(int res)
{
  if(res==1)
  {
    printf("the camel have good name");
    
  }
  else 
  {
    printf("the camel does not have good name");
  }
    
}
int main()
{
  char a[100];
  int r;
  input(a);
  r=name(a);
  output(r);
  return 0;
}