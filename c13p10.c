#include<stdio.h>
#define printx(n) printf("%d\n",0x##n)

//#define printx(n) printf("%d\n",0##x##n)

int main(void)
{
  printx(20);
  return 0;
}

//the given question won't work because
//in printx the variable x is treated as unknown
//to print a hexadecimal value you got to have 0 before it
//that's my understanding of it
