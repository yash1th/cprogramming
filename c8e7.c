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
  float f1=-15.5,f2=20.0,f3=-5.0;
  int i1=-716;
  float result;

  result = absolute(f1);
  printf("result=%.2f\n",result);
  printf("f1=%.2f \n",f1);

  result=absolute(f2)+absolute(f3);
  printf("result = %.2f\n",result);

  result=absolute((float)i1);
  printf("result = %.2f\n",result);

  result=absolute(i1);
  printf("result=%.2f\n",result);

  printf("%.2f\n",absolute(-6.0)/4);
  return 0;
}
