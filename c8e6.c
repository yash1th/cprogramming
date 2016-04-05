#include<stdio.h>
int gcd(int,int);
int main(void)
{
  int result;
  result=gcd(150,35);
  printf("The gcd of 150 and 35 is %i\n",result);
  return 0;
}
int gcd(int u,int v)
{
  int temp;
  while(v!=0)
  {
    temp=u%v;
    u=v;
    v=temp;
  }
  return u;
}
