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
  for(;*from!='\0';from+=1,to+=1)
    {
      *to=*from;
    }
  *to='\0';
}

//using arrays version

/*
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
void copyString(char to[],char from[])
{
  int i;
  for(i=0;from[i]!='\0';i+=1)
    {
      to[i]=from[i];
    }
  to[i]='\0';
}
*/
