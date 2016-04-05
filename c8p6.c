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
  float value;
  do {
    guess=((number/guess)+guess)/2;
    printf("guess %d = %f \n",count,guess);
    count++;
    value=absolute(guess*guess-number);
    printf("value count %d = %f ",count,value);
    //if you give a very smaller epsilon, it will go on to infinite loop.
    //since we are dealing with the double precision in square roots.
    if(count>20)
      break;
  } while(absolute(guess*guess-number)>epsilon);
  return guess;
}
int main(void)
{
  printf("square root (0.25,0.02) = %.2f \n",squareRoot(0.25,0.02));
  return 0;
}
