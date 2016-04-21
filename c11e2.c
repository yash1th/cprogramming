#include<stdio.h>
int main(void)
{
  char c='Q';
  char *char_pointer=&c;

  //char *char_pointer; char_pointer = &c;

  //not char *char_pointer;
  //*char_pointer = &c;
  //because a variable has to be declared before it can be referenced
  //to be used
  
  printf("%c %c \n",c,*char_pointer);

  c='/';
  printf("%c %c \n",c,*char_pointer);

  *char_pointer = '(';
  printf("%c %c \n",c,*char_pointer);

  return 0;
}
