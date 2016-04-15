#include<stdio.h>
void upperCase(char[]);
int main(void)
{
  char text[]="hello";
  upperCase(text);
  printf("cap text : %s\n",text);
  return 0;
}
void upperCase(char a[])
{
  int i=0;
  while(a[i]!='\0')
  {
    a[i]=a[i]+'A'-'a';
    i++;
  }
}
