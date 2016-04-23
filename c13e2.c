#include<stdio.h>
#define PI 3.141592654
double area(double);
double circumference(double);
double volume(double);
int main(void)
{
  printf("for radius = 1 :\narea - %.4f\ncircumference - %.4f\nvolume - %.4f\n",
          area(1.0),circumference(1.0),volume(1.0));
  return 0;
}
double area(double r)
{
  return PI*r*r;
}
double circumference(double r)
{
  return 2.0*PI*r;
}
double volume(double r)
{
  return (4.0/3.0)*PI*r*r;
}
