#include<stdio.h>
void copyString(char *to,char *from);
int main(void)
{
  char string1[]="A string to be copied";
  char string2[50];

  copyString(string2,string1);
  printf("string 2 : %s\n",string2);

  copyString(string2,"I feel like i am worthless");
  printf("string 2 : %s\n",string2);

  return 0;
}
void copyString(char *to,char *from)
{
  /*for(;*from!='\0';)
    {
      *to++=*from++;
    }*/
  //the above for loop is absolutely right. but since it doesn't
  //seem like there is a use for it(no initial expr,no increment operator)
  //we could use the while by taking the advantage of the fact that
  //the value of null character is 0.

  while(*from)
  {
    *to++=*from++;
  }
  *to='\0';
}
