#include<stdio.h>
void gcd(int u,int v)
{
  printf("the gcd of %d and %d is ",u,v);
  int temp;
  while(v!=0)
  {
    temp=u%v;
    u=v;
    v=temp;
  }
  printf("%d\n",u);

}
int main(void)
{
  gcd(150,35);
  gcd(1026,405);
  gcd(83,240);
  return 0;
}
