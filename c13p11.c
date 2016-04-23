#include<stdio.h>
#include<ctype.h>
int main(void)
{
  printf("%d\n",isupper('A'));
  printf("%d\n",islower('A'));
  printf("%d\n",isdigit('0'));
  printf("%d\n",isalpha('y'));
  return 0;
}


//http://www.nongnu.org/avr-libc/user-manual/ctype_8h_source.html
