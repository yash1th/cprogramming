//Rewrite the compareStrings function from Chapter 10
//to use character pointers instead of arrays.
#include<stdio.h>
int compareStrings(char *,char *);
int main()
{
  char *text1="heylo";
  char *text2="hello";
  int result=compareStrings(text1,text2);
  if(result==0)
      printf("both are equal\n");
  else if(result==1)
      printf("text1 is greater\n");
  else
      printf("text2 is greater\n");
  return 0;
}
int compareStrings(char *t1,char *t2)
{
  while(*t1==*t2 && *t1!='\0' && *t2!='\0')
    {
      ++t1;
      ++t2;
    }
  if(*t1>*t2)
      return 1;
  else if(*t1==*t2)
      return 0;
  else
      return -1;
}
