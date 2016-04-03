#include<stdio.h>
int main(void)
{
  long long int fib1=0,fib2=1,fib3=0;
  int i=0;
  int num;
  printf("how many # of fibonacci numbers you want : ");
  scanf("%d",&num);
  printf("%lli \n",fib1);
  printf("%lli \n",fib2);
  while(i<num-2)
  {
    fib3=fib1+fib2;
    printf("%lli \n",fib3);
    fib1=fib2;
    fib2=fib3;
    i++;
  }
  return 0;

}
