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
  int a1 = strlen(string1),b1 = strlen(string2);
  int i;
  if(a1 == b1)
  {
      for(i=0;i<a1;i++)
      {
        if(string1[i]==string2[i])
        {
          return(1);
          continue;
        }
        else if(string1[i]< string2[i])
        {
          return(2);
          break;
        }
        else
        {
          return(3);
          break;
        }
      } 
  }
}
void output(char *string1, char *string2,int result)
{
  if(result==1)
  {
    printf("%s is equal to %s\n",string1,string2);
    
  }
  else if(result==2)
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