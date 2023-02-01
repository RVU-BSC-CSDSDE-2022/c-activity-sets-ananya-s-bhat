#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* a, char* b);
void output(char *a, char *b, int index);
void input_string(char* a, char* b)
{
  printf("enter the string");
  scanf("%s",a);
  printf("enter the sub-string");
  scanf("%s",b);
  
}
int sub_str_index(char* a, char* b)
{
  int count=0;
  for(int i=0;a[i]!='\0';i++)
    {
      for(int j=0;b[j]!='\0';j++)
        {
          if(a[i]==b[j])
           {
              if(a[i+1]==b[j+1]||a[i-1]==b[j-1])
               count++;
              
           }
        }    
      
          
    }
  return count;
  
}

void output(char *a, char *b, int index)
{
  if(index==strlen(b))
  {
    for(int i=0;a[i]!='\0';i++)
    {
      if(a[i]==b[0])
        printf("the index is %d",i);
        
      }
    }
  else
    printf("the string is not a sub string");
  
}
int main()
{
  int r;
  char a[100];
  char b[100];
  input_string(a,b);
  r=sub_str_index(a,b);
  output(a,b,r);
  return 0;
}
  