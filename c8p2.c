#include<stdio.h>
int calculateTriangularNumber(int number)
{
  int i,triangularNumber=0;
  for(i=1;i<=number;i++)
    {
      triangularNumber+=i;
    }
  return triangularNumber;
}
int main(void)
{
  int number,result;
  for(int counter=1;counter<=5;counter++)
  {
    printf("What triangularNumber do you want? ");
    scanf("%i",&number);
    result=calculateTriangularNumber(number);
    printf("Triangular number %i is %i \n",number,result);
  }
  return 0;
}
