#include<stdio.h>
float absolute(float a)
{
  if(a<0)
    return -a;
  else
      return a;
}
float squareRoot(float number,float epsilon)
{
  float guess=1;
  int count=1;
  do {
    guess=((number/guess)+guess)/2;
    printf("guess %d = %f \n",count,guess);
    count++;
  } while(absolute(guess*guess-number)>epsilon);
  return guess;
}
int main(void)
{
  //printf("square root (18.0,0.002) = %f \n",squareRoot(18,0.002));
  //printf("square root (18.0,0.000002) = %f \n",squareRoot(18,0.0002));
  printf("square root (25.0,0.0000002) = %f \n",squareRoot(25,0.000002));
  return 0;
}
