#include<stdio.h>
void calculateTriangularNumber(int number)
{
  int i,triangularNumber=0;
  for(i=1;i<=number;i++)
    {
      triangularNumber+=i;
    }
  printf("Triangular Number of %i is %i \n",number,triangularNumber);
}
int main(void)
{
  calculateTriangularNumber(20);

  return 0;
}
