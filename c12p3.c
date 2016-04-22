#include<stdio.h>
int int_size(void);
int main(void)
{
  printf("number of bits in int : %d \n",int_size());
  return 0;
}
int int_size(void)
{
  int size=0;
  unsigned int bits=0;
  bits=~0;

  while(bits)
  {
    ++size;
    bits=bits>>1;
  }
  return size;
}
