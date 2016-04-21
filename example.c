#include<stdio.h>
int main(void)
{
  int a=10;
  int *p=&a;
  int **pp=&p;

  **pp=20;

  printf("a = %d\n",a);

  return 0;

}
