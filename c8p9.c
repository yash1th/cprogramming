#include<stdio.h>
void lcm(int,int);
int gcd(int,int);
int main(void)
{
  lcm(2,0);
  return 0;
}
void lcm(int a,int b)
{
  if(a<=0 || b<=0)
    {
      printf("LCM is not possible\n");
      return;
    }
  int result;
  result=(a*b)/gcd(a,b);
  printf("lcm of %d and %d is %d \n",a,b,result);

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
