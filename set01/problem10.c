# include <stdio.h>
# include <string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

void input_two_strings(char *string1, char *string2)
{
  printf(" enter first string\n");
  scanf("%s", string1);
  printf("enter second string\n");
  scanf("%s", string2);
    
}
int stringcompare(char *string1, char *string2)
{
  char string[100];
    
      for(int i=0;string[i]!='\0';i++)
        {
          if(string1[i]!='\0'&&string2[i]=='\0')
          {
            return 1;
          }
          if(string2[i]!='\0'&&string1[i]=='\0')
          {
            return 2;
          }
          if(string1[i]==string2[i])
          {
            return 3;
          }
          if(string1[i]<string2[i])
          {
            return 1;
          
          if(string2[i]<string1[i])
          {
            return 2;
          }
        }
       
}
void output(char *string1, char *string2,int result)
{
  if(result==3)
  {
    printf("%s is equal to %s\n",string1,string2);
    
  }
  else if(result==1)
  {
    printf("%s is greater than %s\n",string2,string1);
  }
  else
  {
    printf("%s is greater than %s\n",string1,string2);
  }
}
int main()
{
  char a[100],b[100];
  int p;
  input_two_strings(a,b);
  p=stringcompare(a,b);
  output(a,b,p);
  return 0;
}