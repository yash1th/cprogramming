#include<stdio.h>
#include<stdbool.h>
int prime(int);
int main(void)
{
  int result=prime(24);
  printf("Result = %d \n",result);
}
int prime(int a)
{
  _Bool isPrime;
  if(a%2==0)
    return 0;
  else
    {
      isPrime=true;
      for(int i=3;i<a;i=i+2)
        {
          if(a%i==0)
            isPrime=false;
        }
        if(isPrime==true)
          return 1;
    }
  return 0;
}
