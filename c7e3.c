#include<stdio.h>
int main()
{
  int fib[15]={0};
  fib[1]=1;
  for(int i=2;i<15;i++)
    fib[i]=fib[i-1]+fib[i-2];
  for(int i=0;i<15;i++)
      printf("%i  ",fib[i]);
  printf("\n");
  return 0;
}
