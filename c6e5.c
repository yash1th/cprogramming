#include<stdio.h>
int main(void)
{
  int year,rem4,rem100,rem400;
  printf("Enter the year: ");
  scanf("%d",&year);
  rem4=year%4;
  rem100=year%100;
  rem400=year%400;
  if((rem4==0&&rem100!=0)&&(rem400==0))
    printf("Yes!!! %d is a leap year \n",year);
  else
    printf("No :( %d is not a leap year \n",year);
  return 0;
}
