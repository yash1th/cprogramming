#include<stdio.h>
#define ABSOLUTE_VALUE(x) ((x>0)?(x):(-(x)))
int main(void)
{
  printf("%d\n",ABSOLUTE_VALUE(-3));
  printf("%d\n",ABSOLUTE_VALUE(3));
  printf("%d\n",ABSOLUTE_VALUE(1-4));
  int a=-4;
  printf("%d\n",ABSOLUTE_VALUE(1+a));
  return 0;
}
