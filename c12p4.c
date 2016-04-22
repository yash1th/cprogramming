//Program to illustrate rotation of integers
#include<stdio.h>
unsigned int rotate(unsigned int value, int n);
int int_size(int);
int main(void)
{
  unsigned int w1= 0xabcdef00u, w2 = 0xffff1122u;
  printf ("%x\n", rotate (w1, 8));
  printf ("%x\n", rotate (w1, -16));
  printf ("%x\n", rotate (w2, 4));
  printf ("%x\n", rotate (w2, -2));
  printf ("%x\n", rotate (w1, 0));
  printf ("%x\n", rotate (w1, 44));

  return 0;
}
unsigned int rotate(unsigned int value, int n)
{
  unsigned int result,bits;

  //scale down the shift count to a defined range of int
  unsigned int size=int_size(value);
  if(n>0)
    n%=size;
  else
    n=-(-n%size);

  if(n==0)
    return value;
  else if(n>0){     //left rotate

      bits=value>>(32-n);
      result=value<<n | bits;
  }
  else
  {           //right rotate
    n=-n;
    bits=value<<(32-n);
    result=value>>n | bits;
  }
  return result;
}
int int_size(int number)
{
  int size=0;
  unsigned int bits=1;
  bits=number|1;

  while(bits)
  {
    ++size;
    bits=bits>>1;
  }
  return size;
}
