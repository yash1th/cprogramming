#include<stdio.h>
#define MAX3(a,b,c) ((a>b)?((a>c)?a:c):((b>c)?b:c))
int main(void)
{
  printf("maximum number is %d\n",MAX3(1,2,3));
  return 0;
}
