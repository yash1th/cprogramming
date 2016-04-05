#include<stdio.h>
float absolute(float a)
{
  if(a<0)
    return -a;
  else
      return a;
}
float squareRoot(float number)
{
  float guess=1;
  do {
    guess=((number/guess)+guess)/2;
  } while(absolute(guess*guess-number)>0.000002);
  return guess;
}
int main(void)
{
  printf("square root (2.0) = %f \n",squareRoot(2));
  printf("square root (3.0) = %f \n",squareRoot(3));
  printf("square root (5.0) = %f \n",squareRoot(5));
    return 0;
}
