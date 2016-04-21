//Program to illustrate using pointers and functions
#include<stdio.h>
void test(int *a);
int main(void)
{
  int i=50,*p=&i;

  printf("before the call : %d\n",i);

  test(p);

  printf("after the call : %d\n",i);
}
void test(int *a)
{
  *a=51;
}
