#include<stdio.h>
int main(void)
{
  char a[2];
  a[0]='c';
  a[1]='h';
  a[2]='a';
  //a[3]='\0';
  printf("string = %s\n",a);
  return a;
}
