#include<stdio.h>
float absolute(float a)
{
  if(a<0)
    return -a;
  else
      return a;
}
int main(void)
{
  float guess=1,number;
  printf("Enter the number : ");
  scanf("%f",&number);
  do {
    guess=((number/guess)+guess)/2;

  } while(absolute(guess*guess-number)>0.000002);
  printf("guess = %f \n",guess);
  return 0;
}
