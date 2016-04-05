#include<stdio.h>
float squareRoot(float);
float discriminant(int,int,int);
void roots(int,int,int);
float absolute(float);
int main(void)
{
  roots(1,1,1);
  roots(1,2,1);
  roots(1,-3,2);
  return 0;
}
//Calculates the square roots of the given quadratic equation
void roots(int a,int b,int c)
{
  float disc;
  disc=discriminant(a,b,c);
  float root1,root2;
  if(disc<0)
    printf("it has imaginary square roots \n");
  else if(disc==0)
      {
        printf("The roots are \n%.2f\n%.2f\n",((float)-b/(2*a)),((float)-b/(2*a)));
      }
  else{
      root1=(-b+squareRoot(disc))/(2*a);
      root2=(-b-squareRoot(disc))/(2*a);
      printf("the square roots are : \n");
      printf("%.2f\n%.2f \n",root1,root2);
  }
}
//Calculates the discriminant value to check whether it can have any roots possible or not
float discriminant(int a,int b,int c)
{
  int disc;
  disc=(b*b)-(4*a*c);
  return disc;
}
//Calculates the squareroot of the discriminant
float squareRoot(float number)
{
  float guess=1;
  do {
    guess=((number/guess)+guess)/2;
  } while(absolute(guess*guess-number)>0.000002);
  return guess;
}
//Finds the absolute value of a number
float absolute(float a)
{
  if(a<0)
    return -a;
  else
      return a;
}
