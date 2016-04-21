#include<stdio.h>
int main(void)
{
  int count=10,x;
  int *int_pointer;

  int_pointer=&count;
  count=20;
  x=*int_pointer;

  printf("count = %i\n x= %i\n",count,x);

  return 0;
}
