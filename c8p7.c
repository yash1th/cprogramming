#include<stdio.h>
long int x_to_n(int,int);
int main(void)
{
  int x,n;
  printf("enter the number : ");
  scanf("%d",&x);
  printf("enter the power: ");
  scanf("%d",&n);
  long int result=x_to_n(x,n);
  printf("power(%d,%d) = %ld \n",x,n,result);
  return 0;
}
long int x_to_n(int x,int n)
{
  long int result;
  if(n==0)
     result=1;
  else
    result=(x)*x_to_n(x,n-1);
  return result;
}
