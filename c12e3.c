#include<stdio.h>
unsigned int shift(unsigned int, int);
int main(void)
{
  unsigned int w1=0177777u, w2=0444u;

  printf("%o\t%o\n",shift(w1,5),w1<<5);
  printf("%o\t%o\n",shift(w1,-6),w1>>6);
  printf("%o\t%o\n",shift(w2,0),w2>>0);
  printf("%o\n",shift(shift(w1,-3),3));

  return 0;
}
unsigned int shift(unsigned int value,int n)
{
  if(n>0)
    value<<=n;
  else
    value>>=-n;
  return value;
}
