#include<stdio.h>
float absolute(float a)
{
  if(a<0)
    return -a;
  else
      return a;
}
int squareRoot(float number)
{
  float guess=1;
  do {
    guess=((number/guess)+guess)/2;
  } while(absolute(guess*guess-number)>0.000002);
  printf("square root of %f = %f \n",number,guess);
  return 0;
}
int main(void)
{
  squareRoot(2);
  squareRoot(3);
  squareRoot(5);
  return 0;
}
